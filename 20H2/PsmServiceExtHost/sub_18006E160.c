/*
 * XREFs of sub_18006E160 @ 0x18006E160
 * Callers:
 *     sub_18006ECD0 @ 0x18006ECD0 (sub_18006ECD0.c)
 *     sub_18006F550 @ 0x18006F550 (sub_18006F550.c)
 *     sub_1800701C0 @ 0x1800701C0 (sub_1800701C0.c)
 * Callees:
 *     sub_18006E0A8 @ 0x18006E0A8 (sub_18006E0A8.c)
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006EA58 @ 0x18006EA58 (sub_18006EA58.c)
 */

char __fastcall sub_18006E160(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  char v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 *v11; // rcx

  if ( a2 )
  {
    a2[1] = a2;
    *a2 = a2;
  }
  v3 = a1 + 72;
  v4 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( !v4 )
      return v4;
    v4 ^= v3;
  }
  if ( v4 )
  {
    LOBYTE(v4) = sub_18006EA58();
    v5 = v4;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v3 + 8);
      v8 = *(_QWORD *)v3;
      if ( (v7 & 1) != 0 )
      {
        if ( !v8 )
          return v4;
        v8 ^= v3;
      }
      if ( !v8 )
        break;
      if ( (*(_QWORD *)(v3 + 8) & 1LL) != 0 )
      {
        if ( v7 == 1 )
          v9 = 0LL;
        else
          v9 = v7 ^ (v3 | 1);
      }
      else
      {
        v9 = *(_QWORD *)(v3 + 8);
      }
      if ( v5 )
      {
        v6 = *(_QWORD *)(v9 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v6) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v9 -= 24LL;
      }
      if ( *(_QWORD *)(v9 + 16) != -1LL )
      {
        v10 = *(_QWORD *)(v9 + 56);
        RtlRbRemoveNode(*(_QWORD *)(v9 + 48) + 72LL, v9);
        *(_QWORD *)(v9 + 16) = -1LL;
        RtlRbRemoveNode(v10 + 72, v9 + 24);
        *(_QWORD *)(v9 + 40) = -1LL;
      }
      sub_18006E348(*(PVOID *)(v9 + 48));
      sub_18006E348(*(PVOID *)(v9 + 56));
      LOBYTE(v4) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v9);
      if ( v5 )
      {
        if ( sub_18006E0A8(v6) )
        {
          v11 = (unsigned __int64 *)a2[1];
          v4 = v6 + 56;
          if ( (_QWORD *)*v11 != a2 )
            __fastfail(3u);
          *(_QWORD *)v4 = a2;
          *(_QWORD *)(v6 + 64) = v11;
          *v11 = v4;
          a2[1] = v4;
        }
        else
        {
          LOBYTE(v4) = sub_18006E348((PVOID)v6);
        }
      }
    }
  }
  return v4;
}
