/*
 * XREFs of ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C010B0A4
 * Callers:
 *     SetWindowGroupBand @ 0x1C00C8B50 (SetWindowGroupBand.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C010B0A4 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 * Callees:
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C010B0A4 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     DwmAsyncChildZBandChange @ 0x1C010B114 (DwmAsyncChildZBandChange.c)
 */

__int64 __fastcall SetWindowTreeBand(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rax
  __int64 i; // rbx

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) = a2;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    v6 = (void *)ReferenceDwmApiPort(v5);
    result = DwmAsyncChildZBandChange(v6);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
    result = SetWindowTreeBand(i, a2);
  return result;
}
