/*
 * XREFs of HalpTscSynchronization @ 0x1403DD730
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalpFindTimer @ 0x1403ACEFC (HalpFindTimer.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403B6AC0 (HalpTscInitializeSynchronizationContext.c)
 *     HviIsXboxNanovisorPresent @ 0x1403DD7D4 (HviIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

int __fastcall HalpTscSynchronization(char a1, int *a2)
{
  ULONG_PTR *Timer; // rax
  ULONG_PTR Context[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+40h] [rbp-38h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  *(_OWORD *)Context = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( qword_140C4C488 || (unsigned __int8)HviIsXboxNanovisorPresent() )
  {
    Timer = HalpFindTimer(5, 0, 0, 0, 1);
    if ( Timer && (Timer[28] & 0x6000) == 0 )
      *((_DWORD *)Timer + 46) |= 0x20u;
  }
  else
  {
    LODWORD(Timer) = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( (unsigned int)Timer >= 2 )
    {
      HalpTscInitializeSynchronizationContext((__int64)Context, a1, a2, 0LL);
      LODWORD(Timer) = KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpTscSynchronizationWorker, (ULONG_PTR)Context);
    }
  }
  return (int)Timer;
}
