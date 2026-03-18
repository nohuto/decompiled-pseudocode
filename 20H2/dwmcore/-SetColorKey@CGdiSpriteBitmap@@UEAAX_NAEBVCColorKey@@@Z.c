/*
 * XREFs of ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x180040930
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800404AC (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x18004258C (-IsNonEmpty@CColorKey@@QEBA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180044140 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  CGdiSpriteBitmap *v3; // r10
  float *v4; // r9
  char *v5; // rbx

  v3 = this;
  if ( a2 != *((_BYTE *)this + 76)
    || (CColorKey::IsNonEmpty((CGdiSpriteBitmap *)((char *)this + 352)) || CColorKey::IsNonEmpty(a3))
    && (*v4 != *(float *)a3
     || v4[1] != *((float *)a3 + 1)
     || v4[2] != *((float *)a3 + 2)
     || v4[3] != *((float *)a3 + 3)
     || v4[4] != *((float *)a3 + 4)
     || v4[5] != *((float *)a3 + 5)
     || v4[6] != *((float *)a3 + 6)
     || v4[7] != *((float *)a3 + 7)) )
  {
    *((_BYTE *)v3 + 76) = a2;
    v5 = (char *)v3 - 56;
    *((_OWORD *)v3 + 22) = *(_OWORD *)a3;
    *((_OWORD *)v3 + 23) = *((_OWORD *)a3 + 1);
    *((_DWORD *)v3 + 96) = *((_DWORD *)a3 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)v3 - 56)) )
      CResource::NotifyOnChanged(v5, 0LL, 0LL);
  }
}
