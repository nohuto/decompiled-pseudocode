/*
 * XREFs of sub_180026D08 @ 0x180026D08
 * Callers:
 *     sub_1800273FC @ 0x1800273FC (sub_1800273FC.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

LSTATUS __fastcall sub_180026D08(unsigned int *a1, HKEY a2)
{
  _DWORD *v4; // rcx
  unsigned int v5; // eax
  int v6; // ebx
  LSTATUS result; // eax
  unsigned int pvData; // [rsp+40h] [rbp-48h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-40h] BYREF
  unsigned int *p_pvData; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+70h] [rbp-18h]
  int v13; // [rsp+74h] [rbp-14h]

  v4 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v4 > 4u )
  {
    v5 = *a1;
    v13 = 0;
    pvData = v5;
    v12 = 4;
    p_pvData = &pvData;
    sub_180001090((__int64)v4, (unsigned __int8 *)dword_1800466E3, 0LL, 0LL, 3u, &v10);
  }
  v6 = 1;
  pcbData = 4;
  a1[80] = 1;
  result = RegGetValueW(a2, 0LL, L"UserDuckingPreference", 0x10u, 0LL, &pvData, &pcbData);
  if ( !result )
  {
    if ( pvData <= 3 )
      v6 = pvData;
    a1[80] = v6;
  }
  return result;
}
