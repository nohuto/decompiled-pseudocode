/*
 * XREFs of _TppCancelTimer@12 @ 0x4B2B7D76
 * Callers:
 *     _TpReleaseTimer@4 @ 0x4B2B3B90 (_TpReleaseTimer@4.c)
 *     _TpWaitForTimer@8 @ 0x4B2B3C20 (_TpWaitForTimer@8.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _TppWaitCompletion@16 @ 0x4B2B5530 (_TppWaitCompletion@16.c)
 *     _TppCancelWait@16 @ 0x4B2B7B98 (_TppCancelWait@16.c)
 *     _TppTimerpStopCallbackGeneration@8 @ 0x4B384390 (_TppTimerpStopCallbackGeneration@8.c)
 * Callees:
 *     _TppPHDelete@8 @ 0x4B2B750C (_TppPHDelete@8.c)
 *     _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9 (_TppUpdateSubQueueTimer@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 *     _TppItePush@8 @ 0x4B3847FD (_TppItePush@8.c)
 *     _TppETWTimerCancelled@8 @ 0x4B384D6D (_TppETWTimerCancelled@8.c)
 */

char __fastcall TppCancelTimer(int a1, _RTL_SRWLOCK *a2, char a3)
{
  char v5; // bl
  int v7; // eax
  char v8; // bl
  void *v9; // esi
  _RTL_SRWLOCK *v10; // edi
  int v11; // [esp+0h] [ebp-1Ch]
  int v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+8h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-10h]
  _BYTE v15[8]; // [esp+10h] [ebp-Ch] BYREF
  unsigned int *v16; // [esp+18h] [ebp-4h]

  v5 = (*(_BYTE *)(a1 + 222) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 222) & 1) != 0 )
  {
    v16 = (unsigned int *)((char *)a2 + ((*(_BYTE *)(a1 + 222) & 2) != 0 ? 8 : 80));
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478;
    if ( *(_BYTE *)v7 )
      TppETWTimerCancelled(v16, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 220) )
    {
      TppPHDelete(v16 + 3, (_DWORD *)(a1 + 152), v11, v12);
      TppPHDelete(v16 + 2, (_DWORD *)(a1 + 176), v13, v14);
      TppUpdateSubQueueTimer(v16, v5);
      *(_BYTE *)(a1 + 220) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 216) = 0;
      *(_DWORD *)(a1 + 200) = 0;
      *(_DWORD *)(a1 + 204) = 0;
      *(_BYTE *)(a1 + 222) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
      return 1;
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 222) |= 4u;
      v9 = (void *)(a1 + 208);
      TppItePush(a1 + 208, v15);
      v10 = (_RTL_SRWLOCK *)(a1 + 144);
      RtlReleaseSRWLockExclusive(v10);
      v8 = 0;
      ZwWaitForAlertByThreadId(v9, 0);
      if ( a3 )
        RtlAcquireSRWLockExclusive(v10);
    }
    return v8;
  }
  else
  {
    *(_DWORD *)(a1 + 200) = 0;
    *(_DWORD *)(a1 + 204) = 0;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
    return 0;
  }
}
