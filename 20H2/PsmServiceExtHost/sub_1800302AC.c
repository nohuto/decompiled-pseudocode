/*
 * XREFs of sub_1800302AC @ 0x1800302AC
 * Callers:
 *     sub_1800301E8 @ 0x1800301E8 (sub_1800301E8.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_1800302AC(__int64 a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  int v8; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-19h] BYREF
  UUID *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  __int64 *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  int *v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]

  v2 = *(_DWORD *)(a2 + 60);
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v5 = *(_QWORD **)(a1 + 64);
  if ( *v5 != a1 + 56 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v5;
  *(_QWORD *)a2 = a1 + 56;
  *v5 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  LODWORD(v6) = RtlReleaseSRWLockExclusive(a1);
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 2) != 0 )
  {
    v6 = qword_1800B3268 & 2;
    if ( v6 == qword_1800B3268 )
    {
      v12 = 16LL;
      v11 = &Uuid;
      v9 = *(_QWORD *)(a1 + 16);
      v14 = 8LL;
      v13 = &v9;
      v8 = v2;
      v15 = &v8;
      v16 = 4LL;
      LODWORD(v6) = sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A30BC, 0LL, 0LL, 5u, &v10);
    }
  }
  return v6;
}
