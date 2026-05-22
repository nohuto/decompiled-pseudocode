/*
 * XREFs of ??0KeyboardProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180023A28
 * Callers:
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180023D00 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0?$unordered_map@EUTargetingInfo@KeyboardProcessor@@U?$hash@E@std@@U?$equal_to@E@4@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x180047A88 (--0-$unordered_map@EUTargetingInfo@KeyboardProcessor@@U-$hash@E@std@@U-$equal_to@E@4@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
KeyboardProcessor *__fastcall KeyboardProcessor::KeyboardProcessor(
        KeyboardProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  __int64 v4; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 11) = 300;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  std::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>((char *)this + 64);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 14) = 0;
  return this;
}
