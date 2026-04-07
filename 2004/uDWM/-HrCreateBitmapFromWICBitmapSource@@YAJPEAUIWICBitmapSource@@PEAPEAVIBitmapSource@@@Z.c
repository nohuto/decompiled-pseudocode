/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18004FDCC
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004FC58 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x18004FE60 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800500C0 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005155C (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18005177C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CMILCOMBase *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IBitmapSource *v8; // rax

  v4 = (CWICBitmapWrapper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              248LL);
  if ( v4 )
    v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v6 = CWICBitmapWrapper::HrInit(v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1Au);
    }
    else
    {
      v8 = (CMILCOMBase *)((char *)v5 + 16);
      v5 = 0LL;
      *a2 = v8;
    }
    if ( v5 )
      CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x17u);
  }
  return v7;
}
