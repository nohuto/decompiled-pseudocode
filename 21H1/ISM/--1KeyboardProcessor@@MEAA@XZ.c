/*
 * XREFs of ??1KeyboardProcessor@@MEAA@XZ @ 0x1801354D4
 * Callers:
 *     ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x18013555C (--_GKeyboardProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unordered_map@EUTargetingInfo@KeyboardProcessor@@U?$hash@E@std@@U?$equal_to@E@4@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18004818C (--1-$unordered_map@EUTargetingInfo@KeyboardProcessor@@U-$hash@E@std@@U-$equal_to@E@4@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KeyboardProcessor::~KeyboardProcessor(KeyboardProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  std::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>::~unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>((__int64)this + 64);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
