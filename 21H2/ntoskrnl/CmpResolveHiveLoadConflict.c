/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x140914914
 * Callers:
 *     CmLoadKey @ 0x1406DD184 (CmLoadKey.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140208994 (CmpUnJoinClassOfTrust.c)
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     CmpJoinClassOfTrust @ 0x140256264 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1402562E0 (CmpPerformTrustClassAccessCheck.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpRecordUnloadEventForHive @ 0x14069FB88 (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlock @ 0x14071B250 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1409147B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        char a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v12; // r12
  int v13; // eax
  __int64 *v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // edi
  unsigned int v22; // r15d
  unsigned int v23; // eax
  __int64 *v24; // rbx
  int v25; // edx
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _QWORD *v32; // [rsp+60h] [rbp-A0h]
  _OWORD v33[19]; // [rsp+70h] [rbp-90h] BYREF

  v30 = a8;
  v31 = a2;
  v32 = a9;
  v29 = 0LL;
  v12 = 0LL;
  Object = 0LL;
  memset(v33, 0, 0x128uLL);
  LODWORD(v33[6]) = -1;
  *((_QWORD *)&v33[9] + 1) = &v33[9];
  *(_QWORD *)&v33[9] = &v33[9];
  memset((char *)&v33[13] + 8, 0, 0x50uLL);
  v13 = ObReferenceObjectByNameEx(
          a1,
          0LL,
          0x20019u,
          (__int64)CmKeyObjectType,
          0,
          (__int64)v33,
          (PADAPTER_OBJECT *)&Object);
  v14 = (__int64 *)Object;
  if ( v13 < 0 )
  {
    v15 = -1073741275;
    goto LABEL_26;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_8;
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v20 = CmpPerformTrustClassAccessCheck(v12, a7);
    v21 = v20;
    if ( v20 < 0 )
    {
      v22 = v20;
      v23 = 32;
LABEL_17:
      SetFailureLocation(a6, 0, 33, v22, v23);
      if ( v21 == -1073741275 )
        v21 = -1073741823;
      v15 = v21;
      goto LABEL_25;
    }
LABEL_8:
    if ( CmpIsHiveAlreadyLoaded((__int64)v14, v31, a3, &v29, v30) )
    {
      v24 = v29;
      v25 = *((_DWORD *)v29 + 40);
      if ( ((v25 & 0x8000) == 0 || (a3 & 0x2000) != 0) && ((v25 & 0x8000) != 0 || (a3 & 0x2000) == 0) )
      {
        CmpLockKcbExclusive(v14[1]);
        if ( (a3 & 0x800) != 0 )
        {
          CmpReferenceKeyControlBlock(v14[1]);
          *v32 = v14[1];
        }
        if ( !a5 || (v21 = CmpRecordUnloadEventForHive((__int64)v24, a5), v22 = v21, v21 >= 0) )
        {
          CmpUnlockKcb(v14[1]);
          if ( v12 )
          {
            CmpUnJoinClassOfTrust((__int64)v24);
            *((_DWORD *)v24 + 1028) |= 1u;
            CmpJoinClassOfTrust((__int64)v24, v12, a7);
          }
          v15 = 0;
          goto LABEL_25;
        }
        CmpUnlockKcb(v14[1]);
        v23 = 80;
        goto LABEL_17;
      }
      v27 = 64;
    }
    else
    {
      v27 = 48;
    }
    v15 = -1073741757;
    SetFailureLocation(a6, 0, 33, 0xC0000043, v27);
    goto LABEL_25;
  }
  v15 = -1073741444;
  SetFailureLocation(a6, 0, 33, 0xC000017C, 0x10u);
LABEL_25:
  CmpUnlockRegistry(v17, v16, v18, v19);
  UNLOCK_HIVE_LOAD();
LABEL_26:
  if ( v14 )
    ObfDereferenceObject(v14);
  CmpCleanupParseContext(v33, 0LL);
  return v15;
}
