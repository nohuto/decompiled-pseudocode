/*
 * XREFs of _GreSetMiterLimit@12 @ 0x211440
 * Callers:
 *     _NtGdiSetMiterLimit@12 @ 0x2143A1 (_NtGdiSetMiterLimit@12.c)
 * Callees:
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 */

int __fastcall GreSetMiterLimit(HDC a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // edx
  _DWORD v11[3]; // [esp+8h] [ebp-1Ch] BYREF
  int v12[2]; // [esp+14h] [ebp-10h] BYREF
  int v13[2]; // [esp+1Ch] [ebp-8h] BYREF

  v3 = 0;
  memset(v11, 0, sizeof(v11));
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  if ( !v11[0] || (ftoef_c(v6, v5, 1065353216, v12), ftoef_c(v8, v7, a2, v13), EFLOAT::operator>(v12, v13)) )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v9 = v11[0];
    if ( a3 )
      *a3 = *(_DWORD *)(v11[0] + 156);
    *(_DWORD *)(v9 + 156) = a2;
    v3 = 1;
  }
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v3;
}
