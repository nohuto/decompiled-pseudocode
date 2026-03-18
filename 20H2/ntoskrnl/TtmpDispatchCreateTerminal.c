/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x1409034C4
 * Callers:
 *     TtmDispatchApi @ 0x140902EE4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     TtmiCreateTerminal @ 0x1408FFD7C (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140903184 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
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
    Terminal = TtmiCreateTerminal(
                 v10,
                 v7,
                 KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
                 a2,
                 a2 + 1,
                 0LL);
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
