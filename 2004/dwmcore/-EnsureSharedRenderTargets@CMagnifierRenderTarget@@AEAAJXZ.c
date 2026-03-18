/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18018C6D4
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18018C670 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180065D28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z @ 0x180091B3C (--$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18018C8F8 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int v3; // ebx
  unsigned int i; // r14d
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v15; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v16; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 470);
  v2 = 0;
  v16 = 0LL;
  v3 = 0;
  v15 = 0;
  if ( v1 )
  {
    for ( i = 0; i < *((_DWORD *)this + 470); ++i )
    {
      v6 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * i + 237),
             *(struct _LUID *)((char *)this + 32 * i + 1904),
             *((HMONITOR *)this + 4 * i + 239),
             &v16);
      v15 = v6;
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802EE908, 2u, v6, 0x16Du, 0LL);
        v3 = v2;
        break;
      }
      v8 = *((_DWORD *)this + 450);
      v9 = v8 + 1;
      if ( v8 + 1 >= v8 )
      {
        v3 = 0;
        if ( v9 <= *((_DWORD *)this + 449) )
        {
          v11 = *((_QWORD *)this + 222);
          v12 = *((unsigned int *)this + 450);
          v2 = 0;
          v15 = 0;
          *(_QWORD *)(v11 + 8 * v12) = v16;
          *((_DWORD *)this + 450) = v9;
          goto LABEL_11;
        }
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1776, 8, 1, &v16);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v13, 0xC0u, 0LL);
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      v15 = v3;
      v2 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802EE908, 2u, v3, 0x170u, 0LL);
        break;
      }
LABEL_11:
      v16 = 0LL;
    }
  }
  ReleaseInterfaceNoNULL<IBitmapLock>((__int64)v16);
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 7, &v15);
    return v15;
  }
  return v2;
}
