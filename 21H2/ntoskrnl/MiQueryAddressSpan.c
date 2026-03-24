/*
 * XREFs of MiQueryAddressSpan @ 0x14025B3D0
 * Callers:
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v6; // r15d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  int v10; // esi
  unsigned __int64 *v11; // r12
  unsigned __int8 v12; // r13
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  int v20; // [rsp+50h] [rbp-28h] BYREF
  int v21; // [rsp+54h] [rbp-24h] BYREF
  int v22; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+60h] [rbp-18h] BYREF
  __int16 v24; // [rsp+C0h] [rbp+48h] BYREF
  __int16 v25; // [rsp+C8h] [rbp+50h] BYREF
  int v26; // [rsp+D0h] [rbp+58h] BYREF
  int v27; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v6 = a4;
  v7 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v26 = 0;
  v8 = a3;
  v21 = 0;
  v9 = ((v7 << 12) | 0xFFF) + 1;
  v23[0] = 0LL;
  v20 = 0;
  v10 = a2;
  v27 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  if ( a3 > v9 || !a3 )
    v8 = v9;
  v11 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v12 = MiLockWorkingSetShared((__int64)v11, a2, a3, (_DWORD *)a4);
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(
                           v10,
                           (int)v8 - 1,
                           v12,
                           v6,
                           0LL,
                           (__int64)&v26,
                           (__int64)&v27,
                           (__int64)&v24,
                           (__int64)v23,
                           (__int64)&v20);
  if ( v26 )
  {
    v13 = MmProtectToValue[v26];
    *(_DWORD *)(a1 + 36) = v13;
    v14 = v27 | v13;
  }
  else
  {
    v14 = 0;
  }
  *(_DWORD *)(a1 + 36) = v14;
  v15 = v23[0];
  *(_WORD *)(a1 + 20) = v24;
  while ( v15 < v8 )
  {
    if ( (unsigned int)MiQueryAddressState(
                         v15,
                         (int)v8 - 1,
                         v12,
                         v6,
                         a1,
                         (__int64)&v21,
                         (__int64)&v22,
                         (__int64)&v25,
                         (__int64)v23,
                         (__int64)&v20) != *(_DWORD *)(a1 + 32)
      || v21 != v26
      || v25 != v24
      || v22 != v27 )
    {
      break;
    }
    v15 = v23[0];
    if ( (++v4 & 0x1F) == 0 && (unsigned int)MiWorkingSetIsContended(v11) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v11, v12);
      MiLockWorkingSetShared((__int64)v11, v17, v18, v19);
    }
  }
  MiUnlockWorkingSetShared((__int64)v11, v12);
  return v15;
}
