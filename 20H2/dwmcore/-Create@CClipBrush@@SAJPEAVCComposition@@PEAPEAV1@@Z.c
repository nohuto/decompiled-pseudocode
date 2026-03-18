/*
 * XREFs of ?Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801B710C
 * Callers:
 *     ?Initialize@CCompositionTextLine@@MEAAJXZ @ 0x1801BC580 (-Initialize@CCompositionTextLine@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??0CClipBrush@@IEAA@PEAVCComposition@@@Z @ 0x1801B6F74 (--0CClipBrush@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CClipBrush::Create(struct CComposition *a1, struct CClipBrush **a2)
{
  CClipBrush *v4; // rax
  __int64 v5; // rcx
  struct CClipBrush *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct CClipBrush *v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (CClipBrush *)DefaultHeap::AllocClear(0x90uLL);
  if ( v4 )
    v6 = CClipBrush::CClipBrush(v4, a1);
  else
    v6 = 0LL;
  v11 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CClipBrush *))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = (*(__int64 (__fastcall **)(struct CClipBrush *))(*(_QWORD *)v6 + 48LL))(v6);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17u, 0LL);
    }
    else
    {
      v11 = 0LL;
      *a2 = v6;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v9;
}
