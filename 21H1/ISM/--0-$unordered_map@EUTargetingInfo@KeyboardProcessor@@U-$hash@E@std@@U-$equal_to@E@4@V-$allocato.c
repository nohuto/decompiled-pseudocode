/*
 * XREFs of ??0?$unordered_map@EUTargetingInfo@KeyboardProcessor@@U?$hash@E@std@@U?$equal_to@E@4@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x1800480E8
 * Callers:
 *     ??0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180023998 (--0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180023A1C (--0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@1@AEBV?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@1@@Z @ 0x180048068 (--0-$_Hash@V-$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V-$_Uhash_compare@EU-$hash@E@std@@.c)
 */

__int64 __fastcall std::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  v6 = HIDWORD(a1);
  v5 = 0;
  std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>(
    a1,
    &v5,
    a3);
  return a1;
}
