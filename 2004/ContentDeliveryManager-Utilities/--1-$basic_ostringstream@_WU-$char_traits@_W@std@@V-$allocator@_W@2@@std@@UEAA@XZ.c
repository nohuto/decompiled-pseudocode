/*
 * XREFs of ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18007990C
 * Callers:
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800776E0 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ??_D?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x180077C00 (--_D-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 *     ??_G?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x180079A84 (--_G-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18003503C (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::wostringstream::~wostringstream(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 136) + 4LL) + a1 - 136) = &std::wostringstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 136) + 4LL);
  *(_DWORD *)(v2 + a1 - 140) = v2 - 136;
  std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(a1 - 128);
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 136) + 4LL) + a1 - 136) = &std::basic_ostream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 136);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 140) = *(_DWORD *)(result + 4) - 16;
  return result;
}
