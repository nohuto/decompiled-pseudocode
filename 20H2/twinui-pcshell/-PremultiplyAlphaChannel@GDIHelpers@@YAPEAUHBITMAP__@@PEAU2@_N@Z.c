/*
 * XREFs of ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x18046FFD0
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x18046D810 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?PreProcessDIB@GDIHelpers@@YAXHHPEAUtagRGBQUAD@@H@Z @ 0x18046FF4C (-PreProcessDIB@GDIHelpers@@YAXHHPEAUtagRGBQUAD@@H@Z.c)
 */

HANDLE __fastcall GDIHelpers::PremultiplyAlphaChannel(GDIHelpers *this, HBITMAP a2)
{
  HANDLE v2; // rax
  HANDLE v3; // rbx
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned int v6; // r11d
  _BYTE *v7; // rax
  char pv[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-24h]
  unsigned int v11; // [rsp+38h] [rbp-20h]
  __int16 v12; // [rsp+42h] [rbp-16h]
  int v13[2]; // [rsp+48h] [rbp-10h]

  v2 = CopyImage(this, 0, 0, 0, 0x2000u);
  v3 = v2;
  if ( v2 )
  {
    if ( GetObjectW(v2, 32, pv) )
    {
      if ( *(_QWORD *)v13 )
      {
        if ( v12 == 32 )
        {
          v4 = 0LL;
          v5 = v11 * (unsigned __int64)v10;
          if ( v5 <= 0xFFFFFFFF )
          {
            v6 = 0;
            if ( (_DWORD)v5 )
            {
              v7 = (_BYTE *)(*(_QWORD *)v13 + 3LL);
              while ( !(_DWORD)v4 )
              {
                if ( *v7 )
                  v4 = 1LL;
                ++v6;
                v7 += 4;
                if ( v6 >= (unsigned int)v5 )
                {
                  if ( !(_DWORD)v4 )
                    return v3;
                  break;
                }
              }
              GDIHelpers::PreProcessDIB((GDIHelpers *)v10, v11, *(__int64 *)v13, (struct tagRGBQUAD *)v4);
            }
          }
        }
      }
    }
  }
  return v3;
}
