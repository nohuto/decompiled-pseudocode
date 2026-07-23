/*
 * XREFs of PnprSwapFinalize @ 0x14050FED0
 * Callers:
 *     PnprSwap @ 0x14050FCA8 (PnprSwap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PnprRecopyMirrorPages @ 0x14050FB2C (PnprRecopyMirrorPages.c)
 *     PnprGetMillisecondCounter @ 0x1409AE6CC (PnprGetMillisecondCounter.c)
 */

__int64 PnprSwapFinalize()
{
  int v0; // ebx
  __int64 v1; // rax
  int MillisecondCounter; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx

  v0 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
    PnprRecopyMirrorPages();
  v1 = PnprContext;
  *(_DWORD *)(PnprContext + 64) &= ~4u;
  if ( (*(_DWORD *)(v1 + 64) & 0x20) == 0 )
    __wbinvd();
  if ( *(_QWORD *)(PnprContext + 20944) )
  {
    MillisecondCounter = PnprGetMillisecondCounter(0LL);
    v3 = PnprContext;
    *(_DWORD *)(PnprContext + 21012) = MillisecondCounter;
    v0 = (*(__int64 (__fastcall **)(_QWORD))(v3 + 20944))(*(_QWORD *)(v3 + 20880));
    if ( v0 < 0 )
    {
      v4 = PnprContext;
      v5 = *(_DWORD *)(PnprContext + 20984);
      if ( !v5 )
        v5 = 2980;
      *(_DWORD *)(PnprContext + 20984) = v5;
      v6 = *(_DWORD *)(v4 + 20988);
      if ( !v6 )
        v6 = 8;
      *(_DWORD *)(v4 + 20988) = v6;
    }
    *(_DWORD *)(PnprContext + 21016) = PnprGetMillisecondCounter(0LL);
  }
  return (unsigned int)v0;
}
