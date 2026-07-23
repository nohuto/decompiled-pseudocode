/*
 * XREFs of KiTimerExpirationDpc @ 0x140389320
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     KiTimerExpiration @ 0x140389440 (KiTimerExpiration.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall KiTimerExpirationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // esi
  int v5; // r9d
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-138h] BYREF
  int v12; // [rsp+38h] [rbp-130h]
  int v13; // [rsp+3Ch] [rbp-12Ch]
  _QWORD v14[34]; // [rsp+40h] [rbp-128h] BYREF

  v4 = (int)SystemArgument1;
  memset(v14, 0, sizeof(v14));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    EtwTraceKernelEvent((int)&v11, 1, 0x40020000u, 3926, 4196866);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14[1] = MEMORY[0xFFFFF78000000014];
  _disable();
  v7 = MEMORY[0xFFFFF78000000008];
  if ( KiSerializeTimerExpiration )
  {
    if ( CurrentPrcb->ClockOwner )
    {
      v8 = 31568LL;
      v9 = MEMORY[0xFFFFF78000000008] >> 18;
      v10 = 2LL;
      do
      {
        *(_DWORD *)(v8 + KiProcessorBlock[0]) = v9;
        v8 += 4LL;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    CurrentPrcb->TimerTable.TableState.LastTimerHand[0] = MEMORY[0xFFFFF78000000008] >> 18;
    CurrentPrcb->TimerTable.TableState.LastTimerHand[1] = v7 >> 18;
  }
  _enable();
  LOBYTE(v5) = 1;
  KiTimerExpiration((_DWORD)CurrentPrcb, v4, v7, v5, (__int64)v14);
  CurrentPrcb->DpcData[0].ActiveDpc = 0LL;
  if ( CurrentPrcb->ClockOwner )
    KiTimer2Expiration((__int64)CurrentPrcb, v7, 1, 1, (__int64)v14);
}
