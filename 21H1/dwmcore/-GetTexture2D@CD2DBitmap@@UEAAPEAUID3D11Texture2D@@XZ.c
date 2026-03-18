/*
 * XREFs of ?GetTexture2D@CD2DBitmap@@UEAAPEAUID3D11Texture2D@@XZ @ 0x1800DCC58
 * Callers:
 *     ?GetTexture2D@CD2DBitmap@@$4PPPPPPPM@A@EAAPEAUID3D11Texture2D@@XZ @ 0x1800ED820 (-GetTexture2D@CD2DBitmap@@$4PPPPPPPM@A@EAAPEAUID3D11Texture2D@@XZ.c)
 *     ?GetTexture2D@CD2DBitmap@@$4PPPPPPPM@FI@EAAPEAUID3D11Texture2D@@XZ @ 0x1800ED830 (-GetTexture2D@CD2DBitmap@@$4PPPPPPPM@FI@EAAPEAUID3D11Texture2D@@XZ.c)
 *     ?GetTexture2D@CD2DBitmap@@$4PPPPPPPM@CI@EAAPEAUID3D11Texture2D@@XZ @ 0x1800EF8B0 (-GetTexture2D@CD2DBitmap@@$4PPPPPPPM@CI@EAAPEAUID3D11Texture2D@@XZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11Texture2D *__fastcall CD2DBitmap::GetTexture2D(CD2DBitmap *this)
{
  return (struct ID3D11Texture2D *)*((_QWORD *)this - 28);
}
