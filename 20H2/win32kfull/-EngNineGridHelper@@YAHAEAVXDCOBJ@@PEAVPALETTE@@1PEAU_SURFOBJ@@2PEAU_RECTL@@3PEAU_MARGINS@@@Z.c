/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027D5DC
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027F5C8 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngNineGrid @ 0x1C00DF590 (EngNineGrid.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall EngNineGridHelper(
        struct XDCOBJ *a1,
        struct PALETTE *a2,
        struct PALETTE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7,
        struct _MARGINS *a8)
{
  unsigned int v8; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+68h] [rbp-61h] BYREF
  __int64 v16; // [rsp+70h] [rbp-59h] BYREF
  __int64 v17; // [rsp+78h] [rbp-51h] BYREF
  __int64 v18; // [rsp+80h] [rbp-49h] BYREF
  struct _RECTL *v19; // [rsp+88h] [rbp-41h]
  int v20; // [rsp+90h] [rbp-39h] BYREF
  __int64 v21; // [rsp+98h] [rbp-31h]
  __int64 v22; // [rsp+A0h] [rbp-29h]
  __int64 v23; // [rsp+A8h] [rbp-21h]
  _DWORD v24[6]; // [rsp+B0h] [rbp-19h] BYREF

  v8 = 0;
  v19 = a7;
  v24[0] = 5;
  v24[5] = 0;
  v20 = 33488896;
  v24[1] = *(_DWORD *)a8;
  v24[2] = *((_DWORD *)a8 + 1);
  v24[3] = *((_DWORD *)a8 + 2);
  v24[4] = *((_DWORD *)a8 + 3);
  v12 = *(_QWORD *)a1;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v13 = *(_QWORD *)(v12 + 976);
  v15 = 0LL;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v18,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       (__int64)a3,
                       *(_DWORD *)(v13 + 184),
                       *(_DWORD *)(v13 + 176),
                       0,
                       0) )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v17,
                         0LL,
                         0,
                         (__int64)a2,
                         (__int64)gppalRGB,
                         (__int64)a3,
                         (__int64)a3,
                         0,
                         0,
                         0,
                         0) )
    {
      v21 = v17;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v16,
                           0LL,
                           0,
                           (__int64)a2,
                           (__int64)gppalRGB,
                           (__int64)a3,
                           (__int64)a3,
                           0,
                           0,
                           0,
                           0) )
      {
        v22 = v16;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v15,
                             0LL,
                             0,
                             (__int64)gppalRGB,
                             (__int64)a2,
                             (__int64)a3,
                             (__int64)a3,
                             0,
                             0,
                             0,
                             0) )
        {
          v23 = v15;
          v8 = EngNineGrid(a4, (__int64)a5, 0LL, v18, (__int64)a6, (__int64)v19, (__int64)v24, (__int64)&v20);
        }
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v15);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v16);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v17);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v18);
  return v8;
}
