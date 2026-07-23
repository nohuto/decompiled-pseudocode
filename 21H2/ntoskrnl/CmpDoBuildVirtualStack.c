/*
 * XREFs of CmpDoBuildVirtualStack @ 0x1408700FC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpAssignSecurityToKcb @ 0x14065EF50 (CmpAssignSecurityToKcb.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     CmpUnlockHashEntryByKcb @ 0x140660E70 (CmpUnlockHashEntryByKcb.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStack @ 0x140712760 (CmpStartKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14076FCB8 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14076FCE8 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopySaclToVirtualKey @ 0x140871924 (CmpCopySaclToVirtualKey.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D32C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // r13
  int AccessStateFromSubjectContext; // ebx
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  unsigned int v12; // r14d
  _DWORD *v13; // r15
  __m128i *v14; // r12
  __int64 v15; // r13
  __int64 v16; // r8
  struct _LOOKASIDE_LIST_EX *v17; // r9
  int v18; // eax
  int v19; // eax
  ULONG_PTR v20; // rdi
  __int64 v21; // rdx
  unsigned int v22; // ebx
  ULONG_PTR v23; // r14
  __int64 v24; // r12
  __int64 v25; // rdi
  ULONG_PTR v27; // [rsp+38h] [rbp-C8h]
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-80h] BYREF
  int v33[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-60h]
  int v35[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-28h]
  __int64 v39[38]; // [rsp+E0h] [rbp-20h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v40[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v41[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v5 = a3;
  v38 = a3;
  v6 = a2;
  v31 = a2;
  v7 = a1;
  v37 = a1;
  memset(v40, 0, sizeof(v40));
  memset(v41, 0, sizeof(v41));
  v29 = 0xFFFFFFFFLL;
  v30 = 0xFFFFFFFFLL;
  LOBYTE(v28) = 0;
  BugCheckParameter2[0] = 0LL;
  memset(v39, 0, 0x128uLL);
  LODWORD(v39[12]) = -1;
  v39[19] = (__int64)&v39[18];
  v39[18] = (__int64)&v39[18];
  memset(&v39[27], 0, 0x50uLL);
  *(_OWORD *)v33 = 0LL;
  HIWORD(v33[0]) = -1;
  *(_OWORD *)v35 = 0LL;
  HIWORD(v35[0]) = -1;
  v34 = 0LL;
  v36 = 0LL;
  CmpAttachToRegistryProcess((__int64)&v39[21]);
  LODWORD(v39[20]) |= 1u;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a5,
                                    (unsigned int)v40,
                                    (unsigned int)v41,
                                    4,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v12 = 0;
    if ( v6 )
    {
      v13 = (_DWORD *)(v7 + 40);
      while ( 1 )
      {
        *(_OWORD *)v35 = 0LL;
        LODWORD(v39[3]) = 0;
        *(_OWORD *)v33 = 0LL;
        v36 = 0LL;
        HIWORD(v35[0]) = -1;
        v34 = 0LL;
        HIWORD(v33[0]) = -1;
        v14 = (__m128i *)(v7 + 48LL * v12);
        v15 = *((_QWORD *)v13 - 3);
        AccessStateFromSubjectContext = CmpStartKcbStack((__int64)v35, *(_WORD *)(v15 + 66), v10, v11);
        if ( AccessStateFromSubjectContext < 0 )
          break;
        AccessStateFromSubjectContext = CmpStartKcbStackForTopLayerKcb((__int64)v33, v15, v16, v17);
        if ( AccessStateFromSubjectContext < 0 )
          break;
        v18 = CmpHashUnicodeComponent(v14);
        LODWORD(v27) = v18 + 37 * *(_DWORD *)(v15 + 16);
        v19 = CmpWalkOneLevel(
                v15,
                (__int64)v33,
                BugCheckParameter2,
                (__int64)v35,
                (bool *)&v28,
                v14,
                v18,
                v27,
                0LL,
                1,
                (__int64)v39);
        v20 = BugCheckParameter2[0];
        AccessStateFromSubjectContext = v19;
        if ( v19 < 0 )
          goto LABEL_20;
        if ( *(_DWORD *)(BugCheckParameter2[0] + 40) == -1 )
        {
          if ( *v13 == 1 || *(int *)(v15 + 40) < 0 )
            LODWORD(v39[3]) = 1;
          LODWORD(v39[0]) = 1;
          CmpLockKcbStackTopExclusiveRestShared((__int64)v33);
          CmpLockKcbStackTopExclusiveRestShared((__int64)v35);
          AccessStateFromSubjectContext = CmpCreateChild(
                                            (__int64)v33,
                                            (__int64)v35,
                                            (__int64)v40,
                                            (UNICODE_STRING *)v14,
                                            (__int64)v39,
                                            512,
                                            3,
                                            0,
                                            0LL);
          if ( AccessStateFromSubjectContext < 0 )
          {
            CmpUnlockKcbStack((__int64)v35);
            CmpUnlockKcbStack((__int64)v33);
LABEL_20:
            if ( v20 )
              CmpDereferenceKeyControlBlock(v20);
            break;
          }
          CmpUnlockKcbStack((__int64)v35);
          CmpUnlockKcbStack((__int64)v33);
        }
        CmpUnlockHashEntryByKcb(v20);
        v6 = v31;
        v7 = v37;
        *((_QWORD *)v13 - 2) = v20;
        *(v13 - 1) = *(_DWORD *)(v20 + 40);
        if ( v12 < v6 - 1 )
        {
          v21 = 6LL * (v12 + 1);
          *(_QWORD *)(v7 + 8 * v21 + 16) = v20;
          *(_DWORD *)(v7 + 8 * v21 + 32) = *(_DWORD *)(v20 + 40);
        }
        BugCheckParameter2[0] = 0LL;
        CmpCleanupKcbStack((__int64)v35);
        CmpCleanupKcbStack((__int64)v33);
        ++v12;
        v13 += 12;
        if ( v12 >= v6 )
        {
          v5 = v38;
          goto LABEL_17;
        }
      }
      CmpCleanupKcbStack((__int64)v35);
      CmpCleanupKcbStack((__int64)v33);
    }
    else
    {
LABEL_17:
      v22 = *(_DWORD *)(v7 + 48LL * (v6 - 1) + 36);
      v23 = *(_QWORD *)(v7 + 48LL * (v6 - 1) + 24);
      HvMarkCellDirty(*(_QWORD *)(a4 + 32), *(unsigned int *)(a4 + 40), 0LL);
      HvMarkCellDirty(v5, v22, 0LL);
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(a4 + 32) + 8LL))(
              *(_QWORD *)(a4 + 32),
              *(unsigned int *)(a4 + 40),
              &v29);
      if ( v24 )
      {
        v25 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(v5 + 8))(v5, v22, &v30);
        if ( v25 )
        {
          CmpLockTwoSecurityCachesExclusiveShared(v5, *(_QWORD *)(a4 + 32));
          AccessStateFromSubjectContext = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 32), v24, v5, v25, v22);
          CmpUnlockTwoSecurityCaches(v5, *(_QWORD *)(a4 + 32));
          if ( AccessStateFromSubjectContext >= 0 )
          {
            CmpAssignSecurityToKcb(v23, *(unsigned int *)(v25 + 44), 0LL, 0, 0);
            *(_WORD *)(v23 + 186) |= 0x100u;
            *(_WORD *)(v25 + 2) |= 0x100u;
            *(_WORD *)(a4 + 186) |= 0x80u;
            *(_WORD *)(v24 + 2) |= 0x80u;
            AccessStateFromSubjectContext = 0;
          }
        }
        else
        {
          AccessStateFromSubjectContext = -1073741670;
        }
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a4 + 32) + 16LL))(*(_QWORD *)(a4 + 32), &v29);
        if ( v25 )
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v23 + 32) + 16LL))(*(_QWORD *)(v23 + 32), &v30);
      }
      else
      {
        AccessStateFromSubjectContext = -1073741670;
      }
    }
    SeDeleteAccessState(v40);
  }
  if ( (v39[20] & 1) != 0 )
  {
    CmpDetachFromRegistryProcess((__int64)&v39[21]);
    LODWORD(v39[20]) &= ~1u;
  }
  CmpCleanupParseContext((__int64)v39, 1);
  return (unsigned int)AccessStateFromSubjectContext;
}
