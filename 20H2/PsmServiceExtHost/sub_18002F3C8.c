/*
 * XREFs of sub_18002F3C8 @ 0x18002F3C8
 * Callers:
 *     sub_18002ED90 @ 0x18002ED90 (sub_18002ED90.c)
 * Callees:
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18002F12C @ 0x18002F12C (sub_18002F12C.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_18002FDF4 @ 0x18002FDF4 (sub_18002FDF4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_18002F3C8(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  int v6; // ebx
  int v7; // r14d
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int result; // eax
  __int64 v15; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+38h] [rbp-60h] BYREF
  UUID *v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+60h] [rbp-38h]
  int v19; // [rsp+64h] [rbp-34h]

  v2 = 0;
  v3 = -1LL;
  v6 = 3;
  if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 1) != 0 && (qword_1800B3268 & 1) == qword_1800B3268 )
  {
    v19 = 0;
    v17 = &Uuid;
    v18 = 16;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2C24, 0LL, 0LL, 3u, &v16);
  }
  v7 = 1;
  RtlAcquireSRWLockShared(a2);
  v8 = sub_18002F588(a2, a1);
  if ( v8 )
  {
    RtlReleaseSRWLockShared(a2);
    v7 = 0;
    v2 = 1;
    RtlAcquireSRWLockExclusive(v8 + 72);
    *(_DWORD *)(v8 + 80) = GetCurrentThreadId();
    v9 = *(_DWORD *)(v8 + 136);
    if ( v9 )
    {
      RtlQueryUnbiasedInterruptTime(&v15);
      v10 = v15;
      v11 = v15 - *(_QWORD *)(v8 + 168);
      if ( *(_DWORD *)(v8 + 92) == *(_DWORD *)(v8 + 88) )
        *(_QWORD *)(v8 + 176) += v11;
      else
        *(_QWORD *)(v8 + 184) += v11;
      v9 = *(_DWORD *)(v8 + 136);
      *(_QWORD *)(v8 + 168) = v10;
    }
    v3 = *(_QWORD *)(v8 + 192);
    v12 = v9 - 1;
    v6 = *(_DWORD *)(v8 + 160);
    *(_DWORD *)(v8 + 136) = v12;
    if ( !v12 )
    {
      *(_QWORD *)(v8 + 192) = -1LL;
      *(_DWORD *)(v8 + 160) = 3;
    }
    v13 = 0;
  }
  else
  {
    v13 = -1073741811;
  }
  result = sub_18002F12C(a2, a1, v8, v6, v3, v13);
  if ( v2 )
  {
    *(_DWORD *)(v8 + 80) = 0;
    result = RtlReleaseSRWLockExclusive(v8 + 72);
  }
  if ( v8 )
    result = sub_18002FDF4(v8);
  if ( v7 )
    return RtlReleaseSRWLockShared(a2);
  return result;
}
