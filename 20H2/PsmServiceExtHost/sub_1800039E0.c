/*
 * XREFs of sub_1800039E0 @ 0x1800039E0
 * Callers:
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 * Callees:
 *     sub_180003B10 @ 0x180003B10 (sub_180003B10.c)
 *     sub_180003E70 @ 0x180003E70 (sub_180003E70.c)
 *     sub_180003F74 @ 0x180003F74 (sub_180003F74.c)
 */

__int64 __fastcall sub_1800039E0(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *Value; // rax
  unsigned int v5; // eax
  DWORD v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // r14
  _QWORD *v9; // rdi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  sub_180003B10(a1, &v11);
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 80);
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)Value & 2) == 0 )
        __int2c();
      if ( Value[2]-- == 1LL )
        *Value &= ~2uLL;
    }
    *(_DWORD *)(v2 + 8) = 0;
    RtlReleaseSRWLockExclusive(v2);
    v5 = sub_180003F74(a1, &v11);
    v6 = dwTlsIndex;
    v7 = v5;
    v8 = *(_QWORD *)(a1 + 80);
    if ( dwTlsIndex != -1 )
    {
      v9 = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v9 |= 2uLL;
      ++v9[2];
    }
    RtlAcquireSRWLockExclusive(v8);
    *(_DWORD *)(v8 + 8) = GetCurrentThreadId();
    sub_180003B10(a1, &v12);
    if ( v11 == v12 )
      break;
    v11 = v12;
  }
  if ( v7 )
    return v7;
  else
    return sub_180003E70(a1);
}
