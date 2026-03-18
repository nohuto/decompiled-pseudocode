/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801F7498
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801C84F0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180005BBC (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18004E810 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800B8C44 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F73BC (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

char __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  char IsAxisAlignedRectangle; // di
  CShape *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( !*((_QWORD *)this + 90)
    || (int)CWindowNode::EnsureEffectiveSpriteClip(this) < 0
    || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(*((CShape **)this + 113))) != 0 )
  {
    if ( *((_QWORD *)this + 108) )
    {
      CWindowNode::GetDxClipShape((__int64)this, (struct CShapePtr *)v4);
      if ( v4[0] )
        IsAxisAlignedRectangle = CShapePtr::IsAxisAlignedRectangle(v4);
      CShapePtr::Release((CShapePtr *)v4);
    }
  }
  return IsAxisAlignedRectangle;
}
