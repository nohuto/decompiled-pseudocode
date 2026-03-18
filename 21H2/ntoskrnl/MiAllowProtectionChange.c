/*
 * XREFs of MiAllowProtectionChange @ 0x1402EDC48
 * Callers:
 *     MiResetVirtualMemory @ 0x14024DB60 (MiResetVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiArbitraryCodeBlocked @ 0x14079EC14 (MiArbitraryCodeBlocked.c)
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
  int v11; // r8d
  unsigned __int8 v12; // r12
  int v13; // eax
  int v14; // ecx
  _WORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch] BYREF
  int v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-10h] BYREF

  v6 = 0;
  v20 = 0LL;
  v8 = a3;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  v16[0] = 0;
  if ( (a4 & 2) != 0 && (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
    return 3221225541LL;
  v10 = 0;
  v12 = MiLockWorkingSetShared(a1 + 1664);
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
      if ( (v14 & 2) == 0 && (a4 & 2) != 0 || (v14 & 2) != 0 && (a4 & 4) != 0 )
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
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v6;
}
