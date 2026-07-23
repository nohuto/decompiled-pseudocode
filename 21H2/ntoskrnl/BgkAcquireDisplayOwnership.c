/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x1404FF5B0
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x14038DABC (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v4[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]

  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  if ( byte_140C50BE9 && !byte_140C50BDC )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_140C50BE0;
  if ( qword_140C50BE0 )
  {
    v3 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C50BE0(a1, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_140C50BE9;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_140C50BC0 = 0LL;
      byte_140C50BE9 = v2;
    }
  }
  return result;
}
