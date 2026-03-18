/*
 * XREFs of ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0084A50 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00AE788 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00AEA70 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     OffDrawStream @ 0x1C02C7928 (OffDrawStream.c)
 */

__int64 __fastcall SpDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  int v9; // r15d
  unsigned int v10; // edi
  HDEV hdev; // rax
  struct _SURFOBJ *v12; // r14
  PVOID *p_pvScan0; // rbx
  PVOID *v14; // rsi
  int hsurf; // eax
  HDEV v16; // rcx
  struct _CLIPOBJ *v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v19; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v20; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 *v26[114]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = (int)a2;
  v19 = 0LL;
  v10 = 1;
  v24 = (__int64)a6;
  v23 = (__int64)a8;
  v22 = (__int64)a9;
  hdev = a2->hdev;
  v25 = (__int64)a4;
  v20 = a1;
  v18 = a3;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
  {
    DbgPrint("SpDrawStream: source is the screen, this should never happen\n");
  }
  else
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v26, a1, a3, a5);
    while ( (unsigned int)ENUMUNDERLAYS::bEnum(v26, &v20, &v19, &v18) )
    {
      v12 = v20;
      p_pvScan0 = 0LL;
      v14 = 0LL;
      v21 = 0LL;
      if ( v20 )
      {
        hsurf = (int)v20[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v20[-1].pvScan0;
          v16 = v20->hdev;
          v21 = &v20[-1].pvScan0;
          GreLockDisplayDevice(v16);
          v14 = &v12[-1].pvScan0;
        }
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v21, &v18) )
        v10 &= OffDrawStream((int)EngDrawStream, (int)&v19, (int)v12, v9, v18, v25, (__int64)a5, v24, a7, v23, v22);
      if ( v14 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
  }
  return v10;
}
