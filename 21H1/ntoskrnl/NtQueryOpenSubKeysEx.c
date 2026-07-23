/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x140863F90
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     CmpSearchForOpenSubKeys @ 0x140659498 (CmpSearchForOpenSubKeys.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rsi
  NTSTATUS v8; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  size_t v13; // r14
  PVOID TransientPoolWithQuotaTag; // rax
  PADAPTER_OBJECT v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  char *v22; // rdx
  signed __int64 v23; // r10
  unsigned int v24; // r9d
  char v26; // [rsp+40h] [rbp-1E8h]
  BOOLEAN v27; // [rsp+41h] [rbp-1E7h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1E0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v30; // [rsp+60h] [rbp-1C8h]
  __int128 v31; // [rsp+70h] [rbp-1B8h]
  int v32; // [rsp+80h] [rbp-1A8h]
  _OWORD v33[3]; // [rsp+88h] [rbp-1A0h] BYREF
  _OWORD v34[19]; // [rsp+C0h] [rbp-168h] BYREF

  v6 = BufferLength;
  v32 = 0;
  memset(v33, 0, sizeof(v33));
  DmaAdapter = 0LL;
  memset(v34, 0, 0x128uLL);
  LODWORD(v34[6]) = -1;
  *((_QWORD *)&v34[9] + 1) = &v34[9];
  *(_QWORD *)&v34[9] = &v34[9];
  memset((char *)&v34[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Size = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v26 = 0;
  v27 = CmpAcquireShutdownRundown();
  if ( !v27 )
  {
    v8 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v8 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v8 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v11 = (__int64)RequiredSize;
    if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v8 = ObReferenceObjectByNameEx(
         (__int64)TargetKey,
         v10,
         131097,
         (__int64)CmKeyObjectType,
         PreviousMode,
         (__int64)v34,
         &DmaAdapter);
  if ( v8 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v13 = v6;
    TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v12, v6, 0x31384D43u);
    Size[1] = (size_t)TransientPoolWithQuotaTag;
    if ( TransientPoolWithQuotaTag )
    {
      memset(TransientPoolWithQuotaTag, 0, LODWORD(Size[0]));
      CmpLockRegistryExclusive();
      v26 = 1;
      v15 = DmaAdapter;
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
      if ( v8 >= 0 )
      {
        if ( ((__int64)v15->DmaOperations->MapTransferEx & 0x40000) == 0 )
        {
LABEL_8:
          v8 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Size[1] = 0;
        LODWORD(v30) = 8;
        *((_QWORD *)&v31 + 1) = v13 + Size[1];
        *(_QWORD *)&v31 = v15;
        *(_QWORD *)((char *)&v30 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess((__int64)v33, v16, v17, v18);
        CmpSearchForOpenSubKeys((__int64)v15->DmaOperations, 0, (__int64)Size);
        CmpDetachFromRegistryProcess((__int64)v33, v19, v20, v21);
        v8 = DWORD1(v30);
        CmpUnlockRegistry();
        v26 = 0;
        *RequiredSize = v30;
        v22 = (char *)Size[1];
        *(_DWORD *)Buffer = *(_DWORD *)Size[1];
        if ( v8 >= 0 )
        {
          v23 = v22 - (_BYTE *)Buffer;
          v24 = 0;
          if ( *(_DWORD *)v22 )
          {
            do
            {
              *(_QWORD *)&v22[24 * ++v24] -= v23;
              v22 = (char *)Size[1];
            }
            while ( v24 < *(_DWORD *)Size[1] );
          }
          memmove(Buffer, v22, v13);
          v8 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
LABEL_22:
  if ( v26 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v34, 0);
  if ( v27 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  return v8;
}
