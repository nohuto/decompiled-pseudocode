/*
 * XREFs of MiAllowProtectionChange @ 0x14027E54C
 * Callers:
 *     MiResetVirtualMemory @ 0x140243BEC (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiArbitraryCodeBlocked @ 0x1406907CC (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  int v8; // r13d
  int v10; // edi
  __int64 v11; // rdx
  int v12; // r8d
  char v13; // r12
  int v14; // eax
  int v15; // ecx
  _WORD v17[2]; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+54h] [rbp-1Ch] BYREF
  int v19; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-10h] BYREF

  v6 = 0;
  v21 = 0LL;
  v8 = a3;
  v20 = 0;
  v18 = 0;
  v19 = 0;
  v17[0] = 0;
  if ( (a4 & 2) != 0 && (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
    return 3221225541LL;
  v10 = 0;
  v13 = MiLockWorkingSetShared(a1 + 1664);
  v14 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      LOBYTE(v12) = v13;
      MiQueryAddressState(
        v14,
        a6,
        v12,
        v8,
        0LL,
        (__int64)&v18,
        (__int64)&v20,
        (__int64)v17,
        (__int64)&v21,
        (__int64)&v19);
      v15 = v18;
      if ( v18 == -1 )
        v15 = 0;
      v18 = v15;
      if ( (v15 & 2) == 0 && (a4 & 2) != 0 || (v15 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v14 = v21;
      if ( v21 > a6 )
        goto LABEL_11;
    }
    v10 = 1;
  }
LABEL_11:
  LOBYTE(v11) = v13;
  MiUnlockWorkingSetShared(a1 + 1664, v11);
  if ( v10 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v6;
}
