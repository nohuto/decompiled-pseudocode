/*
 * XREFs of @RtlpWaitOnAddressWithTimeout@16 @ 0x4B2DF875
 * Callers:
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 *     _RtlpWaitOnAddressRemoveWaitBlock@8 @ 0x4B2DF916 (_RtlpWaitOnAddressRemoveWaitBlock@8.c)
 * Callees:
 *     _RtlpIsWaitOnAddressSpinSatisfied@8 @ 0x4B2DF903 (_RtlpIsWaitOnAddressSpinSatisfied@8.c)
 *     _RtlpWaitOnAddressRemoveWaitBlock@8 @ 0x4B2DF916 (_RtlpWaitOnAddressRemoveWaitBlock@8.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 */

NTSTATUS __fastcall RtlpWaitOnAddressWithTimeout(int a1, PVOID *a2, PLARGE_INTEGER Timeout, unsigned int a4)
{
  volatile signed __int32 *v5; // ebx
  int v6; // esi
  unsigned int v7; // ebx
  NTSTATUS v8; // esi
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // kr08_8
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v15; // [esp+14h] [ebp-Ch]

  v5 = (volatile signed __int32 *)(a2 + 5);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( a2 != (PVOID *)-20 && MEMORY[0x7FFE0297] )
    {
      v10 = __rdtsc();
      v11 = v10;
      while ( 1 )
      {
        __asm { monitorx eax, ecx, edx }
        if ( (*v5 & 1) == 0 )
          break;
        v12 = HIDWORD(v11);
        v13 = __rdtsc();
        v15 = v11;
        v11 = v13;
        if ( v13 <= __PAIR64__(v12, v15) || v13 >= v10 + a4 )
          break;
        __asm { mwaitx  eax, ecx, ebx }
        v5 = (volatile signed __int32 *)(a2 + 5);
      }
    }
    else
    {
      v6 = 0;
      v7 = a4 / MEMORY[0x7FFE02D6];
      while ( !(unsigned __int8)RtlpIsWaitOnAddressSpinSatisfied(a2, 0) && v6 != v7 )
      {
        _mm_pause();
        ++v6;
      }
      v5 = (volatile signed __int32 *)(a2 + 5);
    }
  }
  if ( !_interlockedbittestandreset(v5, 0) )
    return 0;
  v8 = ZwWaitForAlertByThreadId(*a2, Timeout);
  if ( v8 == 258 )
  {
    if ( _InterlockedExchange(v5, 4) == 2 )
      v8 = ZwWaitForAlertByThreadId(*a2, 0);
    else
      RtlpWaitOnAddressRemoveWaitBlock(a1, a2);
  }
  return v8 != 257 ? v8 : 0;
}
