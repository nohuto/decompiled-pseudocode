/*
 * XREFs of ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18005AE00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x18005C27C (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18006524C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBrushRenderingEffectFactory::CreateRenderingEffect(
        struct CBrushRenderingEffect *a1,
        __int128 *a2,
        _QWORD *a3)
{
  unsigned int v6; // edi
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v8; // rcx
  int v9; // r10d
  __int128 v10; // xmm1
  __int64 v11; // rdx
  void *v12; // rax
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( v8 || (v12 = DefaultHeap::Alloc(0x168uLL), (v8 = v12) != 0LL) )
  {
    v10 = *a2;
    v11 = *((_QWORD *)a1 + 2);
    *((_QWORD *)&v14 + 1) = (char *)a1 + 32;
    *(_QWORD *)&v14 = 4LL;
    v15 = v14;
    v16 = v10;
    v12 = (void *)CBrushRenderingEffect::CBrushRenderingEffect(v8, v11, &v16, &v15);
  }
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    *a3 = v12;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0x49u, 0LL);
  }
  return v6;
}
