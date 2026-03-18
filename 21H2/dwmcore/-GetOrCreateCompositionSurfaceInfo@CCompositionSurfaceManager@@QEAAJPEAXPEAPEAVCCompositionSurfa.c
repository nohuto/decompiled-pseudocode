/*
 * XREFs of ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C7AB4
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1800C77C0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801B9B1C (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x1800C7BB0 (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800C7BF0 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
        CCompositionSurfaceManager *this,
        void *a2,
        struct CCompositionSurfaceInfo **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  char v9; // si
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  struct CCompositionSurfaceInfo *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rcx
  struct _LUID v16; // [rsp+70h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v17; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = NtValidateCompositionSurfaceHandle(a2, &v16);
  if ( v6 < 0 )
  {
    v8 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6 | 0x10000000, 0x2Au);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v8, 0x36u);
      return (unsigned int)v8;
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = 1;
  CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(this, v16);
  v17 = CompositionSurfaceInfoByLuid;
  v11 = CompositionSurfaceInfoByLuid;
  if ( CompositionSurfaceInfoByLuid )
  {
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)CompositionSurfaceInfoByLuid + 8LL))(CompositionSurfaceInfoByLuid);
  }
  else
  {
    v12 = CCompositionSurfaceInfo::Create(a2, v16, this, &v17);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x46u);
      goto LABEL_9;
    }
    v11 = v17;
    v9 = 0;
  }
  *a3 = v11;
  if ( v9 )
LABEL_9:
    CloseHandle(a2);
  return (unsigned int)v8;
}
