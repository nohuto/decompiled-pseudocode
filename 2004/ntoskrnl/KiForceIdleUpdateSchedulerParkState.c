/*
 * XREFs of KiForceIdleUpdateSchedulerParkState @ 0x14051E000
 * Callers:
 *     KiForceIdleStartDpcRoutine @ 0x14051DE00 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14051DF10 (KiForceIdleStopDpcRoutine.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     KeOrAffinityEx @ 0x1402204E0 (KeOrAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FD690 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14051DC48 (KiForceIdleParkUnparkProcessor.c)
 */

__int64 __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  __int64 v1; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v3; // edi
  int v4; // eax
  __int64 result; // rax
  struct _KPRCB *Prcb; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  _QWORD v13[22]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = a1;
  v12 = 0LL;
  v11 = 0LL;
  memset(v13, 0, 0xA8uLL);
  v10 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  if ( (_BYTE)v1 )
  {
    KeCopyAffinityEx((__int64)v13, (unsigned __int16 *)KeActiveProcessors);
  }
  else
  {
    KeCopyAffinityEx((__int64)v13, KiForceIdleUnparkRestoreMask);
    KeOrAffinityEx((unsigned __int16 *)v13, KiForceIdleSoftParkRestoreMask, v13);
  }
  v3 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
  v4 = KeCountSetBitsAffinityEx((unsigned __int16 *)v13);
  if ( ((v13[(v3 >> 6) + 1] >> (v3 & 0x3F)) & 1) != 0 )
    --v4;
  KiForceIdlePendingDpcCount = v4;
  *((_QWORD *)&v11 + 1) = v13[1];
  *(_QWORD *)&v11 = v13;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, (unsigned __int16 **)&v11);
    if ( (_DWORD)result )
      break;
    Prcb = (struct _KPRCB *)KeGetPrcb(v10);
    if ( Prcb == KeGetCurrentPrcb() )
    {
      LOBYTE(v7) = v1;
      KiForceIdleParkUnparkProcessor((__int64)Prcb, v7, v8, v9);
    }
    else
    {
      KiInsertQueueDpc((ULONG_PTR)&Prcb->ForceIdleDpc, v1, 0LL, 0LL, 0);
    }
  }
  return result;
}
