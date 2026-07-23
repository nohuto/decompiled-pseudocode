/*
 * XREFs of HsaUpdateRemappingTableEntry @ 0x1404E2D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     RtlSetBits @ 0x140343250 (RtlSetBits.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExtEnvCriticalFailure @ 0x1404D39CC (ExtEnvCriticalFailure.c)
 *     HsaGetDeviceAperture @ 0x1404E1C98 (HsaGetDeviceAperture.c)
 *     HsaUpdateInterruptDestination @ 0x1404E2B1C (HsaUpdateInterruptDestination.c)
 */

char __fastcall HsaUpdateRemappingTableEntry(__int64 a1, char a2, unsigned int a3, _DWORD *a4)
{
  char v4; // bl
  __int64 v5; // rdi
  __int64 DeviceAperture; // rax
  __int64 v9; // rcx
  __int128 *v10; // rsi
  _RTL_BITMAP *v11; // rcx
  ULONG_PTR v12; // rdi
  int v13; // edx
  __int64 v15; // rax
  signed __int64 v16; // r9
  __int64 i; // r8
  ULONG_PTR v18; // rcx
  signed __int64 v19; // rcx
  __int128 v20; // rax
  __int128 v21; // rt0
  unsigned __int8 v22; // tt
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = a3;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  if ( a2 )
  {
    DeviceAperture = HsaGetDeviceAperture(a3);
    v5 &= 0x1FFu;
    v10 = (__int128 *)(DeviceAperture + 8);
    if ( !*(_QWORD *)(DeviceAperture + 16) )
      ExtEnvCriticalFailure(v9, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v10 = &HsaSharedRemappingTable;
  }
  v11 = (_RTL_BITMAP *)((char *)v10 + 24);
  if ( a2 )
    RtlSetBits(v11, v5, 1u);
  else
    RtlClearBits(v11, v5, 1u);
  v12 = *((_QWORD *)v10 + 1) + 16 * v5;
  if ( (*(_BYTE *)v12 & 1) == 0 && (a4[3] & 0x10) == 0 )
    return 0;
  v13 = a4[3];
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( (v13 & 0x10) != 0 )
  {
    if ( a4[5] != 1 )
      return 0;
    v15 = (unsigned __int8)(LOBYTE(BugCheckParameter3[1]) ^ a4[12]);
    BugCheckParameter3[0] = (2LL * (v13 & 2)) | 1;
    BugCheckParameter3[1] ^= v15;
    HsaUpdateInterruptDestination((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)(a4 + 6));
  }
  v16 = BugCheckParameter3[0];
  if ( (*(_BYTE *)v12 & BugCheckParameter3[0] & 1) != 0 )
  {
    for ( i = 0LL; i < 2; ++i )
      BugCheckParameter4[i] = BugCheckParameter3[i] ^ *(ULONG_PTR *)((char *)&BugCheckParameter3[i]
                                                                   + v12
                                                                   - (_QWORD)BugCheckParameter3);
    v18 = BugCheckParameter4[1] & 0xFFFFFFFFFFFFFFLL;
    BugCheckParameter4[0] &= 0xFFFFFFFF000000FFuLL;
    BugCheckParameter4[1] &= 0xFFFFFFFFFFFFFFuLL;
    if ( BugCheckParameter4[0] || v18 )
      KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, v12, (ULONG_PTR)BugCheckParameter4);
  }
  v19 = BugCheckParameter3[1];
  if ( *(_QWORD *)v12 != v16 || *(_QWORD *)(v12 + 8) != BugCheckParameter3[1] )
  {
    v20 = *(_OWORD *)v12;
    do
    {
      v21 = v20;
      v22 = _InterlockedCompareExchange128((volatile signed __int64 *)v12, v19, v16, (signed __int64 *)&v21);
      v20 = v21;
    }
    while ( !v22 );
    return 1;
  }
  return v4;
}
