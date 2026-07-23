/*
 * XREFs of HalpHvMapDeviceMsiRange @ 0x1409A8178
 * Callers:
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpHvBuildDeviceId @ 0x1409A7FF8 (HalpHvBuildDeviceId.c)
 */

__int64 __fastcall HalpHvMapDeviceMsiRange(__int64 a1, __int64 a2, int *a3, char a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+64h] [rbp-Ch]

  v6 = 0;
  v13 = 0LL;
  v14 = 0LL;
  HalpHvBuildDeviceId(a1, a3, a4, (__int64)&v13);
  v7 = v13;
  v18 = *(_DWORD *)(a5 + 4);
  v17 = 0;
  v19 = 0LL;
  v20 = 0;
  v15 = 0LL;
  v16 = a6;
  v8 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int128 *))qword_140C4A1E8)(v13, &v15, a5 + 24, &v14);
  if ( v8 >= 0 && a6 )
  {
    v9 = DWORD2(v14);
    v10 = a5 + 48;
    do
    {
      *(_QWORD *)(v10 - 4) = 0LL;
      *(_DWORD *)(v10 + 4) = 0;
      v11 = WORD6(v14) + v6++;
      *(_WORD *)(v10 + 4) = v11;
      *(_DWORD *)v10 = v9;
      *(_QWORD *)(v10 + 16) = v7;
      v10 += 88LL;
    }
    while ( v6 < a6 );
  }
  return (unsigned int)v8;
}
