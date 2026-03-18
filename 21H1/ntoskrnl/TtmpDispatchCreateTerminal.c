/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x1408FC580
 * Callers:
 *     TtmDispatchApi @ 0x1408FBFC4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     TtmiCreateTerminal @ 0x1408F8E7C (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FC264 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  ACCESS_MASK v7; // edx
  int Terminal; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  DmaAdapter = 0LL;
  v4 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v10, (__int64 *)&DmaAdapter);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v6 = v10;
    Terminal = TtmiCreateTerminal(v10, v7, KeGetCurrentThread()->PreviousMode, a2, a2 + 1, 0LL);
    v5 = Terminal;
    if ( Terminal >= 0 )
      v5 = 0;
    else
      TtmiLogError("TtmpDispatchCreateTerminal", 239LL, (unsigned int)Terminal, (unsigned int)Terminal);
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateTerminal", 227LL, (unsigned int)v4, (unsigned int)v4);
    v6 = v10;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return v5;
}
