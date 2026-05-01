/*
 * XREFs of sub_1800235DC @ 0x1800235DC
 * Callers:
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 * Callees:
 *     sub_180025BD4 @ 0x180025BD4 (sub_180025BD4.c)
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 */

__int64 __fastcall sub_1800235DC(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v4; // esi
  __int64 result; // rax
  unsigned __int8 v7; // al
  char v8; // cl
  DWORD v9; // ebp
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v12; // ecx
  _QWORD *v13; // rax

  v2 = *(_DWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a1 + 1192);
  if ( v4 < 1 == v2 < 1 || (result = sub_180025BD4(), (int)result >= 0) )
  {
    v7 = v2 >= 2 && (*(_BYTE *)(a2 + 28) & 2) != 0;
    v8 = v4 >= 2 && (*(_BYTE *)(a1 + 1196) & 2) != 0;
    if ( v7 != v8 )
      sub_18002A490(a1, 0x2000, 1, (unsigned int)&sub_180035400, v7);
    v9 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(a1 + 64);
    CurrentThreadId = GetCurrentThreadId();
    v12 = dwTlsIndex;
    *(_DWORD *)(a1 + 72) = CurrentThreadId;
    *(_DWORD *)(a1 + 1192) = *(_DWORD *)(a2 + 24);
    *(_BYTE *)(a1 + 1196) ^= (*(_BYTE *)(a1 + 1196) ^ *(_BYTE *)(a2 + 28)) & 2;
    if ( v12 != -1 )
    {
      v13 = TlsGetValue(v12);
      if ( (*(_BYTE *)v13 & 2) == 0 )
        __int2c();
      if ( v13[2]-- == 1LL )
        *v13 &= ~2uLL;
    }
    *(_DWORD *)(a1 + 72) = 0;
    RtlReleaseSRWLockExclusive(a1 + 64);
    return 0LL;
  }
  return result;
}
