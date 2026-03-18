/*
 * XREFs of ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18025B500
 * Callers:
 *     ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x18023B4D0 (-ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISU.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18025B2B4 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CRedirectedVisualContent::Create(struct CComposition **a1, struct CRedirectedVisualContent **a2)
{
  CRedirectedVisualContent *v4; // rax
  __int64 v5; // rcx
  CRedirectedVisualContent *v6; // rax
  struct CRedirectedVisualContent *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  CRedirectedVisualContent *v12; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CRedirectedVisualContent *)DefaultHeap::AllocClear(0x98uLL);
  if ( !v4 )
  {
    v12 = 0LL;
    goto LABEL_7;
  }
  v6 = CRedirectedVisualContent::CRedirectedVisualContent(v4, a1);
  v12 = v6;
  v7 = v6;
  if ( !v6 )
  {
LABEL_7:
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024882, 0x14u);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CRedirectedVisualContent *))(*(_QWORD *)v6 + 8LL))(v6);
  v8 = (*(__int64 (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v7 + 48LL))(v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x16u);
  }
  else
  {
    v12 = 0LL;
    *a2 = v7;
  }
LABEL_8:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v10;
}
