/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x14086ACD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14020A020 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpSearchForOpenSubKeys @ 0x1406A2128 (CmpSearchForOpenSubKeys.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
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
  __int64 v10; // rcx
  __int64 v11; // rcx
  size_t v12; // r14
  PVOID TransientPoolWithQuotaTag; // rax
  PADAPTER_OBJECT v14; // rsi
  char *v15; // rdx
  signed __int64 v16; // r10
  unsigned int v17; // r9d
  char v19; // [rsp+40h] [rbp-1E8h]
  BOOLEAN v20; // [rsp+41h] [rbp-1E7h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1E0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-1C8h]
  __int128 v24; // [rsp+70h] [rbp-1B8h]
  int v25; // [rsp+80h] [rbp-1A8h]
  _OWORD v26[3]; // [rsp+88h] [rbp-1A0h] BYREF
  _OWORD v27[19]; // [rsp+C0h] [rbp-168h] BYREF

  v6 = BufferLength;
  v25 = 0;
  memset(v26, 0, sizeof(v26));
  DmaAdapter = 0LL;
  memset(v27, 0, 0x128uLL);
  LODWORD(v27[6]) = -1;
  *((_QWORD *)&v27[9] + 1) = &v27[9];
  *(_QWORD *)&v27[9] = &v27[9];
  memset((char *)&v27[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Size = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0;
  v20 = CmpAcquireShutdownRundown();
  if ( !v20 )
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
    v10 = (__int64)RequiredSize;
    if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v8 = ObReferenceObjectByNameEx(
         (__int64)TargetKey,
         0LL,
         0x20019u,
         (__int64)CmKeyObjectType,
         PreviousMode,
         (__int64)v27,
         &DmaAdapter);
  if ( v8 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v12 = v6;
    TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v11, v6, 0x31384D43u);
    Size[1] = (size_t)TransientPoolWithQuotaTag;
    if ( TransientPoolWithQuotaTag )
    {
      memset(TransientPoolWithQuotaTag, 0, LODWORD(Size[0]));
      CmpLockRegistryExclusive();
      v19 = 1;
      v14 = DmaAdapter;
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)DmaAdapter, 0LL);
      if ( v8 >= 0 )
      {
        if ( ((__int64)v14->DmaOperations->MapTransferEx & 0x40000) == 0 )
        {
LABEL_8:
          v8 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Size[1] = 0;
        LODWORD(v23) = 8;
        *((_QWORD *)&v24 + 1) = v12 + Size[1];
        *(_QWORD *)&v24 = v14;
        *(_QWORD *)((char *)&v23 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess((__int64)v26);
        CmpSearchForOpenSubKeys((__int64)v14->DmaOperations, 0, (__int64)Size);
        CmpDetachFromRegistryProcess((__int64)v26);
        v8 = DWORD1(v23);
        CmpUnlockRegistry();
        v19 = 0;
        *RequiredSize = v23;
        v15 = (char *)Size[1];
        *(_DWORD *)Buffer = *(_DWORD *)Size[1];
        if ( v8 >= 0 )
        {
          v16 = v15 - (_BYTE *)Buffer;
          v17 = 0;
          if ( *(_DWORD *)v15 )
          {
            do
            {
              *(_QWORD *)&v15[24 * ++v17] -= v16;
              v15 = (char *)Size[1];
            }
            while ( v17 < *(_DWORD *)Size[1] );
          }
          memmove(Buffer, v15, v12);
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
  if ( v19 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v27, 0);
  if ( v20 )
    CmpReleaseShutdownRundown();
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  return v8;
}
