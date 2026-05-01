/*
 * XREFs of sub_1800117D0 @ 0x1800117D0
 * Callers:
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 * Callees:
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 */

__int64 __fastcall sub_1800117D0(__int64 a1)
{
  DWORD v2; // esi
  unsigned __int64 v3; // r14
  __int64 v4; // rbp
  int v5; // r15d
  _QWORD *Value; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  BOOL v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  DWORD v16; // r15d
  _QWORD *v17; // rbp
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 **v20; // rdx
  _QWORD *v21; // rax
  bool v22; // zf
  int v23; // esi
  __int64 v24; // rdi
  _QWORD *v25; // rax

  v2 = dwTlsIndex;
  v3 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_DWORD *)(a1 + 112);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( (v5 & 0x80000) != 0 && *(_QWORD *)(v4 + 600) != v4 + 600 )
  {
    v23 = -1071513591;
    goto LABEL_29;
  }
  v7 = (_QWORD *)(v4 + 600);
  v8 = *(_QWORD *)(v4 + 600);
  v9 = 0LL;
  v10 = v8 != v4 + 600;
  v11 = v8 - 96;
  if ( v10 )
    v9 = v11;
  if ( !v9 || (*(_DWORD *)(v9 + 112) & 0x80000) == 0 )
  {
    *(_BYTE *)(a1 + 548) = 1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
      __fastfail(0xEu);
    v12 = *(_QWORD **)(v4 + 608);
    v13 = (_QWORD *)(a1 + 96);
    if ( (_QWORD *)*v12 == v7 )
    {
      *(_QWORD *)(a1 + 104) = v12;
      *v13 = v7;
      *v12 = v13;
      *(_QWORD *)(v4 + 608) = v13;
      v14 = *(_QWORD *)(v4 + 648);
      if ( ((v14 & 0x2000000000000LL) == 0 || (_QWORD *)*v7 != v7)
        && (v14 & 0x4000000000000LL) != 0
        && (unsigned int)TpSetTimerEx(*(_QWORD *)(v4 + 824), 0LL, 0LL, 0LL) )
      {
        *(_QWORD *)(v4 + 648) &= ~0x4000000000000uLL;
      }
      v15 = *(_QWORD *)(a1 + 64);
      if ( !v15 )
        goto LABEL_28;
      v16 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        v17 = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
          __int2c();
        *v17 |= 0x200uLL;
        ++v17[10];
      }
      RtlAcquireSRWLockExclusive(v15 + 24);
      *(_DWORD *)(v15 + 32) = GetCurrentThreadId();
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
        __fastfail(0xEu);
      v18 = (__int64 *)(a1 + 48);
      v19 = *(_QWORD *)(a1 + 64) + 40LL;
      v20 = *(__int64 ***)(*(_QWORD *)(a1 + 64) + 48LL);
      if ( *v20 == (__int64 *)v19 )
      {
        *v18 = v19;
        *(_QWORD *)(a1 + 56) = v20;
        *v20 = v18;
        *(_QWORD *)(v19 + 8) = v18;
        if ( dwTlsIndex != -1 )
        {
          v21 = TlsGetValue(dwTlsIndex);
          if ( (*(_DWORD *)v21 & 0x200LL) == 0 )
            __int2c();
          v22 = v21[10]-- == 1LL;
          if ( v22 )
            *v21 &= ~0x200uLL;
        }
        *(_DWORD *)(v15 + 32) = 0;
        RtlReleaseSRWLockExclusive(v15 + 24);
LABEL_28:
        v23 = 0;
        goto LABEL_29;
      }
    }
    __fastfail(3u);
  }
  v23 = -1071513591;
LABEL_29:
  v24 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v25 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v25 & 2) == 0 )
      __int2c();
    v22 = v25[2]-- == 1LL;
    if ( v22 )
      *v25 &= ~2uLL;
  }
  *(_DWORD *)(v24 + 8) = 0;
  RtlReleaseSRWLockExclusive(v24);
  if ( v23 >= 0 )
    sub_180032190(v3, a1 + 40, (unsigned int)sub_180032B80, a1);
  return (unsigned int)v23;
}
