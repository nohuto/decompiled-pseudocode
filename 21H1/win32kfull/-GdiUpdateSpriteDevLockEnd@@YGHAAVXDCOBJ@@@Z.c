/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z @ 0x12266
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z @ 0x5FE10 (-GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QAE@XZ @ 0x1DA64A (--0UNDOENGUPDATEDEVICESURFACE@@QAE@XZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YGHPAUHDEV__@@AAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1DEDCA (-bSpUpdateSpriteDevLockEnd@@YGHPAUHDEV__@@AAVXDCOBJ@@PAU_RECTL@@@Z.c)
 */

int __thiscall GdiUpdateSpriteDevLockEnd(void *this)
{
  unsigned int HDEV; // eax
  _DWORD *v3; // edx
  unsigned int v4; // edi
  int v6; // edx
  int v7; // eax
  struct HDEV__ *v8; // esi
  _DWORD *v9; // esi
  _DWORD *v10; // esi
  struct XDCOBJ *v11; // [esp+0h] [ebp-208h]
  struct _RECTL *v12; // [esp+4h] [ebp-204h]
  _BYTE v13[4]; // [esp+Ch] [ebp-1FCh] BYREF
  int v14; // [esp+10h] [ebp-1F8h]
  _BYTE v15[4]; // [esp+14h] [ebp-1F4h] BYREF
  unsigned int v16; // [esp+18h] [ebp-1F0h] BYREF
  struct REGION *v17; // [esp+1Ch] [ebp-1ECh] BYREF
  unsigned int v18; // [esp+20h] [ebp-1E8h]
  int v19; // [esp+24h] [ebp-1E4h]
  _DWORD v20[82]; // [esp+28h] [ebp-1E0h] BYREF
  _BYTE v21[4]; // [esp+170h] [ebp-98h] BYREF
  char v22; // [esp+174h] [ebp-94h] BYREF
  char v23; // [esp+184h] [ebp-84h]
  int v24; // [esp+1A0h] [ebp-68h]
  int v25; // [esp+1B4h] [ebp-54h]
  int v26; // [esp+1B8h] [ebp-50h]
  int v27; // [esp+1E0h] [ebp-28h]
  int v28; // [esp+1E8h] [ebp-20h]
  struct HDEV__ v29; // [esp+1F4h] [ebp-14h] BYREF
  int v30; // [esp+1F8h] [ebp-10h]
  int v31; // [esp+1FCh] [ebp-Ch]
  int v32; // [esp+200h] [ebp-8h]

  HDEV = UserGetHDEV();
  v3 = *(_DWORD **)this;
  v4 = HDEV;
  v18 = HDEV;
  if ( GreGetBounds(*v3, &v29, 4) )
  {
    v16 = v4;
    if ( (*(_DWORD *)(v4 + 24) & 0x400) != 0 )
      return 0;
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v13);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v15, (struct PDEVOBJ *)&v16);
    v17 = *(struct REGION **)(*(_DWORD *)this + 1172);
    if ( !v17 )
    {
      bSpUpdateSpriteDevLockEnd(&v29, v11, v12);
      goto LABEL_30;
    }
    if ( RGNOBJ::iComplexity((RGNOBJ *)&v17) == 1 )
      goto LABEL_30;
    RGNOBJ::bOffset((RGNOBJ *)&v17, (struct _POINTL *)(v6 + 1048 + 8 * (*(_DWORD *)(v6 + 28) & 1)));
    v25 = 0;
    v26 = 0;
    v27 = 1;
    v28 = 0;
    v24 = 0;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v21, v17, (struct ERECTL *)&v29, 1);
    memset(v20, 0, 0x144u);
    if ( v23 )
    {
      if ( v23 != 1 )
      {
        if ( v23 == 3 )
        {
          v19 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v21, 0, 0, 4u, 0x14u);
          v7 = v19;
LABEL_15:
          if ( !v7 )
            goto LABEL_17;
          do
          {
            v7 = XCLIPOBJ::bEnum((XCLIPOBJ *)v21, 0x144u, v20, 0);
            v19 = v7;
LABEL_17:
            v18 = 0;
            if ( v20[0] )
            {
              v10 = &v20[2];
              do
              {
                if ( *(v10 - 1) < v29.unused )
                  *(v10 - 1) = v29.unused;
                if ( v10[1] > v31 )
                  v10[1] = v31;
                if ( *v10 < v30 )
                  *v10 = v30;
                if ( v10[2] > v32 )
                  v10[2] = v32;
                bSpUpdateSpriteDevLockEnd((HDEV)v10 - 1, v11, v12);
                v10 += 4;
                ++v18;
              }
              while ( v18 < v20[0] );
              v7 = v19;
            }
          }
          while ( v7 );
        }
LABEL_30:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v15);
        if ( v14 )
          *(_DWORD *)(v14 + 180) ^= (*(_DWORD *)(v14 + 180) ^ v13[0]) & 1;
        goto LABEL_2;
      }
      v7 = 0;
      v8 = (struct HDEV__ *)&v22;
    }
    else
    {
      v7 = 0;
      v8 = &v29;
    }
    v20[0] = 1;
    v20[1] = *(_DWORD *)v8;
    v9 = v8 + 1;
    v19 = 0;
    v20[2] = *v9++;
    v20[3] = *v9;
    v20[4] = v9[1];
    goto LABEL_15;
  }
LABEL_2:
  REGION::vDeleteREGION(*(REGION **)(*(_DWORD *)this + 1172));
  *(_DWORD *)(*(_DWORD *)this + 1172) = 0;
  return 0;
}
