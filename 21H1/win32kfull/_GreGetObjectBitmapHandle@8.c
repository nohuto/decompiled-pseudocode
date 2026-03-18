/*
 * XREFs of _GreGetObjectBitmapHandle@8 @ 0x21E0A5
 * Callers:
 *     _NtGdiGetObjectBitmapHandle@8 @ 0x213176 (_NtGdiGetObjectBitmapHandle@8.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338 (-RestoreAttributes@XEBRUSHOBJ@@IAEXXZ.c)
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 */

int __fastcall GreGetObjectBitmapHandle(HBRUSH a1, int *a2)
{
  int v3; // esi
  unsigned int v4; // eax
  _DWORD v6[2]; // [esp+8h] [ebp-8h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v6, a1);
  if ( !v6[0] )
    return 0;
  v3 = *(_DWORD *)(v6[0] + 16);
  v4 = *(_DWORD *)(v6[0] + 24);
  if ( (v4 & 0x1000) != 0 )
    *a2 = 1;
  else
    *a2 = (v4 >> 12) & 2;
  XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v6);
  DEC_SHARE_REF_CNT(v6[0]);
  return v3;
}
