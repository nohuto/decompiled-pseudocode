/*
 * XREFs of sub_18010333C @ 0x18010333C
 * Callers:
 *     sub_1801029F0 @ 0x1801029F0 (sub_1801029F0.c)
 * Callees:
 *     sub_18000BE10 @ 0x18000BE10 (sub_18000BE10.c)
 *     sub_18007783C @ 0x18007783C (sub_18007783C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x18012535C (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010333C(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  struct std::locale::_Locimp *v5; // rax
  __int64 v6; // rbx
  _QWORD pExceptionObject[3]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v10[8]; // [rsp+48h] [rbp-20h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v10, 0);
  v9 = qword_1802217D8;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<char>::id);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 >= *(_QWORD *)(v3 + 24) )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8 * v2);
  if ( !v4 )
  {
    if ( *(_BYTE *)(v3 + 36) )
    {
      v5 = std::locale::_Getgloballocale();
      if ( v2 >= *((_QWORD *)v5 + 3) )
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 8 * v2);
    }
    if ( !v4 )
    {
      v4 = v9;
      if ( !v9 )
      {
        if ( std::ctype<char>::_Getcat(&v9, a1) == -1 )
        {
          sub_18007783C(pExceptionObject);
          throw (std::bad_cast *)pExceptionObject;
        }
        v6 = v9;
        sub_18000BE10(v9);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v4 = v9;
        qword_1802217D8 = v9;
      }
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)v10);
  return v4;
}
