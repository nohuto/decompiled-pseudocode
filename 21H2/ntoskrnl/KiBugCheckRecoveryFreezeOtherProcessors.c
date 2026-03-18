/*
 * XREFs of KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4
 * Callers:
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x140578EF0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x140579B48 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiSetDebuggerOwner @ 0x1402DA760 (KiSetDebuggerOwner.c)
 *     KiSendFreeze @ 0x1402DA81C (KiSendFreeze.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFrozenProcessorCount @ 0x1405735F0 (KeFrozenProcessorCount.c)
 */

__int64 __fastcall KiBugCheckRecoveryFreezeOtherProcessors(unsigned int a1)
{
  unsigned int v2; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  signed int v4; // edi
  unsigned int i; // ebx
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h]
  __int16 v11; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+4Ah] [rbp-B6h]
  __int16 v13; // [rsp+4Eh] [rbp-B2h]
  _QWORD v14[34]; // [rsp+50h] [rbp-B0h] BYREF

  v12 = 0;
  v13 = 0;
  memset(&v14[1], 0, 0x100uLL);
  v2 = KeNumberProcessors_0;
  v8 = 0;
  if ( (_DWORD)KeNumberProcessors_0 != 1 && !KiHypervisorInitiatedCrashDump )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    KiSetDebuggerOwner((__int64)CurrentPrcb);
    LODWORD(v14[0]) = 2097153;
    memset((char *)v14 + 4, 0, 0x104uLL);
    KiCopyAffinityEx((__int64)v14, 0x20u, (unsigned __int16 *)KeActiveProcessors);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v14, CurrentPrcb->Number);
    KiFreezeInDpc = 1;
    KiFreezeInDpcCount = 0;
    v4 = 0;
    v10 = v14[1];
    v9 = (unsigned __int16 *)v14;
    v11 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
    {
      KiInsertQueueDpc(KiProcessorBlock[v8] + 38992, 0LL, 0LL, 0LL, 0);
      ++v4;
    }
    for ( i = 0; i < 0xF4240; i += 50 )
    {
      if ( KiFreezeInDpcCount >= v4 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( KiFreezeInDpcCount < v4 )
    {
      v10 = v14[1];
      v9 = (unsigned __int16 *)v14;
      v11 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
        KeRemoveQueueDpcEx(KiProcessorBlock[v8] + 38992, 0);
    }
    KiSendFreeze((__int64)v14, a1 == 0);
    if ( a1 )
    {
      v6 = 0;
      do
      {
        if ( (unsigned int)KeFrozenProcessorCount() >= v4 )
          break;
        KeStallExecutionProcessor(0x32u);
        v6 += 50;
      }
      while ( v6 < a1 );
    }
    KiFreezeInDpc = 0;
    return (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount();
  }
  return v2;
}
