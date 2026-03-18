/*
 * XREFs of IopSendMessageToTrackService @ 0x14088F040
 * Callers:
 *     IopTrackLink @ 0x1406D3810 (IopTrackLink.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     LpcSendWaitReceivePort @ 0x1406FE950 (LpcSendWaitReceivePort.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopSendMessageToTrackService(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v6; // ebp
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  _QWORD *Pool_0; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  size_t v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v18[40]; // [rsp+40h] [rbp-138h] BYREF
  int v19; // [rsp+68h] [rbp-110h]

  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  while ( 1 )
  {
    if ( !IopLinkTrackingServiceObject )
    {
      if ( !*(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
        return -1073741153;
      result = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL);
      if ( result == 192 || result == 257 )
        return result;
      if ( IopLinkTrackingServiceObject )
      {
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
      }
      else
      {
        IopLinkTrackingPacket.List.Flink = 0LL;
        IopLinkTrackingPacket.WorkerRoutine = (void (__fastcall *)(void *))IopConnectLinkTrackingPort;
        IopLinkTrackingPacket.Parameter = &IopLinkTrackingPacket;
        KeResetEvent(&stru_140C45DA0);
        ExQueueWorkItem(&IopLinkTrackingPacket, DelayedWorkQueue);
        v9 = KeWaitForSingleObject(&stru_140C45DA0, Executive, PreviousMode, 0, 0LL);
        v10 = v9;
        if ( v9 != 192 && v9 != 257 && dword_140C45DB8 < 0 )
          v10 = dword_140C45DB8;
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
        if ( v10 )
          return v10;
      }
    }
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, 0xB8uLL);
    v12 = Pool_0;
    if ( !Pool_0 )
      break;
    memset((char *)Pool_0 + 44, 0, 0x8CuLL);
    v12[5] = 0LL;
    *((_OWORD *)v12 + 3) = *(_OWORD *)a1;
    *((_DWORD *)v12 + 16) = *(_DWORD *)(a1 + 16);
    *(_OWORD *)((char *)v12 + 68) = *a2;
    *(_OWORD *)((char *)v12 + 84) = a2[1];
    *(_OWORD *)((char *)v12 + 100) = a2[2];
    *(_OWORD *)((char *)v12 + 116) = a2[3];
    if ( *(_DWORD *)(a3 + 8) < 0x24u )
    {
      ExFreePoolWithTag(v12, 0);
      return -2147483643;
    }
    *((_DWORD *)v12 + 33) = *(_DWORD *)(a3 + 12);
    *(_OWORD *)(v12 + 17) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v12 + 19) = *(_OWORD *)(a3 + 32);
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 > 0x24 )
    {
      v14 = v13 - 36;
      v15 = 16LL;
      if ( v14 <= 0x10 )
        v15 = v14;
      memmove(v12 + 21, (const void *)(a3 + 48), v15);
    }
    *v12 = 12058768LL;
    v17 = 256LL;
    v16 = LpcSendWaitReceivePort(
            (__int64)IopLinkTrackingServiceObject,
            0x20000,
            (__int128 *)v12,
            (unsigned __int64)v18,
            &v17,
            0LL);
    v10 = v16;
    if ( v16 != -1073741769 && v16 != -1073740029
      || (v10 = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL),
          HalPutDmaAdapter(IopLinkTrackingServiceObject),
          IopLinkTrackingServiceObject = 0LL,
          KeSetEvent(&IopLinkTrackingPortObject, 0, 0),
          v6) )
    {
      if ( v10 >= 0 )
        return v19;
      return v10;
    }
    v6 = 1;
  }
  return -1073741670;
}
