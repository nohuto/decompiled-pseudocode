/*
 * XREFs of sub_180031F60 @ 0x180031F60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DWORD v4; // edi
  signed __int64 v6; // rax
  signed __int64 v7; // rcx
  bool v8; // zf
  signed __int64 v9; // rtt
  DWORD v10; // esi
  _QWORD *Value; // rdi
  _QWORD *v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  bool v15; // zf
  signed __int64 v16; // rtt
  DWORD v17; // ebx
  unsigned __int64 v19; // rdi
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 v22; // rax
  _OWORD TlsValue[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-28h]

  v4 = dwTlsIndex;
  memset(TlsValue, 0, sizeof(TlsValue));
  v24 = 0LL;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  _m_prefetchw((const void *)(a4 + 24));
  v6 = *(_QWORD *)(a4 + 24);
  v7 = v6 + 1;
  v8 = v6 == 0;
  if ( (unsigned __int64)(v6 + 1) <= 1 )
  {
LABEL_28:
    if ( !v8 )
      __fastfail(0xEu);
  }
  else
  {
    while ( 1 )
    {
      v9 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 24), v7, v6);
      if ( v9 == v6 )
        break;
      v7 = v6 + 1;
      if ( v6 == -1 || v6 == 0 )
      {
        v8 = v7 == 1;
        goto LABEL_28;
      }
    }
    v10 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *Value |= 0x800uLL;
      ++Value[12];
    }
    RtlAcquireSRWLockExclusive(a4 + 40);
    *(_DWORD *)(a4 + 48) = GetCurrentThreadId();
    *(_BYTE *)(a4 + 185) |= 1u;
    if ( (*(_BYTE *)(a4 + 184) & 3) == 0 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a4 + 24)) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*(_QWORD *)(a4 + 96));
      *(_BYTE *)(a4 + 184) |= 1u;
    }
    if ( dwTlsIndex != -1 )
    {
      v12 = TlsGetValue(dwTlsIndex);
      if ( (*(_DWORD *)v12 & 0x800LL) == 0 )
        __int2c();
      v8 = v12[12]-- == 1LL;
      if ( v8 )
        *v12 &= ~0x800uLL;
    }
    *(_DWORD *)(a4 + 48) = 0;
    RtlReleaseSRWLockExclusive(a4 + 40);
    _m_prefetchw((const void *)(a4 + 24));
    v13 = *(_QWORD *)(a4 + 24);
    v14 = v13 - 1;
    v15 = v13 == 1;
    if ( v13 - 1 <= 0 )
    {
LABEL_32:
      if ( !v15 )
        __fastfail(0xEu);
      v19 = *(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_QWORD *)(a4 + 16) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)(a4 + 24)) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(__int64))(v19 + 24))(a4);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v19 + 16);
        v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a4 + 24), 0xFFFFFFFFFFFFFFFFuLL);
        v21 = v20 <= 1;
        v22 = v20 - 1;
        if ( v21 )
        {
          if ( v22 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v19 + 16);
          (*(void (__fastcall **)(__int64))(v19 + 24))(a4);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v19 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v16 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 24), v14, v13);
        if ( v16 == v13 )
          break;
        v14 = v13 - 1;
        v15 = v13 == 1;
        if ( v13 - 1 <= 0 )
          goto LABEL_32;
      }
    }
  }
  v17 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  return 0LL;
}
