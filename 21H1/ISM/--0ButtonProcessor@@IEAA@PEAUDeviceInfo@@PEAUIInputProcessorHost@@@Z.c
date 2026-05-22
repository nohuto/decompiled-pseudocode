/*
 * XREFs of ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180023A1C
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180021E10 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0?$unordered_map@EUTargetingInfo@KeyboardProcessor@@U?$hash@E@std@@U?$equal_to@E@4@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x1800480E8 (--0-$unordered_map@EUTargetingInfo@KeyboardProcessor@@U-$hash@E@std@@U-$equal_to@E@4@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=1
ButtonProcessor *__fastcall ButtonProcessor::ButtonProcessor(
        ButtonProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &ButtonProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ButtonProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = a2;
  std::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>((char *)this + 40);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return this;
}
