/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C0136DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0073320 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     SynthesizeMitTouchInput @ 0x1C01B630C (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(char *Src, __int64 a2, __int64 a3, __int64 a4)
{
  CInputThread *v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v11[2]; // [rsp+30h] [rbp-B88h] BYREF
  _BYTE Srca[1456]; // [rsp+40h] [rbp-B78h] BYREF
  _BYTE v13[1456]; // [rsp+5F0h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v11, "MITSynthesizeTouchInput", 0LL, a4);
  EnterCrit(0LL, 1);
  memset(v13, 0, sizeof(v13));
  v7 = 0;
  if ( CInputThread::IsInputThread(v5) )
  {
    if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
      Src = (char *)MmUserProbeAddress;
    memmove(Srca, Src, 0x5B0uLL);
    memmove(v13, Srca, 0x5B0uLL);
    if ( (unsigned __int8)SynthesizeMitTouchInput(v13) )
    {
      v7 = 1;
      goto LABEL_10;
    }
    v8 = 5023LL;
  }
  else
  {
    v8 = 5LL;
  }
  UserSetLastError(v8, v6);
LABEL_10:
  UserSessionSwitchLeaveCrit(v9);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v11);
  return v7;
}
