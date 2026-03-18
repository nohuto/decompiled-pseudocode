/*
 * XREFs of ?MDiv64@@YG_J_J00@Z @ 0xBEEFC
 * Callers:
 *     ?bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PAU_POINTL@@@Z @ 0xBEA98 (-bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PA.c)
 *     ?bDoGradient@@YGHPA_J00JJJPAU_GRADSTRUCT@@@Z @ 0x1E9E03 (-bDoGradient@@YGHPA_J00JJJPAU_GRADSTRUCT@@@Z.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 */

int __stdcall MDiv64(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  int v4; // ebx
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // [esp+Ch] [ebp-4h]

  v3 = HIDWORD(a1);
  v4 = a1;
  v5 = 0;
  v9 = 0;
  if ( !a1 )
    return v5;
  HIDWORD(v6) = HIDWORD(a2);
  if ( !a2 )
    return v5;
  if ( a1 < 0 )
  {
    v4 = -(int)a1;
    v9 = 1;
    v3 = (unsigned __int64)-a1 >> 32;
  }
  else if ( SHIDWORD(a2) <= 0 )
  {
    LODWORD(v6) = a2;
    if ( a2 < 0 )
    {
      v9 = 1;
      v6 = -a2;
    }
    goto LABEL_7;
  }
  LODWORD(v6) = a2;
LABEL_7:
  v7 = (__int64)(__PAIR64__(v3, v4) * v6 - (unsigned int)v9) / a3;
  v5 = v7;
  if ( v9 )
    return ~(_DWORD)v7;
  return v5;
}
