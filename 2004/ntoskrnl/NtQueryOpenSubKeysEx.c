/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1408652B0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpSearchForOpenSubKeys @ 0x14064FE48 (CmpSearchForOpenSubKeys.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
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
  char *v16; // rdx
  signed __int64 v17; // r10
  unsigned int v18; // r9d
  char v20; // [rsp+40h] [rbp-1E8h]
  BOOLEAN v21; // [rsp+41h] [rbp-1E7h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1E0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v24; // [rsp+60h] [rbp-1C8h]
  __int128 v25; // [rsp+70h] [rbp-1B8h]
  int v26; // [rsp+80h] [rbp-1A8h]
  _OWORD v27[3]; // [rsp+88h] [rbp-1A0h] BYREF
  _OWORD v28[19]; // [rsp+C0h] [rbp-168h] BYREF

  v6 = BufferLength;
  v26 = 0;
  memset(v27, 0, sizeof(v27));
  DmaAdapter = 0LL;
  memset(v28, 0, 0x128uLL);
  LODWORD(v28[6]) = -1;
  *((_QWORD *)&v28[9] + 1) = &v28[9];
  *(_QWORD *)&v28[9] = &v28[9];
  memset((char *)&v28[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Size = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0;
  v21 = CmpAcquireShutdownRundown();
  if ( !v21 )
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
         0x20019u,
         (__int64)CmKeyObjectType,
         PreviousMode,
         (__int64)v28,
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
      v20 = 1;
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
        LODWORD(v24) = 8;
        *((_QWORD *)&v25 + 1) = v13 + Size[1];
        *(_QWORD *)&v25 = v15;
        *(_QWORD *)((char *)&v24 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess((__int64)v27);
        CmpSearchForOpenSubKeys((__int64)v15->DmaOperations, 0, (__int64)Size);
        CmpDetachFromRegistryProcess((__int64)v27);
        v8 = DWORD1(v24);
        CmpUnlockRegistry();
        v20 = 0;
        *RequiredSize = v24;
        v16 = (char *)Size[1];
        *(_DWORD *)Buffer = *(_DWORD *)Size[1];
        if ( v8 >= 0 )
        {
          v17 = v16 - (_BYTE *)Buffer;
          v18 = 0;
          if ( *(_DWORD *)v16 )
          {
            do
            {
              *(_QWORD *)&v16[24 * ++v18] -= v17;
              v16 = (char *)Size[1];
            }
            while ( v18 < *(_DWORD *)Size[1] );
          }
          memmove(Buffer, v16, v13);
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
  if ( v20 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v28, 0);
  if ( v21 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  return v8;
}
