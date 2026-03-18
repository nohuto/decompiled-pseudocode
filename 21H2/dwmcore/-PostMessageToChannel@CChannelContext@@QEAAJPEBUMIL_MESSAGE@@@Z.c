/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800E7CE0
 * Callers:
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800790F0 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800E7C0C (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800E7C58 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1801B9A60 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1801E1A20 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x1800E7D88 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(
        CChannelContext *this,
        const struct MIL_MESSAGE *a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  unsigned int v8; // ebx
  _OWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  void *v13; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v5 = CTransportCmdPacker::AllocateNotification(this, *(unsigned int *)a2, a3, &v13, &v14);
  v7 = v13;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x9Eu);
  }
  else
  {
    v9 = v14;
    *v14 = *(_OWORD *)a2;
    *((_QWORD *)v9 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v9 + 6) = *((_DWORD *)a2 + 6);
    v7[4] = *((_DWORD *)this + 4);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 16LL))(*((_QWORD *)this + 5), v7);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xA6u);
  }
  DefaultHeap::Free(v7);
  return v8;
}
