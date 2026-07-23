/*
 * XREFs of HalpHvMapDeviceInterrupt @ 0x1409A8098
 * Callers:
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CDCDC (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvMapDeviceInterrupt(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // [rsp+30h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  __int128 v14; // [rsp+58h] [rbp-18h]

  v11 = 0x8000000000000000uLL;
  LOBYTE(v11) = a1;
  v5 = *(_DWORD *)(a3 + 20);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        LODWORD(v13) = 2;
    }
    else
    {
      LODWORD(v13) = 4;
    }
  }
  else
  {
    LODWORD(v14) = *(_DWORD *)(a3 + 48);
  }
  DWORD2(v13) = 1;
  DWORD1(v13) = *(_DWORD *)(a3 + 8) == 0;
  result = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, __int64, __int128 *))qword_140C4A1E8)(
             v11,
             &v13,
             a4,
             &v12);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a3 + 12) &= ~0x10u;
  }
  else
  {
    v9 = *((_QWORD *)&v12 + 1);
    v10 = HIDWORD(v12);
    *(_DWORD *)(a3 + 32) = DWORD2(v12);
    *(_QWORD *)(a3 + 40) = v9;
    *(_DWORD *)(a3 + 24) = 8;
    *(_DWORD *)(a3 + 36) = v10;
  }
  return result;
}
