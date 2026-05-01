/*
 * XREFs of sub_180044770 @ 0x180044770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 *     sub_18007CF6C @ 0x18007CF6C (sub_18007CF6C.c)
 */

void __fastcall sub_180044770(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  _QWORD *i; // rax
  _QWORD *v8; // rbx
  DWORD v9; // ebx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  if ( a2 == 2 )
  {
    sub_18000B7F8(TlsValue);
    for ( i = sub_18003CF94(a7 + 128, 0, 0LL); ; i = (_QWORD *)sub_18007BE20(v8) )
    {
      v8 = i;
      if ( !i )
        break;
      sub_18007CF6C(i);
    }
    v9 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
}
