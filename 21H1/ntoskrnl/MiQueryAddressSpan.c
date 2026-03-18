/*
 * XREFs of MiQueryAddressSpan @ 0x1402A4720
 * Callers:
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4)
{
  int v4; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 *v11; // r12
  unsigned __int8 v12; // r13
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rsi
  int v17; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+54h] [rbp-24h] BYREF
  int v19; // [rsp+58h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+60h] [rbp-18h] BYREF
  __int16 v21; // [rsp+C0h] [rbp+48h] BYREF
  __int16 v22; // [rsp+C8h] [rbp+50h] BYREF
  int v23; // [rsp+D0h] [rbp+58h] BYREF
  int v24; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v7 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v23 = 0;
  v8 = a3;
  v18 = 0;
  v9 = ((v7 << 12) | 0xFFF) + 1;
  v20[0] = 0LL;
  v17 = 0;
  v24 = 0;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  if ( a3 > v9 || !a3 )
    v8 = v9;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v12 = MiLockWorkingSetShared((__int64)v11);
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(a2, v8 - 1, v12, a4, 0LL, &v23, &v24, &v21, v20, &v17);
  if ( v23 )
  {
    v13 = MmProtectToValue[v23];
    *(_DWORD *)(a1 + 36) = v13;
    v14 = v24 | v13;
  }
  else
  {
    v14 = 0;
  }
  *(_DWORD *)(a1 + 36) = v14;
  v15 = v20[0];
  *(_WORD *)(a1 + 20) = v21;
  while ( v15 < v8 )
  {
    if ( (unsigned int)MiQueryAddressState(v15, v8 - 1, v12, a4, (_KPROCESS *)a1, &v18, &v19, &v22, v20, &v17) != *(_DWORD *)(a1 + 32)
      || v18 != v23
      || v22 != v21
      || v19 != v24 )
    {
      break;
    }
    v15 = v20[0];
    if ( (++v4 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended(v11) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v11, v12);
      MiLockWorkingSetShared((__int64)v11);
    }
  }
  MiUnlockWorkingSetShared((__int64)v11, v12);
  return v15;
}
