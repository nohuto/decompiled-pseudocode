/*
 * XREFs of ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x18008A5EC
 * Callers:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x180035738 (--1CAnimationComponent@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::UnregisterIconicAnimatedVisual(
        CImmersiveIconicBitmapRegistry *this,
        struct CIconicAnimatedVisual *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 i; // r11
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 18);
  v3 = 0LL;
  for ( i = *((_QWORD *)this + 6); (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( a2 == *(struct CIconicAnimatedVisual **)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 < v2 )
  {
    for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)this + 18) )
    {
      v6 = (unsigned int)v3;
      LODWORD(v3) = v3 + 1;
      *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
    }
    *((_DWORD *)this + 18) = v2 - 1;
    CBaseObject::Release(a2);
  }
  return 0LL;
}
