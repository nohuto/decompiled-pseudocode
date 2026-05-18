/*
 * XREFs of sub_18000E678 @ 0x18000E678
 * Callers:
 *     sub_18000E728 @ 0x18000E728 (sub_18000E728.c)
 * Callees:
 *     sub_18000C7F4 @ 0x18000C7F4 (sub_18000C7F4.c)
 *     sub_18000DF30 @ 0x18000DF30 (sub_18000DF30.c)
 */

char __fastcall sub_18000E678(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v5; // eax
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rdx
  volatile signed __int32 *v9; // rax

  v2 = *(_DWORD *)(a1 + 16);
  LOBYTE(v5) = sub_18000C7F4(a1, v2 != 0);
  if ( (_BYTE)v5 )
  {
    if ( !v2 || (v6 = *(_DWORD **)(a1 + 24), v7 = &v6[20 * *(unsigned __int16 *)(a1 + 32)], v6 == v7) )
    {
LABEL_8:
      v9 = *(volatile signed __int32 **)(a1 + 8);
      *(_WORD *)(a1 + 34) = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
      LOBYTE(v5) = sub_18000DF30(
                     *(_QWORD *)(a1 + 24) + 80LL * *(unsigned __int16 *)(a1 + 34),
                     a2,
                     _InterlockedIncrement(v9));
    }
    else
    {
      v8 = v6 + 2;
      while ( 1 )
      {
        if ( *(v8 - 1) > *(_DWORD *)(a1 + 16) )
        {
          v5 = *(_DWORD *)(a2 + 4);
          if ( *v8 == v5 )
            break;
        }
        v8 += 20;
        if ( v8 - 2 == v7 )
          goto LABEL_8;
      }
    }
  }
  return v5;
}
