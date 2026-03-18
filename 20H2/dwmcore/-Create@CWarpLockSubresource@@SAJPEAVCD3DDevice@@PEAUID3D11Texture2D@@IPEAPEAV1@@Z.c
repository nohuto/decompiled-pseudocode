/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x180048580
 * Callers:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18004843C (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180051700 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x180048628 (-Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z @ 0x180048700 (--0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct CD3DDevice *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        struct CWarpLockSubresource **a4)
{
  struct IWarpPrivateAPI *v5; // rbx
  CWarpLockSubresource *v8; // rax
  unsigned int v9; // ecx
  CMILCOMBase *v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx

  *a4 = 0LL;
  v5 = (struct IWarpPrivateAPI *)*((_QWORD *)a1 + 76);
  if ( v5 )
  {
    v8 = (CWarpLockSubresource *)DefaultHeap::Alloc(0x38uLL);
    if ( v8 )
      v10 = CWarpLockSubresource::CWarpLockSubresource(v8, v5);
    else
      v10 = 0LL;
    if ( v10 )
    {
      CMILCOMBase::InternalAddRef(v10);
      v11 = CWarpLockSubresource::Initialize(v10, a2, a3);
      v13 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1Cu, 0LL);
        CRenderTargetBitmap::Release(v10);
      }
      else
      {
        *a4 = v10;
      }
    }
    else
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Au, 0LL);
    }
  }
  else
  {
    v13 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2003292287, 0x22u, 0LL);
  }
  return v13;
}
