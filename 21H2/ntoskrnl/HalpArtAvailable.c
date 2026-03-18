/*
 * XREFs of HalpArtAvailable @ 0x1403BE95C
 * Callers:
 *     HalpArtDiscover @ 0x1403BE8FC (HalpArtDiscover.c)
 *     HalpArtInitialize @ 0x140522FB0 (HalpArtInitialize.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x1403B37F0 (HalpIsHvPresent.c)
 *     HalSocRequestApi @ 0x1403B38C8 (HalSocRequestApi.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpArtAvailable(_DWORD *a1, unsigned int *a2)
{
  int v5; // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v7; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-24h] BYREF
  int v9; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-1Ch] BYREF
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF
  char v12; // [rsp+80h] [rbp+20h] BYREF
  int v13; // [rsp+88h] [rbp+28h] BYREF

  v9 = 0;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0LL;
  if ( (int)HalSocRequestApi((__int64)a1, 0LL, 2, 16LL, &v11) < 0 )
    return 0;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v11)(0LL, 0LL, 0LL, &v12) )
    return 0;
  (*((void (__fastcall **)(_QWORD, unsigned int *, int *, int *, int *))&v11 + 1))(0LL, &v7, &v13, &v13, &v13);
  (*((void (__fastcall **)(__int64, unsigned int *, int *, int *, int *))&v11 + 1))(0x80000000LL, &v8, &v13, &v13, &v13);
  if ( v12 != 2 || HalpIsHvPresent() && (!HalpHvCpuManager || !HalpIsMicrosoftCompatibleHvLoaded()) )
    return 0;
  if ( v7 < 0x15 )
    return 0;
  if ( v8 < 0x80000007 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v11 + 1))(21LL, &v5, &v6, &v13, &v13);
  if ( !v6 )
    return 0;
  if ( !v5 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, int *, int *, int *))&v11 + 1))(2147483655LL, &v13, &v13, &v13, &v9);
  if ( (v9 & 0x100) == 0 )
    return 0;
  (*((void (__fastcall **)(__int64, int *, unsigned int *, int *, int *))&v11 + 1))(1LL, &v13, &v10, &v13, &v13);
  *a2 = HIBYTE(v10);
  if ( a1 )
  {
    *a1 = v5;
    a1[1] = v6;
  }
  return 1;
}
