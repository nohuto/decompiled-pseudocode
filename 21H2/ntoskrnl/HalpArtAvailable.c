/*
 * XREFs of HalpArtAvailable @ 0x1403AD1CC
 * Callers:
 *     HalpArtDiscover @ 0x1403AD16C (HalpArtDiscover.c)
 *     HalpArtInitialize @ 0x1404D5EC0 (HalpArtInitialize.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x1403A2128 (HalpIsHvPresent.c)
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall HalpArtAvailable(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v8; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-24h] BYREF
  int v10; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-1Ch] BYREF
  __int128 v12; // [rsp+48h] [rbp-18h] BYREF
  char v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+88h] [rbp+28h] BYREF

  v10 = 0;
  v6 = 0;
  v8 = 0;
  v9 = 0;
  v7 = 0;
  v11 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0LL;
  if ( (int)HalSocRequestApi((__int64)a1, 0LL, 2, 16LL, &v12) < 0 )
    return 0;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v12)(0LL, 0LL, 0LL, &v13) )
    return 0;
  (*((void (__fastcall **)(_QWORD, unsigned int *, int *, int *, int *))&v12 + 1))(0LL, &v8, &v14, &v14, &v14);
  (*((void (__fastcall **)(__int64, unsigned int *, int *, int *, int *))&v12 + 1))(0x80000000LL, &v9, &v14, &v14, &v14);
  if ( v13 != 2 || HalpIsHvPresent() && (!HalpHvCpuManager || !HalpIsMicrosoftCompatibleHvLoaded(v4)) )
    return 0;
  if ( v8 < 0x15 )
    return 0;
  if ( v9 < 0x80000007 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v12 + 1))(21LL, &v6, &v7, &v14, &v14);
  if ( !v7 )
    return 0;
  if ( !v6 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v12 + 1))(2147483655LL, &v14, &v14, &v14, &v10);
  if ( (v10 & 0x100) == 0 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, unsigned int *, int *, int *))&v12 + 1))(1LL, &v14, &v11, &v14, &v14);
  *a2 = HIBYTE(v11);
  if ( a1 )
  {
    *a1 = v6;
    a1[1] = v7;
  }
  return 1;
}
