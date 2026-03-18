/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800B232C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800ADF90 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?PreInitClass@Time@@SAJXZ @ 0x1800B2398 (-PreInitClass@Time@@SAJXZ.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800B25E0 (--0CExpressionManager@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  volatile signed __int32 *v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  int inited; // eax
  __int64 v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)DefaultHeap::AllocClear(0x1F0uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = (volatile signed __int32 *)CExpressionManager::CExpressionManager(v3);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v6 = byte_18034947D == 0;
    *a1 = (struct CExpressionManager *)v4;
    if ( v6 )
    {
      byte_18034947D = 1;
      inited = Time::PreInitClass();
      v2 = inited;
      if ( inited < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, inited, 0x20u, 0LL);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v2;
}
