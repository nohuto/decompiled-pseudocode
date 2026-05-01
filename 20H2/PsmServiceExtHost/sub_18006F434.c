/*
 * XREFs of sub_18006F434 @ 0x18006F434
 * Callers:
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 * Callees:
 *     sub_18006EC84 @ 0x18006EC84 (sub_18006EC84.c)
 *     sub_18006F550 @ 0x18006F550 (sub_18006F550.c)
 */

char __fastcall sub_18006F434(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  char result; // al
  int v5; // esi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi

  if ( *(_QWORD *)(a1 + 64) )
  {
    RtlAcquireSRWLockExclusive(a1 + 72);
    *(_DWORD *)(a1 + 80) = GetCurrentThreadId();
    sub_18006EC84(a1);
    *(_BYTE *)(a1 + 148) |= 4u;
    *(_DWORD *)(a1 + 80) = 0;
    RtlReleaseSRWLockExclusive(a1 + 72);
    TpWaitForWork(*(_QWORD *)(a1 + 64), 0LL);
  }
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v3 )
    v3 ^= v2;
  result = *(_BYTE *)(a1 + 16);
  v5 = result & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v3 )
        {
          v6 = (_QWORD *)v3;
          if ( v5 )
            v3 ^= *(_QWORD *)v3;
          else
            v3 = *(_QWORD *)v3;
          *v6 = 0LL;
        }
        v7 = *(_QWORD *)(v3 + 8);
        if ( !v7 )
          break;
        v8 = v3;
        if ( v5 )
          v3 ^= v7;
        else
          v3 = *(_QWORD *)(v3 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
      }
      v9 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= v3;
      sub_18006F550(v3, 0LL);
      if ( !v9 )
        break;
      v3 = v9;
    }
    result = *(_BYTE *)(v2 + 8);
  }
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( (result & 1) != 0 )
    *(_BYTE *)(v2 + 8) = 1;
  return result;
}
