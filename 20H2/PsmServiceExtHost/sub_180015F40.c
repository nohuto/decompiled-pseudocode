/*
 * XREFs of sub_180015F40 @ 0x180015F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_180015F40(__int64 a1, __int64 a2)
{
  DWORD v2; // ebx
  DWORD v4; // ebx
  _QWORD *Value; // rdi
  _QWORD *v6; // rax
  DWORD v8; // ebx
  _OWORD TlsValue[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-28h]

  v2 = dwTlsIndex;
  memset(TlsValue, 0, sizeof(TlsValue));
  v11 = 0LL;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v2, TlsValue);
    v4 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( *(_QWORD *)TlsGetValue(v4) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  if ( *(_DWORD *)(a2 + 16) == 1 )
    *(_DWORD *)(*(_QWORD *)(a2 + 24) + 160LL) &= ~1u;
  sub_180016100(a2);
  dword_1800B4218 = 0;
  LODWORD(v6) = RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v6 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v6 & 1) == 0 )
      __int2c();
    if ( v6[1]-- == 1LL )
      *v6 &= ~1uLL;
  }
  v8 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    LODWORD(v6) = TlsSetValue(v8, 0LL);
  }
  return (int)v6;
}
