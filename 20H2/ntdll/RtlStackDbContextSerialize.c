/*
 * XREFs of RtlStackDbContextSerialize @ 0x18011883C
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1801097D4 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(_DWORD *, __int64, __int64),
        __int64 a3)
{
  int v6; // ebx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _BYTE *i; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _BYTE *k; // rcx
  _QWORD **j; // rdx
  _QWORD **m; // rdx
  unsigned int v20; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-38h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-30h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-28h]
  _DWORD v24[4]; // [rsp+40h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  SRWLock = (PRTL_SRWLOCK)(a1 + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v24[0] = *(_DWORD *)a1;
  v24[1] = *(_DWORD *)(a1 + 16);
  v24[2] = 524289;
  v6 = a2(v24, 12LL, a3);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = v7;
    v9 = v7;
    if ( v7 )
    {
      v10 = (_QWORD *)*v7;
      if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v10 = (_QWORD *)*v7;
      if ( ((unsigned __int8)v10 & 1) == 0 )
        goto LABEL_27;
      v9 = *(_QWORD **)(a1 + 8);
    }
    for ( i = v7 + 1; ; i += 8 )
    {
      if ( i >= (_BYTE *)&v9[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5] )
      {
LABEL_11:
        v10 = 0LL;
        goto LABEL_12;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v8 = *(_QWORD **)i;
    v7 = i;
LABEL_34:
    v10 = v8;
LABEL_12:
    while ( v10 )
    {
      v21 = v10;
      v20 = *((_DWORD *)v10 + 4);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v20, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2(&v21, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2((_DWORD *)v21 + 6, 8LL * *((unsigned __int8 *)v21 + 19), a3);
      if ( v6 < 0 )
        goto LABEL_41;
      if ( !v8 )
        goto LABEL_28;
      v10 = (_QWORD *)*v8;
      if ( (*v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v10 = (_QWORD *)*v8;
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
LABEL_28:
        for ( j = (_QWORD **)(v7 + 1);
              (unsigned __int64)j < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              ++j )
        {
          if ( (*(_BYTE *)j & 1) == 0 )
          {
            v8 = *j;
            v7 = j;
            goto LABEL_34;
          }
        }
        goto LABEL_11;
      }
LABEL_27:
      v8 = v10;
    }
    v12 = *(_QWORD **)(a1 + 24);
    v13 = v12;
    v14 = v12;
    if ( v12 )
    {
      v15 = (_QWORD *)*v12;
      if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v15 = (_QWORD *)*v12;
      if ( ((unsigned __int8)v15 & 1) == 0 )
        goto LABEL_50;
      v14 = *(_QWORD **)(a1 + 24);
    }
    for ( k = v12 + 1; ; k += 8 )
    {
      if ( k >= (_BYTE *)&v14[(unsigned __int64)*(unsigned int *)(a1 + 20) >> 5] )
      {
LABEL_38:
        v15 = 0LL;
        goto LABEL_39;
      }
      if ( (*k & 1) == 0 )
        break;
    }
    v13 = *(_QWORD **)k;
    v12 = k;
LABEL_57:
    v15 = v13;
LABEL_39:
    while ( v15 )
    {
      v22 = v15;
      v20 = *((_DWORD *)v15 + 4);
      v6 = ((__int64 (__fastcall *)(unsigned int *, __int64, __int64, _QWORD))a2)(&v20, 4LL, a3, 0LL);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2(&v22, 8LL, a3);
      if ( v6 < 0 )
        goto LABEL_41;
      v6 = a2((_DWORD *)v22 + 6, (HIBYTE(v20) + 7) & 0xFFFFFFF8, a3);
      if ( v6 < 0 )
        goto LABEL_41;
      if ( !v13 )
        goto LABEL_51;
      v15 = (_QWORD *)*v13;
      if ( (*v13 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v15 = (_QWORD *)*v13;
      if ( ((unsigned __int8)v15 & 1) != 0 )
      {
LABEL_51:
        for ( m = (_QWORD **)(v12 + 1);
              (unsigned __int64)m < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              ++m )
        {
          if ( (*(_BYTE *)m & 1) == 0 )
          {
            v13 = *m;
            v12 = m;
            goto LABEL_57;
          }
        }
        goto LABEL_38;
      }
LABEL_50:
      v13 = v15;
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_41:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v6;
}
