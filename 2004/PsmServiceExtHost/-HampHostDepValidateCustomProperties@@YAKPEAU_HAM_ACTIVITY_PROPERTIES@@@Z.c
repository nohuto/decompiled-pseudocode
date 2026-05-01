/*
 * XREFs of ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180081948
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800287B0 (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180034690 (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800464F6 (memcmp_0.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

_BOOL8 __fastcall HampHostDepValidateCustomProperties(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  _BOOL8 result; // rax
  _BYTE Buf1[40]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v4; // [rsp+48h] [rbp-1h]
  __int64 v5; // [rsp+50h] [rbp+7h]
  __int64 v6; // [rsp+58h] [rbp+Fh]
  __int64 v7; // [rsp+60h] [rbp+17h]
  __int128 v8; // [rsp+68h] [rbp+1Fh]
  __int64 v9; // [rsp+78h] [rbp+2Fh]

  result = 0;
  if ( (unsigned int)HampUtilCheckAndSanitizeActivityProperties((const wchar_t *)a1) )
  {
    if ( (*(_DWORD *)a1 & 0xFF7FD9BF) == 0
      && !*((_DWORD *)a1 + 1)
      && !*((_DWORD *)a1 + 2)
      && !*((_WORD *)a1 + 70)
      && *((_DWORD *)a1 + 67) == 5
      && !*((_DWORD *)a1 + 68) )
    {
      memset_0(Buf1, 0, 0x68uLL);
      v9 = 33LL;
      v4 = 128LL;
      v7 = -1LL;
      v8 = 0xFFFFFFFFFFFFFFFFuLL;
      v6 = -1LL;
      v5 = -1LL;
      if ( !memcmp_0(Buf1, (char *)a1 + 280, 0x68uLL) )
        return 1;
    }
  }
  return result;
}
