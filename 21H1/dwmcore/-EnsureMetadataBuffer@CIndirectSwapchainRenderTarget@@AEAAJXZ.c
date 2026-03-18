/*
 * XREFs of ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018DBB8
 * Callers:
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7638 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?NotifyOcclusionChange@CIndirectSwapchainRenderTarget@@UEAAJXZ @ 0x18018DDB0 (-NotifyOcclusionChange@CIndirectSwapchainRenderTarget@@UEAAJXZ.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018E37C (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x18018D87C (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rdi
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF

  v1 = (char *)this + 1912;
  *((_DWORD *)this + 484) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1912, 1u);
  v3 = *((_QWORD *)this + 2);
  v18 = 3;
  v19[0] = *(_QWORD *)(v3 + 456);
  v19[1] = g_qpcFrequency.QuadPart;
  v4 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1D0u, 0LL);
  }
  else
  {
    v7 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, v19, 0x10u);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1D1u, 0LL);
    }
    else if ( *((_BYTE *)this + 1773)
           && (v18 = 4, v9 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u), v6 = v9, v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1D7u, 0LL);
    }
    else if ( *((_BYTE *)this + 1946)
           || (v18 = 2, v11 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u), v6 = v11, v11 >= 0) )
    {
      if ( *((_BYTE *)this + 1945)
        && (v18 = 1, v13 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u), v6 = v13, v13 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1E3u, 0LL);
      }
      else if ( *((_BYTE *)this + 1944) )
      {
        v18 = 0;
        v15 = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)v1, &v18, 4u);
        v6 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1E9u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1DDu, 0LL);
    }
  }
  return v6;
}
