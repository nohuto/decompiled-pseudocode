/*
 * XREFs of sub_18006E928 @ 0x18006E928
 * Callers:
 *     sub_18006E504 @ 0x18006E504 (sub_18006E504.c)
 * Callees:
 *     sub_18006DD3C @ 0x18006DD3C (sub_18006DD3C.c)
 *     sub_18006EA3C @ 0x18006EA3C (sub_18006EA3C.c)
 */

__int64 __fastcall sub_18006E928(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 108);
  v6 = v3 + 8;
  v7 = *(_QWORD *)(v3 + 8);
  if ( (*(_BYTE *)(v3 + 16) & 1) != 0 && v7 )
    v7 ^= v6;
  LOBYTE(a3) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v5 < *(_DWORD *)(v7 + 100) )
      {
        v8 = *(_QWORD *)v7;
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v7;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_10;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_10:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx(v6, v7, a3, a1 + 8);
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 )
    sub_18006DD3C(a1);
  if ( (unsigned __int8)sub_18006EA3C(a1, v9) )
    ++*(_DWORD *)(v3 + 136);
  *(_BYTE *)(a1 + 170) |= 1u;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  TpSetWait(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 40), 0LL);
  *(_BYTE *)(a1 + 170) |= 2u;
  return sub_18006EC84(v3);
}
