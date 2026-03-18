/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002C988
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002A690 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x18002CA20 (-Initialize@DataProviderManager@@AEAAJXZ.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x18002D65C (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  CMILCOMBase *v5; // rax
  struct DataProviderManager *v6; // rsi
  DataProviderManager *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (DataProviderManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = DataProviderManager::DataProviderManager(v4, a1);
  v6 = v5;
  v7 = v5;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v8 = DataProviderManager::Initialize(v7);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v7 = 0LL;
      *a2 = v6;
      v9 = 0;
      goto LABEL_5;
    }
    v11 = (unsigned int)v8;
    v12 = 64LL;
  }
  else
  {
    v9 = -2147024882;
    v12 = 62LL;
    v11 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
    (const char *)v11,
    v13);
LABEL_5:
  if ( v7 )
    CRenderTargetBitmap::Release(v7);
  return v9;
}
