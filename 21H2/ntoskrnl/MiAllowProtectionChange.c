/*
 * XREFs of MiAllowProtectionChange @ 0x14025F698
 * Callers:
 *     MiResetVirtualMemory @ 0x1402C538C (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiArbitraryCodeBlocked @ 0x140629364 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  char v7; // si
  int v8; // r13d
  int v10; // edi
  int v11; // r8d
  unsigned __int8 v12; // r12
  int v13; // eax
  int v14; // ecx
  _WORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch] BYREF
  int v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+38h]

  v21 = a2;
  v6 = 0;
  v7 = (char)a4;
  v20 = 0LL;
  v8 = a3;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  v16[0] = 0;
  if ( ((unsigned __int8)a4 & 2) != 0 )
  {
    a2 = *(unsigned int *)(a3 + 48);
    if ( (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
      return 3221225541LL;
  }
  v10 = 0;
  v12 = MiLockWorkingSetShared(a1 + 1664, a2, a3, a4);
  v13 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      LOBYTE(v11) = v12;
      MiQueryAddressState(
        v13,
        a6,
        v11,
        v8,
        0LL,
        (__int64)&v17,
        (__int64)&v19,
        (__int64)v16,
        (__int64)&v20,
        (__int64)&v18);
      v14 = v17;
      if ( v17 == -1 )
        v14 = 0;
      v17 = v14;
      if ( (v14 & 2) == 0 && (v7 & 2) != 0 || (v14 & 2) != 0 && (v7 & 4) != 0 )
        break;
      v13 = v20;
      if ( v20 > a6 )
        goto LABEL_11;
    }
    v10 = 1;
  }
LABEL_11:
  MiUnlockWorkingSetShared(a1 + 1664, v12);
  if ( v10 )
    return (unsigned int)MiArbitraryCodeBlocked(v21);
  return v6;
}
