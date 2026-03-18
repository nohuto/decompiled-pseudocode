/*
 * XREFs of NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1C0002DD4 (-AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition@@QEAAJPEAUTOUCH_TELEMETRY_UPDATE_INFO.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005EEC8 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionUpdate(unsigned int a1, size_t Size, char *Src)
{
  int updated; // ebx
  struct DirectComposition::CApplicationChannel *v7; // rdi
  struct DirectComposition::CApplicationChannel *v9; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v10[96]; // [rsp+30h] [rbp-98h] BYREF

  updated = 0;
  v9 = 0LL;
  memset(v10, 0, 0x58uLL);
  if ( !Src || Size != 88 )
    updated = -1073741811;
  if ( updated >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v10, Src, Size);
    updated = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    v7 = v9;
    if ( updated >= 0 )
    {
      updated = DirectComposition::CTelemetryInfo::AddInteractionUpdateInfo(
                  (struct DirectComposition::CApplicationChannel *)((char *)v9 + 528),
                  (struct TOUCH_TELEMETRY_UPDATE_INFO *)v10);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v7)(v7);
    }
  }
  return (unsigned int)updated;
}
