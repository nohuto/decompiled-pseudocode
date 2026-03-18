/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YGXPAUtagTHREADINFO@@QAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x6EBE2
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _xxxDrainQueueCompletions@4 @ 0x6EB04 (_xxxDrainQueueCompletions@4.c)
 *     _xxxRemoveQueueCompletion@0 @ 0x6ECD4 (_xxxRemoveQueueCompletion@0.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

ULONG __fastcall xxxHandleCoreMessagingQueueCompletion(int a1, ULONG *a2, int a3)
{
  struct _NT_TIB *Self; // eax
  PVOID *p_StackBase; // esi
  PVOID *v6; // ecx
  PVOID v7; // edi
  _DWORD *v8; // ecx
  _DWORD *v9; // eax
  ULONG result; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v13; // [esp+10h] [ebp-3Ch] BYREF
  int v14; // [esp+14h] [ebp-38h]
  int v15; // [esp+18h] [ebp-34h]
  PVOID v16; // [esp+24h] [ebp-28h]
  struct _NT_TIB *v17; // [esp+28h] [ebp-24h]
  int v18; // [esp+2Ch] [ebp-20h]
  ULONG *v19; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]
  int v21; // [esp+54h] [ebp+8h]

  v19 = a2;
  v18 = a1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v16 = 0;
  Self = KeGetPcr()->NtTib.Self;
  ms_exc.registration.TryLevel = 0;
  v17 = Self[70].Self;
  p_StackBase = &v17->StackBase;
  v6 = &v17->StackBase;
  if ( (unsigned int)&v17->StackBase >= _MmUserProbeAddress )
    v6 = (PVOID *)_MmUserProbeAddress;
  v7 = *v6;
  v16 = *v6;
  ms_exc.registration.TryLevel = -2;
  if ( a3 && !v7 )
  {
    if ( !_PostMessage(*(_DWORD *)(a1 + 836), 96, 1, 0) )
    {
      v21 = *(_DWORD *)(a1 + 836);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v13 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v13;
      v14 = v21;
      if ( v21 )
        HMLockObject(v21);
      xxxSendMessage(*(void **)(a1 + 836), 2u, 0);
      ThreadUnlock1();
    }
    a2 = v19;
  }
  ms_exc.registration.TryLevel = 1;
  v8 = (_DWORD *)*a2;
  v9 = (_DWORD *)*a2;
  if ( *a2 >= _MmUserProbeAddress )
    v9 = (_DWORD *)_MmUserProbeAddress;
  *v9 = v7;
  result = _MmUserProbeAddress;
  if ( (unsigned int)p_StackBase >= _MmUserProbeAddress )
    p_StackBase = (PVOID *)_MmUserProbeAddress;
  *p_StackBase = v8;
  ms_exc.registration.TryLevel = -2;
  return result;
}
