/*
 * XREFs of _anonymous_namespace_::GetModifiersStateForShell @ 0xB5874
 * Callers:
 *     ?WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z @ 0xB5830 (-WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YG_NPAUHWND__@@UtagPOINT@@PAUtagRECT@@2@Z @ 0x19C3BB (-xxxArrangementRectangleHandler@CallShell@@YG_NPAUHWND__@@UtagPOINT@@PAUtagRECT@@2@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z @ 0x19C48F (-xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall anonymous_namespace_::GetModifiersStateForShell(_DWORD *this)
{
  char v1; // cl
  int result; // eax

  v1 = *(_BYTE *)(this[59] + 156);
  result = 4 * (v1 & 1);
  if ( (v1 & 0x10) != 0 )
    result |= 1u;
  if ( (v1 & 4) != 0 )
    return result | 2;
  return result;
}
