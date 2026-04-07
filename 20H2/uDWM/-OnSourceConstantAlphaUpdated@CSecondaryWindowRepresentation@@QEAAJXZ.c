/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012F3C
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010A50 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013990 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180013954 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014EA8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  float v4; // xmm0_4
  double v5; // xmm2_8

  v2 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v3 = *(_QWORD *)(v2 + 416);
      if ( v3 )
        v2 = *(_QWORD *)(v3 + 32);
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        return 0LL;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
        v2 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 80LL);
    }
  }
  if ( v2 )
  {
    v4 = *((double *)this + 45);
    v5 = (double)*(unsigned __int8 *)(v2 + 352) / 255.0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v5 - v4) & _xmm) > 0.0000011920929 )
    {
      *((double *)this + 45) = v5;
      CSecondaryWindowRepresentation::SetDirtyFlags(this, 0x10u);
    }
  }
  return 0LL;
}
