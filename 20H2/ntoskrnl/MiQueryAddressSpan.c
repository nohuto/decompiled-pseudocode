/*
 * XREFs of MiQueryAddressSpan @ 0x14022C1F0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v6; // r15d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 *v11; // r12
  int v12; // r13d
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rsi
  int v17; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+54h] [rbp-24h] BYREF
  int v19; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-18h] BYREF
  __int16 v21; // [rsp+C0h] [rbp+48h] BYREF
  __int16 v22; // [rsp+C8h] [rbp+50h] BYREF
  int v23; // [rsp+D0h] [rbp+58h] BYREF
  int v24; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v6 = a4;
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
  v12 = (unsigned __int8)MiLockWorkingSetShared(v11);
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(
                           a2,
                           (int)v8 - 1,
                           v12,
                           v6,
                           0LL,
                           (__int64)&v23,
                           (__int64)&v24,
                           (__int64)&v21,
                           (__int64)v20,
                           (__int64)&v17);
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
    if ( (unsigned int)MiQueryAddressState(
                         v15,
                         (int)v8 - 1,
                         (unsigned __int8)v12,
                         v6,
                         a1,
                         (__int64)&v18,
                         (__int64)&v19,
                         (__int64)&v22,
                         (__int64)v20,
                         (__int64)&v17) != *(_DWORD *)(a1 + 32)
      || v18 != v23
      || v22 != v21
      || v19 != v24 )
    {
      break;
    }
    v15 = v20[0];
    if ( (++v4 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended(v11) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared(v11, (unsigned __int8)v12);
      MiLockWorkingSetShared(v11);
    }
  }
  MiUnlockWorkingSetShared(v11, (unsigned __int8)v12);
  return v15;
}
