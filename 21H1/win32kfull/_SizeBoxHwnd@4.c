/*
 * XREFs of _SizeBoxHwnd@4 @ 0x1B6D75
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     _DrawSize@16 @ 0x1A3566 (_DrawSize@16.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall SizeBoxHwnd(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edx
  int v3; // edi
  int v4; // ebx
  char v5; // al
  int v7; // ecx
  int v8; // edx
  int v9; // [esp+Ch] [ebp-4h]

  v1 = this;
  v2 = this[5];
  v9 = *(_DWORD *)(v2 + 64);
  v3 = *(_BYTE *)(v2 + 18) & 0x40;
  if ( (*(_BYTE *)(v2 + 18) & 0x40) != 0 )
    v4 = *(_DWORD *)(v2 + 52);
  else
    v4 = *(_DWORD *)(v2 + 60);
  while ( 1 )
  {
    if ( (*(_WORD *)(v2 + 30) & 0x3FFF) == 0x29D )
      return 0;
    v5 = *(_BYTE *)(v2 + 23);
    if ( (*(_BYTE *)(v2 + 22) & 4) != 0 )
      break;
    if ( (v5 & 0x40) == 0 || (*(_BYTE *)(v2 + 8) & 8) != 0 )
      return 0;
    v1 = (_DWORD *)v1[14];
    v2 = v1[5];
  }
  if ( (v5 & 1) != 0 )
    return 0;
  if ( v3 )
    v7 = *(_DWORD *)(v2 + 68);
  else
    v7 = *(_DWORD *)(v2 + 76);
  v8 = *(_DWORD *)(v2 + 80);
  if ( v3 )
  {
    if ( v4 - 2 <= v7 )
      goto LABEL_17;
    return 0;
  }
  if ( v4 + 2 < v7 )
    return 0;
LABEL_17:
  if ( v9 + 2 < v8 )
    return 0;
  return v1;
}
