/*
 * XREFs of IopGetRootDevices @ 0x14074ECA8
 * Callers:
 *     IopPnPDispatch @ 0x14074F910 (IopPnPDispatch.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140604D18 (_CmGetMatchingFilteredDeviceList.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetRootDevices(_QWORD *a1)
{
  _WORD *PoolWithTag; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int inited; // ebx
  unsigned int v5; // edi
  int MatchingFilteredDeviceList; // eax
  const WCHAR *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  void *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PADAPTER_OBJECT *v17; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v21; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  v19 = 0LL;
  DestinationString = 0LL;
  Src = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x64647050u);
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)((char *)&v19 + 4) = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v21 = 2048;
  inited = -1073741789;
  v5 = 0;
  while ( v5 < 5 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v21, 0x64647050u);
    if ( !PoolWithTag )
    {
      inited = -1073741670;
      break;
    }
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"Root",
                                   1,
                                   0LL,
                                   0LL,
                                   (__int64)PoolWithTag,
                                   v21,
                                   (__int64)&v21);
    ++v5;
    inited = MatchingFilteredDeviceList;
    if ( MatchingFilteredDeviceList != -1073741789 )
    {
      if ( MatchingFilteredDeviceList < 0 )
        break;
      v7 = PoolWithTag;
      LODWORD(v19) = 0;
      if ( *PoolWithTag )
      {
        while ( 1 )
        {
          inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v7, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
          if ( inited < 0 )
            break;
          inited = RtlInitUnicodeStringEx(&DestinationString, v7);
          if ( inited >= 0 && !(unsigned int)IopInitializeDeviceInstanceKey(Handle) )
          {
            ZwClose(Handle);
            goto LABEL_17;
          }
          ZwClose(Handle);
          if ( inited < 0 )
            break;
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          v7 += v8 + 1;
          if ( !*v7 )
            goto LABEL_17;
        }
LABEL_31:
        v9 = DWORD2(v19);
        if ( !DWORD2(v19) )
          goto LABEL_32;
LABEL_21:
        if ( inited >= 0 )
          break;
      }
      else
      {
LABEL_17:
        inited = v19;
        if ( (int)v19 < 0 )
          goto LABEL_31;
        v9 = DWORD2(v19);
        if ( !DWORD2(v19) )
        {
LABEL_32:
          inited = -1073741823;
          goto LABEL_21;
        }
        v10 = ExAllocatePoolWithTag(PagedPool, 8LL * DWORD2(v19) + 16, 0x64647050u);
        v11 = v10;
        if ( v10 )
        {
          v12 = Src;
          *v10 = v9;
          memmove(v10 + 2, v12, 8LL * (unsigned int)v9);
          *a1 = v11;
          goto LABEL_21;
        }
        inited = -1073741670;
      }
      if ( (_DWORD)v9 )
      {
        v17 = (PADAPTER_OBJECT *)Src;
        do
        {
          HalPutDmaAdapter(*v17++);
          --v9;
        }
        while ( v9 );
      }
      break;
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  ExFreePoolWithTag(Src, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)inited;
}
