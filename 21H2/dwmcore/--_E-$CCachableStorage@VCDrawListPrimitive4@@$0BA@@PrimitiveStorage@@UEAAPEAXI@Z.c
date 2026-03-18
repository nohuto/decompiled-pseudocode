/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800D0A80
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  _QWORD *Value; // rbx
  CThreadContext *v5; // rax
  __int64 v6; // rcx
  CThreadContext *v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(a1, 0x1A8uLL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v5 = (CThreadContext *)operator new(0x150uLL);
        if ( !v5 || (v7 = CThreadContext::CThreadContext(v5), (Value = v7) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v7);
      }
      if ( *((_DWORD *)Value + 41) >= *((_DWORD *)Value + 40) )
      {
        DefaultHeap::Free(a1);
      }
      else
      {
        *a1 = Value[21];
        ++*((_DWORD *)Value + 41);
        Value[21] = a1;
      }
    }
  }
  return a1;
}
