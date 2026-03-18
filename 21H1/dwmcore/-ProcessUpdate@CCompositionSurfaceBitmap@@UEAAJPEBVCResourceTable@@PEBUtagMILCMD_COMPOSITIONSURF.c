/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002C010
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18002C10C (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18002C390 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // rbp
  unsigned int v4; // edi
  struct CCompositionSurfaceInfo *v5; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  struct CCompositionSurfaceInfo *v14; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-38h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0;
  v5 = 0LL;
  v13 = 0;
  v14 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Start,
      a3,
      1LL,
      v15);
  if ( !v3 )
    goto LABEL_8;
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 12);
  v9 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo((CCompositionSurfaceManager *)(v8 + 16), v3, &v14);
  v13 = v9;
  v4 = v9;
  if ( v9 >= 0 )
  {
    v5 = v14;
LABEL_8:
    *((_BYTE *)this + 192) = *((_BYTE *)a3 + 16) != 0;
    *((_BYTE *)this + 193) = *((_BYTE *)a3 + 17) != 0;
    CCompositionSurfaceBitmap::SetSurfaceInfo(this, v5);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3Eu, 0LL);
LABEL_9:
  TranslateDXGIorD3DErrorInContext(v4, 10LL, &v13);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop,
      v11,
      1LL,
      v15);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v14);
  return v13;
}
