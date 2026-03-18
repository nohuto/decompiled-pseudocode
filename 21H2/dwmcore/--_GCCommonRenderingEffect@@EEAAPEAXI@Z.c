/*
 * XREFs of ??_GCCommonRenderingEffect@@EEAAPEAXI@Z @ 0x1800AF630
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x1800D0FD0 (--1EffectInput@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  EffectInput *v3; // rsi
  __int64 v5; // rdi
  int Current; // eax
  struct CThreadContext *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (CCommonRenderingEffect *)((char *)this + 64);
  v5 = 2LL;
  do
  {
    v3 = (EffectInput *)((char *)v3 - 24);
    EffectInput::~EffectInput(v3);
    --v5;
  }
  while ( v5 );
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x48uLL);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v10);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v7 = v10;
      if ( *((_DWORD *)v10 + 49) >= *((_DWORD *)v10 + 48) )
      {
        DefaultHeap::Free(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v10 + 25);
        ++*((_DWORD *)v7 + 49);
        *((_QWORD *)v7 + 25) = this;
      }
    }
  }
  return this;
}
