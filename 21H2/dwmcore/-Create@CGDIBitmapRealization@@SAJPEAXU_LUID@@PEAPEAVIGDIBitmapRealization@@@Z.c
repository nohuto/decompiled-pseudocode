/*
 * XREFs of ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180065348
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18006014C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x180065440 (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180066E4C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CGDIBitmapRealization::Create(void *a1, struct _LUID a2, struct IGDIBitmapRealization **a3)
{
  CGDIBitmapRealization *v6; // rax
  unsigned int v7; // ecx
  CGDIBitmapRealization *v8; // rax
  CGDIBitmapRealization *v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  _DWORD v14[2]; // [rsp+38h] [rbp-69h] BYREF
  void *v15; // [rsp+40h] [rbp-61h]
  struct _LUID v16; // [rsp+48h] [rbp-59h]
  __int128 v17; // [rsp+50h] [rbp-51h]
  _DWORD v18[20]; // [rsp+68h] [rbp-39h] BYREF
  __int128 v19; // [rsp+B8h] [rbp+17h]

  *a3 = 0LL;
  memset_0(v18, 0, 0x90uLL);
  v18[12] = 0;
  v14[1] = 0;
  v18[18] = (_DWORD)FLOAT_1_0;
  v19 = _xmm;
  v18[19] = 0;
  v18[0] = 1;
  v18[17] = 1;
  v17 = 0LL;
  v14[0] = 2;
  v15 = a1;
  v16 = a2;
  v6 = (CGDIBitmapRealization *)operator new(0x218uLL);
  if ( v6
    && (v8 = CGDIBitmapRealization::CGDIBitmapRealization(
               v6,
               (const struct CSM_BUFFER_ATTRIBUTES *)v18,
               (const struct CSM_REALIZATION_INFO *)v14),
        (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CGDIBitmapRealization *)((char *)v8 + 8));
    v10 = CDxHandleBitmapRealization::Initialize(v9);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2Bu, 0LL);
      CMILRefCountBaseT<IUnknown>::InternalRelease(v9);
    }
    else
    {
      *a3 = (CGDIBitmapRealization *)((char *)v9 + 400);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x2Au, 0LL);
  }
  return v12;
}
