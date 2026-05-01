/*
 * XREFs of sub_1800355F0 @ 0x1800355F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025CF8 @ 0x180025CF8 (sub_180025CF8.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800355F0(__int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // edi
  HSTRING_HEADER *v5; // rax
  signed __int32 v7; // [rsp+40h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+48h] [rbp-50h] BYREF
  __int128 v9; // [rsp+50h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( v7 == -1 && (v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 0, -1), v3 == v7) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0 && InitOnceExecuteOnce(&stru_18005AD68, (PINIT_ONCE_FN)sub_1800230C0, 0LL, 0LL) && qword_18005AD70 )
    {
      v8 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>";
      v9 = xmmword_180050AB0;
      v5 = sub_180025CF8(&hstringHeader, &v8);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, PVOID, _QWORD))(*(_QWORD *)qword_18005AD70
                                                                                           + 48LL))(
        qword_18005AD70,
        0LL,
        2LL,
        &v9,
        a1,
        v5[1].Reserved.Reserved1,
        *(unsigned int *)(a1 + 56));
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
