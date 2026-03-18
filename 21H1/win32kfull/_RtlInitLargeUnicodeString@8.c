/*
 * XREFs of _RtlInitLargeUnicodeString@8 @ 0x1DCA6
 * Callers:
 *     _xxxProcessAsyncSendMessage@16 @ 0x1426A (_xxxProcessAsyncSendMessage@16.c)
 *     _NtUserfnINSTRINGNULL@28 @ 0x1D04A (_NtUserfnINSTRINGNULL@28.c)
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     _NtUserfnINLPCREATESTRUCT@28 @ 0x1DB7A (_NtUserfnINLPCREATESTRUCT@28.c)
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     _EditionxxxBroadcastSPIChange@8 @ 0x145BD6 (_EditionxxxBroadcastSPIChange@8.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YGJIIPAUtagCBT_CREATEWNDW@@H@Z @ 0x15F104 (-NtUserfnHkINLPCBTCREATESTRUCT@@YGJIIPAUtagCBT_CREATEWNDW@@H@Z.c)
 *     _NtUserfnINLPMDICREATESTRUCT@28 @ 0x16BEB9 (_NtUserfnINLPMDICREATESTRUCT@28.c)
 *     _NtUserfnINSTRING@28 @ 0x16CB33 (_NtUserfnINSTRING@28.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlInitLargeUnicodeString(_DWORD *a1, _WORD *a2)
{
  int v2; // eax
  int v3; // eax
  _WORD *v4; // esi
  __int64 v6; // rax

  v2 = a1[1];
  a1[2] = a2;
  v3 = v2 & 0x7FFFFFFF;
  a1[1] = v3;
  if ( a2 )
  {
    v4 = a2 + 1;
    while ( *a2++ )
      ;
    HIDWORD(v6) = 2 * (a2 - v4);
    LODWORD(v6) = (HIDWORD(v6) + 2) & 0x7FFFFFFF;
  }
  else
  {
    v6 = v3 & 0x80000000;
  }
  *a1 = HIDWORD(v6);
  a1[1] = v6;
  return v6;
}
