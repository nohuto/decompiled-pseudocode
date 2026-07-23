/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x14086C20C
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406D038C (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x140303A00 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x1405AF85C (ExTryConvertSharedToExclusiveLite.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x14068F388 (CmRealKCBToVirtualPath.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14074E0A0 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14074E0D0 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpBuildVirtualReplicationStack @ 0x14086B600 (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x14086B974 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x14086BB80 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x14086C184 (CmpGetVirtualStoreRoot.c)
 *     CmpCopySaclToVirtualKey @ 0x14086C9CC (CmpCopySaclToVirtualKey.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, __int64 a2, char a3, ULONG_PTR *a4)
{
  __int64 v5; // rax
  __int64 v6; // r13
  ULONG_PTR v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  int v10; // ebx
  UNICODE_STRING *v11; // rcx
  unsigned int v12; // eax
  _QWORD *v13; // r14
  int VirtualStoreRoot; // eax
  unsigned int v15; // ebx
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int16 v19; // ax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v22; // [rsp+40h] [rbp-59h]
  unsigned int v23; // [rsp+44h] [rbp-55h] BYREF
  char v24; // [rsp+48h] [rbp-51h]
  unsigned int v25; // [rsp+4Ch] [rbp-4Dh] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp-41h] BYREF
  ULONG_PTR v28; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  __int64 v30; // [rsp+70h] [rbp-29h]
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR *v32; // [rsp+88h] [rbp-11h]
  _OWORD v33[2]; // [rsp+90h] [rbp-9h] BYREF

  P = 0LL;
  v23 = 0;
  v30 = a2;
  v25 = 0;
  v5 = a2;
  v32 = a4;
  v6 = 0LL;
  v24 = a3;
  UnicodeString = 0LL;
  v26[0] = -1;
  v26[1] = 0;
  v27[0] = -1;
  v27[1] = 0;
  memset(v33, 0, sizeof(v33));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v33, 0x20000u);
    v5 = v30;
  }
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  v22 = 0;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && a1 )
    v6 = a1;
  v10 = CmRealKCBToVirtualPath(a1, 0LL, v5, &UnicodeString);
  if ( v10 >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&UnicodeString, &v23, &P) >= 0 )
    {
      v12 = v23;
      v13 = P;
      if ( v23 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(v30, &v28, &v25);
        v7 = v28;
        v10 = VirtualStoreRoot;
        if ( VirtualStoreRoot >= 0 )
        {
          v15 = v25;
          v16 = v28;
          v17 = v25;
          *v32 = v28;
          v13[2] = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))(v7 + 8))(v16, v17, v13 + 3);
          *((_DWORD *)v13 + 8) = v15;
          if ( v13[2] )
          {
            if ( v24 || (v22 = ExTryConvertSharedToExclusiveLite()) != 0 )
            {
              v10 = CmpDoBuildVirtualStack((__int64)v13, v23, v7);
              v25 = *((_DWORD *)&v13[6 * v23 - 1] - 1);
              if ( v10 >= 0 )
              {
                if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), 0LL)
                  && (v18 = v25, (unsigned __int8)HvMarkCellDirty(v7, v25, 0LL)) )
                {
                  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 8LL))(
                         *(_QWORD *)(a1 + 32),
                         *(unsigned int *)(a1 + 40),
                         v26);
                  if ( v8 && (v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v18, v27)) != 0 )
                  {
                    CmpLockTwoSecurityCachesExclusiveShared(v7, *(_QWORD *)(a1 + 32));
                    v10 = CmpCopySaclToVirtualKey(*(_QWORD *)(a1 + 32), v8, v7, v9, v18);
                    CmpUnlockTwoSecurityCaches(v7, *(_QWORD *)(a1 + 32));
                    if ( v10 >= 0 )
                    {
                      v19 = *(_WORD *)(v9 + 2);
                      if ( (v19 & 0x100) == 0 )
                        *(_WORD *)(v9 + 2) = v19 | 0x100;
                      *(_WORD *)(a1 + 186) |= 0x80u;
                      *(_WORD *)(v8 + 2) |= 0x80u;
                    }
                  }
                  else
                  {
                    v10 = -1073741670;
                  }
                }
                else
                {
                  v10 = -1073741443;
                }
              }
              if ( v22 )
                ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
              if ( v8 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), v26);
              if ( v9 )
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v27);
            }
            else
            {
              v10 = -1073741739;
            }
          }
          else
          {
            v10 = -1073741670;
          }
        }
        v12 = v23;
      }
      else
      {
        v10 = -1073741811;
      }
      if ( v13 )
      {
        CmpDestroyVirtualStack((__int64)v13, v12, v7);
        ExFreePoolWithTag(v13, 0);
      }
    }
    else
    {
      v10 = -1073741670;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      p_UnicodeString = &UnicodeString;
      LOBYTE(p_UnicodeString) = 26;
      (*(void (__fastcall **)(UNICODE_STRING *, _OWORD *, _QWORD, _QWORD, __int64, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
        p_UnicodeString,
        v33,
        (unsigned int)v10,
        0LL,
        v6,
        &UnicodeString);
    }
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v11 = &UnicodeString;
    LOBYTE(v11) = 26;
    (*(void (__fastcall **)(UNICODE_STRING *, _OWORD *, _QWORD, _QWORD, __int64, UNICODE_STRING *))((char *)&NlsMbCodePageTag
                                                                                                  + 7))(
      v11,
      v33,
      (unsigned int)v10,
      0LL,
      v6,
      &UnicodeString);
  }
  return (unsigned int)v10;
}
