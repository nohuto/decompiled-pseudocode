/*
 * XREFs of ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C00487FC
 * Callers:
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C0103600 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C011C130 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C014A414 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C029469C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0294A68 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 * Callees:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C029B9A8 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 */

OUTPUTDUPL_CONTEXT *__fastcall OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(OUTPUTDUPL_CONTEXT *P)
{
  OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
