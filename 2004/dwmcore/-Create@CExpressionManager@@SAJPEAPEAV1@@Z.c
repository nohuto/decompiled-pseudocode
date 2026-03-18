/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180029BE8
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002A690 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?PreInitClass@Time@@SAJXZ @ 0x180029C54 (-PreInitClass@Time@@SAJXZ.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x18002A360 (--0CExpressionManager@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  volatile signed __int32 *v4; // rax
  unsigned int v5; // ecx
  bool v6; // zf
  int inited; // eax
  unsigned int v8; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)DefaultHeap::AllocClear(0x1F0uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = (volatile signed __int32 *)CExpressionManager::CExpressionManager(v3);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v6 = byte_18034547D == 0;
    *a1 = (struct CExpressionManager *)v4;
    if ( v6 )
    {
      byte_18034547D = 1;
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
