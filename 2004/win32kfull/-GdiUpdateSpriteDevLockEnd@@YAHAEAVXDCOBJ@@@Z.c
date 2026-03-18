/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C01571D4
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C007A780 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0075870 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CD2A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CD3E8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??1UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C0157314 (--1UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0157338 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C0157408 (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r14
  __int64 v4; // r8
  int v5; // ebx
  struct _RECTL v6; // xmm0
  unsigned int i; // esi
  struct _RECTL *v8; // r8
  struct REGION *v9; // [rsp+30h] [rbp-D0h] BYREF
  HDEV v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[16]; // [rsp+48h] [rbp-B8h] BYREF
  struct _RECTL v13; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v14[4]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v15; // [rsp+74h] [rbp-8Ch]
  char v16; // [rsp+84h] [rbp-7Ch]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+C0h] [rbp-40h]
  int v19; // [rsp+C8h] [rbp-38h]
  int v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+100h] [rbp+0h]
  _DWORD v22[84]; // [rsp+110h] [rbp+10h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v13, 4LL) )
    goto LABEL_6;
  v10 = HDEV;
  if ( ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v12);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v11, (struct PDEVOBJ *)&v10);
    v9 = *(struct REGION **)(*(_QWORD *)a1 + 1168LL);
    if ( !v9 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v13);
LABEL_5:
      SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v11);
      UNDOENGUPDATEDEVICESURFACE::~UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v12);
LABEL_6:
      REGION::vDeleteREGION(*(REGION **)(*(_QWORD *)a1 + 1168LL));
      *(_QWORD *)(*(_QWORD *)a1 + 1168LL) = 0LL;
      return 0LL;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v9) == 1 )
      goto LABEL_5;
    RGNOBJ::bOffset((RGNOBJ *)&v9, (struct _POINTL *)(v4 + 8 * ((*(_DWORD *)(v4 + 40) & 1) + 127LL)));
    v18 = 0LL;
    v19 = 0;
    v21 = 0LL;
    v17 = 0LL;
    v20 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v14, v9, (struct ERECTL *)&v13, 1);
    memset(v22, 0, 0x144uLL);
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        if ( v16 != 3 )
          goto LABEL_5;
        v5 = 1;
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)v14, 0, 0, 4u, 0x14u);
LABEL_16:
        if ( !v5 )
          goto LABEL_18;
        do
        {
          v5 = XCLIPOBJ::bEnum((XCLIPOBJ *)v14, 0x144u, (char *)v22, 0LL);
LABEL_18:
          for ( i = 0; i < v22[0]; ++i )
          {
            v8 = (struct _RECTL *)&v22[4 * i + 1];
            if ( v8->left < v13.left )
              v8->left = v13.left;
            if ( v8->right > v13.right )
              v8->right = v13.right;
            if ( v8->top < v13.top )
              v8->top = v13.top;
            if ( v8->bottom > v13.bottom )
              v8->bottom = v13.bottom;
            bSpUpdateSpriteDevLockEnd(HDEV, a1, v8);
          }
        }
        while ( v5 );
        goto LABEL_5;
      }
      v6 = v15;
    }
    else
    {
      v6 = v13;
    }
    *(struct _RECTL *)&v22[1] = v6;
    v22[0] = 1;
    v5 = 0;
    goto LABEL_16;
  }
  return 0LL;
}
