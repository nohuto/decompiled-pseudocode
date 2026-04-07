/*
 * XREFs of ?Translate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800A7FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4

  switch ( *((_DWORD *)this + 239) )
  {
    case 2:
      v5 = *((float *)a2 + 5);
      if ( *((float *)this + 186) != v5 )
      {
        *((float *)this + 186) = v5;
        goto LABEL_14;
      }
      break;
    case 3:
      v4 = *((float *)a2 + 6);
      if ( *((float *)this + 187) != v4 )
      {
        *((float *)this + 187) = v4;
        goto LABEL_14;
      }
      break;
    case 4:
      v3 = *((float *)a2 + 7);
      if ( *((float *)this + 188) != v3 )
      {
        *((float *)this + 188) = v3;
        goto LABEL_14;
      }
      break;
    default:
      v2 = *((float *)a2 + 5);
      if ( *((float *)this + 186) != v2
        || *((float *)this + 187) != *((float *)a2 + 6)
        || *((float *)this + 188) != *((float *)a2 + 7) )
      {
        *((float *)this + 186) = v2;
        *((_DWORD *)this + 187) = *((_DWORD *)a2 + 6);
        *((_DWORD *)this + 188) = *((_DWORD *)a2 + 7);
LABEL_14:
        CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
      }
      break;
  }
  return 0LL;
}
