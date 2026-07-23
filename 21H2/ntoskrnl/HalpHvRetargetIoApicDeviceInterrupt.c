/*
 * XREFs of HalpHvRetargetIoApicDeviceInterrupt @ 0x1404C2D58
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BBB00 (HalpInterruptSetRemappedDestinationHv.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvRetargetIoApicDeviceInterrupt(char a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int128 *v5; // rdi
  int v7; // eax
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // [rsp+30h] [rbp-40h]
  _QWORD v12[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  __int128 v14; // [rsp+58h] [rbp-18h] BYREF

  v5 = &v13;
  v12[0] = 2LL;
  v11 = 0x8000000000000000uLL;
  v12[1] = *(_QWORD *)(a3 + 40);
  v7 = *(_DWORD *)(a3 + 48);
  *a5 = 0;
  LOBYTE(v11) = a1;
  if ( *(_DWORD *)(a3 + 8) )
    v5 = 0LL;
  v14 = 0LL;
  LODWORD(v14) = v7;
  v13 = 0LL;
  result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD *, __int128 *))qword_140C4A1F8)(v11, v12, &v14);
  if ( (int)result >= 0 && v5 )
  {
    v9 = DWORD2(v13);
    v10 = HIDWORD(v13);
    if ( *((_QWORD *)&v13 + 1) != *(_QWORD *)(a3 + 32) )
    {
      *a5 = 1;
      *(_DWORD *)(a3 + 32) = v9;
      *(_DWORD *)(a3 + 36) = v10;
    }
  }
  return result;
}
