/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801C7888
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801C77C0 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIRenderTargetBitmap@@@@YAXPEAVIRenderTargetBitmap@@@Z @ 0x180112F02 (--$ReleaseInterfaceNoNULL@VIRenderTargetBitmap@@@@YAXPEAVIRenderTargetBitmap@@@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801C7AB8 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // edi
  unsigned int v5; // r14d
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v16; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 466);
  v2 = 0;
  v16 = 0LL;
  v3 = 0;
  v15 = 0;
  if ( v1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * v5 + 235),
             *(struct _LUID *)((char *)this + 32 * v5 + 1888),
             *((HMONITOR *)this + 4 * v5 + 237),
             &v16);
      v15 = v6;
      v2 = v6;
      if ( v6 < 0 )
        break;
      v8 = *((_DWORD *)this + 446);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024362, 0xB5u);
        v2 = -2147024362;
        goto LABEL_13;
      }
      v3 = 0;
      if ( v9 > *((_DWORD *)this + 445) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 1760, 8u, 1, &v16);
        v3 = v11;
        v2 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xC0u);
LABEL_13:
          v15 = v2;
          MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180377E10, 2LL, v3, 0x16Fu);
          goto LABEL_15;
        }
        v15 = v11;
      }
      else
      {
        v10 = *((_QWORD *)this + 220);
        v2 = 0;
        v15 = 0;
        *(_QWORD *)(v10 + 8LL * v8) = v16;
        *((_DWORD *)this + 446) = v9;
      }
      v16 = 0LL;
      if ( ++v5 >= *((_DWORD *)this + 466) )
        goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180377E10, 2LL, v6, 0x16Cu);
    v3 = v2;
  }
LABEL_15:
  ReleaseInterfaceNoNULL<IRenderTargetBitmap>((__int64)v16);
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 7, &v15);
    return v15;
  }
  return v2;
}
