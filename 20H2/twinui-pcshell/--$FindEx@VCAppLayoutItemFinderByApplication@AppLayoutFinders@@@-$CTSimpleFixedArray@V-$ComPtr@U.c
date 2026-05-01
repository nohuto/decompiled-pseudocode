/*
 * XREFs of ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804805B0
 * Callers:
 *     ?ContainsApp@CAppLayout@@UEAAHPEAUIImmersiveApplication@@@Z @ 0x180481140 (-ContainsApp@CAppLayout@@UEAAHPEAUIImmersiveApplication@@@Z.c)
 *     ?FindAppItem@CAppLayout@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x180481280 (-FindAppItem@CAppLayout@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180482590 (-RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?Compare@CAppLayoutItemFinderByApplication@AppLayoutFinders@@QEBAHAEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@0@Z @ 0x18048107C (-Compare@CAppLayoutItemFinderByApplication@AppLayoutFinders@@QEBAHAEBV-$ComPtr@UIAppLayoutItem@@.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByApplication>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( (unsigned int)AppLayoutFinders::CAppLayoutItemFinderByApplication::Compare(a2, *a1 + 8 * v4) )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
