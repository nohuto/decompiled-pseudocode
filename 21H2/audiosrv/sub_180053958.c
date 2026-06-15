/*
 * XREFs of sub_180053958 @ 0x180053958
 * Callers:
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180053958(_QWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)(a1[1] - 16LL);
  a1[6] = 0LL;
  a1[5] = a2;
  v7 = v3;
  v4 = ((__int64 (__fastcall *)(__int128 *, void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID), _QWORD *, _QWORD *))EtwEventRegister)(
         &v7,
         EnableCallback,
         a1,
         a1 + 4);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(a1[4], 2LL, a1[1], *(unsigned __int16 *)a1[1]);
  }
  return v5;
}
