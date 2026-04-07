/*
 * XREFs of ?Scale3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800A72C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 189) != v2
    || *((float *)this + 190) != *((float *)a2 + 6)
    || *((float *)this + 191) != *((float *)a2 + 7)
    || !*((_BYTE *)this + 966)
    && (*((float *)this + 192) != *((float *)a2 + 11)
     || *((float *)this + 193) != *((float *)a2 + 12)
     || *((float *)this + 194) != *((float *)a2 + 13)) )
  {
    v3 = *((_BYTE *)this + 966) == 0;
    *((float *)this + 189) = v2;
    *((_DWORD *)this + 190) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 191) = *((_DWORD *)a2 + 7);
    if ( v3 )
    {
      *((_DWORD *)this + 192) = *((_DWORD *)a2 + 11);
      *((_DWORD *)this + 193) = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 194) = *((_DWORD *)a2 + 13);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
