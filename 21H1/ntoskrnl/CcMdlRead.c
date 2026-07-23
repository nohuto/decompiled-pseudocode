/*
 * XREFs of CcMdlRead @ 0x140640770
 * Callers:
 *     FsRtlMdlReadDev @ 0x140886C40 (FsRtlMdlReadDev.c)
 * Callees:
 *     CcScheduleReadAheadEx @ 0x1402357D0 (CcScheduleReadAheadEx.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     CcFreeVirtualAddress @ 0x140287EE0 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x140287F20 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     CcUpdateReadHistory @ 0x1402BE46C (CcUpdateReadHistory.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402D036C (CcUpdateSharedCacheMapFlag.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

void __stdcall CcMdlRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *SharedCacheMap; // r13
  _DWORD *PrivateCacheMap; // r12
  __int64 v10; // rbx
  ULONG v11; // esi
  void *VirtualAddress; // rax
  ULONG v13; // r12d
  struct _MDL *Mdl; // rax
  PMDL v15; // rax
  struct _MDL *Next; // rcx
  unsigned int v17; // [rsp+44h] [rbp-A4h]
  ULONG v18; // [rsp+48h] [rbp-A0h] BYREF
  _DWORD v19[3]; // [rsp+4Ch] [rbp-9Ch] BYREF
  __int64 *v20; // [rsp+58h] [rbp-90h] BYREF
  struct _MDL *v21; // [rsp+60h] [rbp-88h]
  __int64 v22; // [rsp+68h] [rbp-80h]
  _QWORD v23[2]; // [rsp+70h] [rbp-78h] BYREF
  void *v24; // [rsp+80h] [rbp-68h]
  PMDL i; // [rsp+88h] [rbp-60h]
  _DWORD *v26; // [rsp+90h] [rbp-58h]
  _DWORD *v27; // [rsp+98h] [rbp-50h]

  v21 = 0LL;
  v19[1] = Length;
  v17 = 0;
  v20 = 0LL;
  v19[0] = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v23[1] = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v26 = PrivateCacheMap;
  v27 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
  __incgsdword(0x8124u);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  v23[0] = FileOffset->QuadPart;
  v10 = v23[0];
  v22 = v23[0];
  v11 = Length;
  while ( v11 )
  {
    v18 = 0;
    VirtualAddress = (void *)CcGetVirtualAddress((__int64)SharedCacheMap, v10, &v20, &v18, 0, 0);
    v24 = VirtualAddress;
    if ( (SharedCacheMap[38] & 8) == 0 )
    {
      CcFetchDataForRead((__int64)FileObject, v23, v11, 1, v19, v20, (*PrivateCacheMap >> 18) & 7);
      VirtualAddress = v24;
    }
    v13 = v18;
    if ( v18 > v11 )
      v13 = v11;
    v18 = v13;
    v10 = v22 + v13;
    v22 = v10;
    Mdl = IoAllocateMdl(VirtualAddress, v13, 0, 0, 0LL);
    v21 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcFreeVirtualAddress((__int64)v20);
    v20 = 0LL;
    v15 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v15->Next;
        if ( !v15->Next )
          break;
        v15 = v15->Next;
      }
      v15->Next = v21;
    }
    else
    {
      *MdlChain = v21;
    }
    v21 = 0LL;
    v23[0] = v10;
    v17 += v13;
    v11 -= v13;
    PrivateCacheMap = v26;
  }
  __addgsdword(0x8160u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( (*PrivateCacheMap & 0x20000) == 0 && v19[0] )
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v17;
}
