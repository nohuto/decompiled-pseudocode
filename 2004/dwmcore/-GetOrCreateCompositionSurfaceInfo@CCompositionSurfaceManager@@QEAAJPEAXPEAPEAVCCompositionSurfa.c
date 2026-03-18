/*
 * XREFs of ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180099238
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180098880 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18017F814 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x180097CF4 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x180099308 (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
        CCompositionSurfaceManager *this,
        void *a2,
        struct CCompositionSurfaceInfo **a3)
{
  char v6; // si
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  struct CCompositionSurfaceInfo *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  struct _LUID v15; // [rsp+70h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v16; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = NtValidateCompositionSurfaceHandle(a2, &v15);
  if ( v8 < 0 )
  {
    v7 = v8 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8 | 0x10000000, 0x2Au, 0LL);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x36u, 0LL);
  }
  else
  {
    v6 = 1;
    CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(this, v15);
    v16 = CompositionSurfaceInfoByLuid;
    v11 = CompositionSurfaceInfoByLuid;
    if ( CompositionSurfaceInfoByLuid )
    {
      (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)CompositionSurfaceInfoByLuid + 8LL))(CompositionSurfaceInfoByLuid);
    }
    else
    {
      v12 = CCompositionSurfaceInfo::Create(a2, v15, this, &v16);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x46u, 0LL);
        goto LABEL_11;
      }
      v11 = v16;
      v6 = 0;
    }
    *a3 = v11;
  }
  if ( v6 )
LABEL_11:
    CloseHandle(a2);
  return (unsigned int)v7;
}
