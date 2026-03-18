/*
 * XREFs of ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x18003F918
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18003FBAC (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18003FA0C (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180045C08 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 */

__int64 __fastcall CGDIBitmapRealization::Create(void *a1, struct _LUID a2, struct IGDIBitmapRealization **a3)
{
  CGDIBitmapRealization *v6; // rax
  unsigned int v7; // ecx
  CGDIBitmapRealization *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  _DWORD v13[2]; // [rsp+38h] [rbp-49h] BYREF
  void *v14; // [rsp+40h] [rbp-41h]
  struct _LUID v15; // [rsp+48h] [rbp-39h]
  __int64 v16; // [rsp+50h] [rbp-31h]
  _DWORD v17[32]; // [rsp+58h] [rbp-29h] BYREF

  *a3 = 0LL;
  memset_0(v17, 0, 0x78uLL);
  v17[11] = 0;
  v17[18] = 0;
  v17[19] = 0;
  v17[21] = 0;
  v17[22] = 0;
  v13[1] = 0;
  v16 = 0LL;
  v17[0] = 1;
  v17[16] = 1;
  v17[17] = 1065353216;
  v17[20] = 1065353216;
  v13[0] = 2;
  v14 = a1;
  v15 = a2;
  v6 = (CGDIBitmapRealization *)operator new(0x1F8uLL);
  if ( v6 )
    v8 = CGDIBitmapRealization::CGDIBitmapRealization(
           v6,
           (const struct CSM_BUFFER_ATTRIBUTES *)v17,
           (const struct CSM_REALIZATION_INFO *)v13);
  else
    v8 = 0LL;
  if ( v8 )
  {
    CMILCOMBase::InternalAddRef(v8);
    v9 = CDxHandleBitmapRealization::Initialize(v8);
    v11 = v9;
    if ( v9 >= 0 )
    {
      *a3 = (CGDIBitmapRealization *)((char *)v8 + 368);
      return v11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2Bu, 0LL);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x2Au, 0LL);
  }
  if ( v8 )
    CRenderTargetBitmap::Release(v8);
  return v11;
}
