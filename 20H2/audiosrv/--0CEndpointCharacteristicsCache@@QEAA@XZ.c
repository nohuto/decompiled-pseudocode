/*
 * XREFs of ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x180055F74
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Z @ 0x180055E38 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIEndpointCharacteristicsCache@@@WRL@Microsoft@@QEAA@XZ @ 0x180055F30 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIEndpointCharacteristicsCache@@@WRL@M.c)
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180055FCC (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 */

CEndpointCharacteristicsCache *__fastcall CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(
        CEndpointCharacteristicsCache *this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  CEndpointCharacteristicsCache *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristicsCache>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristicsCache>((__int64)this);
  *(_QWORD *)this = &CEndpointCharacteristicsCache::`vftable';
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (_DWORD)this + 24,
    v2,
    v3,
    v4,
    LODWORD(FLOAT_2_25));
  *((_QWORD *)this + 12) = 0LL;
  result = this;
  *((_BYTE *)this + 104) = 0;
  return result;
}
