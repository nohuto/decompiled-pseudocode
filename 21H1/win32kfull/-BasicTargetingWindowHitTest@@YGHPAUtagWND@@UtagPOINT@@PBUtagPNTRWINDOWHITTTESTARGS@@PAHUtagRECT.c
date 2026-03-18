/*
 * XREFs of ?BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@3PAIPAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x17996A
 * Callers:
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1797A4 (-BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagREC.c)
 */

int __fastcall BasicTargetingWindowHitTest(
        int a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  BOOL v16; // eax
  int v17; // eax
  int v19; // [esp+24h] [ebp-1Ch] BYREF
  _DWORD v20[5]; // [esp+28h] [ebp-18h] BYREF

  v19 = 0;
  v20[0] = a11;
  v20[1] = a12;
  v20[2] = a13;
  v20[3] = a14;
  v16 = IsCompositionInputWindow() && (*(_BYTE *)(a2 + 20) & 8) != 0;
  v17 = BasicTargetingHitTest(
          a1,
          *(struct tagPOINT **)(a2 + 24),
          (unsigned __int16 *)&v19,
          a6,
          *(_DWORD *)(a2 + 60),
          v20,
          a7,
          *(_DWORD *)(a2 + 64) == 1,
          a8,
          v16,
          a9,
          a10);
  *a5 = (unsigned __int16)v19;
  if ( v17 )
  {
    if ( !CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)a1) || (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_10;
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0xC0) != 0x40 )
    {
      *a4 = 1;
LABEL_10:
      *a3 = *a5 == 0;
      return 1;
    }
  }
  return 0;
}
