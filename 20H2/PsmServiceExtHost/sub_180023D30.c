/*
 * XREFs of sub_180023D30 @ 0x180023D30
 * Callers:
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180023A40 @ 0x180023A40 (sub_180023A40.c)
 *     sub_180025F88 @ 0x180025F88 (sub_180025F88.c)
 *     sub_180034CD8 @ 0x180034CD8 (sub_180034CD8.c)
 * Callees:
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 */

__int64 __fastcall sub_180023D30(__int64 a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rdi
  _QWORD *v4; // rax
  bool v5; // zf
  __int64 result; // rax
  DWORD v7; // ebp
  _QWORD *v8; // rsi
  int v9; // eax
  DWORD v10; // ecx
  _QWORD *v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = dwTlsIndex;
  v12 = 0LL;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockExclusive(a1 + 304);
  *(_DWORD *)(a1 + 312) = GetCurrentThreadId();
  *(_DWORD *)(a1 + 340) |= 0x10u;
  if ( (*(_BYTE *)(a1 + 340) & 8) != 0 )
    goto LABEL_27;
  if ( dwTlsIndex != -1 )
  {
    v4 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v4 & 0x40) == 0 )
      __int2c();
    v5 = v4[7]-- == 1LL;
    if ( v5 )
      *v4 &= ~0x40uLL;
  }
  *(_DWORD *)(a1 + 312) = 0;
  RtlReleaseSRWLockExclusive(a1 + 304);
  result = TpAllocWork(&v12, sub_180023FA0, a1, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      v8 = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v8 |= 0x40uLL;
      ++v8[7];
    }
    RtlAcquireSRWLockExclusive(a1 + 304);
    *(_DWORD *)(a1 + 312) = GetCurrentThreadId();
    v9 = *(_DWORD *)(a1 + 340);
    if ( (v9 & 8) == 0 )
    {
      v10 = dwTlsIndex;
      *(_DWORD *)(a1 + 340) = v9 | 8;
      if ( v10 != -1 )
      {
        v11 = TlsGetValue(v10);
        if ( (*(_BYTE *)v11 & 0x40) == 0 )
          __int2c();
        v5 = v11[7]-- == 1LL;
        if ( v5 )
          *v11 &= ~0x40uLL;
      }
      *(_DWORD *)(a1 + 312) = 0;
      RtlReleaseSRWLockExclusive(a1 + 304);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
        __fastfail(0xEu);
      result = TpPostWork(v12);
      goto LABEL_24;
    }
LABEL_27:
    result = sub_1800260A0(a1);
  }
LABEL_24:
  if ( v12 )
    return TpReleaseWork();
  return result;
}
