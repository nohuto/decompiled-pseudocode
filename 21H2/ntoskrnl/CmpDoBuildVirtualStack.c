/*
 * XREFs of CmpDoBuildVirtualStack @ 0x14086FF9C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1408709C4 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpCleanupParseContext @ 0x140655A80 (CmpCleanupParseContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140669070 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpAssignSecurityToKcb @ 0x14066A130 (CmpAssignSecurityToKcb.c)
 *     CmpHashUnicodeComponent @ 0x14066A224 (CmpHashUnicodeComponent.c)
 *     CmpUnlockHashEntryByKcb @ 0x14066C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x1406FB380 (CmpStartKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14076FAF8 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14076FB28 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopySaclToVirtualKey @ 0x1408717C4 (CmpCopySaclToVirtualKey.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D1CC (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  int AccessStateFromSubjectContext; // ebx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  unsigned int v15; // r14d
  _DWORD *v16; // r15
  __m128i *v17; // r12
  __int64 v18; // r13
  __int64 v19; // r8
  struct _LOOKASIDE_LIST_EX *v20; // r9
  int v21; // eax
  int v22; // eax
  ULONG_PTR v23; // rdi
  __int64 v24; // rdx
  unsigned int v25; // ebx
  ULONG_PTR v26; // r14
  __int64 v27; // r12
  __int64 v28; // rdi
  ULONG_PTR v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-80h] BYREF
  int v36[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-60h]
  int v38[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 v42[38]; // [rsp+E0h] [rbp-20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v43[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v44[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v5 = a3;
  v41 = a3;
  v6 = a2;
  v34 = a2;
  v7 = a1;
  v40 = a1;
  memset(v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
  v32 = 0xFFFFFFFFLL;
  v33 = 0xFFFFFFFFLL;
  LOBYTE(v31) = 0;
  BugCheckParameter2[0] = 0LL;
  memset(v42, 0, 0x128uLL);
  LODWORD(v42[12]) = -1;
  v42[19] = (__int64)&v42[18];
  v42[18] = (__int64)&v42[18];
  memset(&v42[27], 0, 0x50uLL);
  *(_OWORD *)v36 = 0LL;
  HIWORD(v36[0]) = -1;
  *(_OWORD *)v38 = 0LL;
  HIWORD(v38[0]) = -1;
  v37 = 0LL;
  v39 = 0LL;
  CmpAttachToRegistryProcess((__int64)&v42[21], v9, v10, v11);
  LODWORD(v42[20]) |= 1u;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a5,
                                    (unsigned int)v43,
                                    (unsigned int)v44,
                                    4,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v15 = 0;
    if ( v6 )
    {
      v16 = (_DWORD *)(v7 + 40);
      while ( 1 )
      {
        *(_OWORD *)v38 = 0LL;
        LODWORD(v42[3]) = 0;
        *(_OWORD *)v36 = 0LL;
        v39 = 0LL;
        HIWORD(v38[0]) = -1;
        v37 = 0LL;
        HIWORD(v36[0]) = -1;
        v17 = (__m128i *)(v7 + 48LL * v15);
        v18 = *((_QWORD *)v16 - 3);
        AccessStateFromSubjectContext = CmpStartKcbStack((__int64)v38, *(_WORD *)(v18 + 66), v13, v14);
        if ( AccessStateFromSubjectContext < 0 )
          break;
        AccessStateFromSubjectContext = CmpStartKcbStackForTopLayerKcb((__int64)v36, v18, v19, v20);
        if ( AccessStateFromSubjectContext < 0 )
          break;
        v21 = CmpHashUnicodeComponent(v17);
        LODWORD(v30) = v21 + 37 * *(_DWORD *)(v18 + 16);
        v22 = CmpWalkOneLevel(
                v18,
                (__int64)v36,
                BugCheckParameter2,
                (__int64)v38,
                (bool *)&v31,
                v17,
                v21,
                v30,
                0LL,
                1,
                (__int64)v42);
        v23 = BugCheckParameter2[0];
        AccessStateFromSubjectContext = v22;
        if ( v22 < 0 )
          goto LABEL_20;
        if ( *(_DWORD *)(BugCheckParameter2[0] + 40) == -1 )
        {
          if ( *v16 == 1 || *(int *)(v18 + 40) < 0 )
            LODWORD(v42[3]) = 1;
          LODWORD(v42[0]) = 1;
          CmpLockKcbStackTopExclusiveRestShared((__int64)v36);
          CmpLockKcbStackTopExclusiveRestShared((__int64)v38);
          AccessStateFromSubjectContext = CmpCreateChild(
                                            (__int64)v36,
                                            (__int64)v38,
                                            (__int64)v43,
                                            (unsigned __int16 *)v17,
                                            (__int64)v42,
                                            512,
                                            3,
                                            0,
                                            0LL);
          if ( AccessStateFromSubjectContext < 0 )
          {
            CmpUnlockKcbStack((__int64)v38);
            CmpUnlockKcbStack((__int64)v36);
LABEL_20:
            if ( v23 )
              CmpDereferenceKeyControlBlock(v23);
            break;
          }
          CmpUnlockKcbStack((__int64)v38);
          CmpUnlockKcbStack((__int64)v36);
        }
        CmpUnlockHashEntryByKcb(v23);
        v6 = v34;
        v7 = v40;
        *((_QWORD *)v16 - 2) = v23;
        *(v16 - 1) = *(_DWORD *)(v23 + 40);
        if ( v15 < v6 - 1 )
        {
          v24 = 6LL * (v15 + 1);
          *(_QWORD *)(v7 + 8 * v24 + 16) = v23;
          *(_DWORD *)(v7 + 8 * v24 + 32) = *(_DWORD *)(v23 + 40);
        }
        BugCheckParameter2[0] = 0LL;
        CmpCleanupKcbStack((__int64)v38);
        CmpCleanupKcbStack((__int64)v36);
        ++v15;
        v16 += 12;
        if ( v15 >= v6 )
        {
          v5 = v41;
          goto LABEL_17;
        }
      }
      CmpCleanupKcbStack((__int64)v38);
      CmpCleanupKcbStack((__int64)v36);
    }
    else
    {
LABEL_17:
      v25 = *(_DWORD *)(v7 + 48LL * (v6 - 1) + 36);
      v26 = *(_QWORD *)(v7 + 48LL * (v6 - 1) + 24);
      HvMarkCellDirty(*(_QWORD *)(a4 + 32), *(unsigned int *)(a4 + 40), 0LL);
      HvMarkCellDirty(v5, v25, 0LL);
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(a4 + 32) + 8LL))(
              *(_QWORD *)(a4 + 32),
              *(unsigned int *)(a4 + 40),
              &v32);
      if ( v27 )
      {
        v28 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(v5 + 8))(v5, v25, &v33);
        if ( v28 )
        {
          CmpLockTwoSecurityCachesExclusiveShared(v5, *(_QWORD *)(a4 + 32));
          AccessStateFromSubjectContext = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 32), v27, v5, v28, v25);
          CmpUnlockTwoSecurityCaches(v5, *(_QWORD *)(a4 + 32));
          if ( AccessStateFromSubjectContext >= 0 )
          {
            CmpAssignSecurityToKcb(v26, *(unsigned int *)(v28 + 44), 0LL, 0, 0);
            *(_WORD *)(v26 + 186) |= 0x100u;
            *(_WORD *)(v28 + 2) |= 0x100u;
            *(_WORD *)(a4 + 186) |= 0x80u;
            *(_WORD *)(v27 + 2) |= 0x80u;
            AccessStateFromSubjectContext = 0;
          }
        }
        else
        {
          AccessStateFromSubjectContext = -1073741670;
        }
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a4 + 32) + 16LL))(*(_QWORD *)(a4 + 32), &v32);
        if ( v28 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v26 + 32) + 16LL))(*(_QWORD *)(v26 + 32), &v33);
      }
      else
      {
        AccessStateFromSubjectContext = -1073741670;
      }
    }
    SeDeleteAccessState(v43);
  }
  if ( (v42[20] & 1) != 0 )
  {
    CmpDetachFromRegistryProcess((__int64)&v42[21]);
    LODWORD(v42[20]) &= ~1u;
  }
  CmpCleanupParseContext((__int64)v42, 1);
  return (unsigned int)AccessStateFromSubjectContext;
}
