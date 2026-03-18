/*
 * XREFs of DxgkIsVidPnSourceOwnerDwm @ 0x1C0267C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00119BC (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

bool __fastcall DxgkIsVidPnSourceOwnerDwm(DXGADAPTER ***a1, unsigned int a2)
{
  __int64 v4; // rdx
  bool IsVidPnSourceOwnerDwm; // bl
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, (struct DXGADAPTER *const)a1, 0LL);
  IsVidPnSourceOwnerDwm = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7, 0LL) >= 0 )
    IsVidPnSourceOwnerDwm = ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(a1[334], a2);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7, v4);
  return IsVidPnSourceOwnerDwm;
}
