/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1C012EA90
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C00549F8 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     SynthesizeMitTouchInput @ 0x1C01AE22C (SynthesizeMitTouchInput.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(char *Src, __int64 a2, __int64 a3, __int64 a4)
{
  CInputThread *v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v13[2]; // [rsp+30h] [rbp-B88h] BYREF
  _BYTE Srca[1456]; // [rsp+40h] [rbp-B78h] BYREF
  _BYTE v15[1456]; // [rsp+5F0h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v13, "MITSynthesizeTouchInput", 0LL, a4);
  EnterCrit(0, 1);
  memset(v15, 0, sizeof(v15));
  v7 = 0;
  if ( CInputThread::IsInputThread(v5) )
  {
    if ( Src + 1456 < Src || (unsigned __int64)(Src + 1456) > MmUserProbeAddress )
      Src = (char *)MmUserProbeAddress;
    memmove(Srca, Src, 0x5B0uLL);
    memmove(v15, Srca, 0x5B0uLL);
    if ( (unsigned __int8)SynthesizeMitTouchInput(v15) )
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
  UserSessionSwitchLeaveCrit(v9, v6, v10, v11);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v13);
  return v7;
}
