/*
 * XREFs of sub_18001E510 @ 0x18001E510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18001E7B8 @ 0x18001E7B8 (sub_18001E7B8.c)
 *     sub_18001F090 @ 0x18001F090 (sub_18001F090.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E510(__int64 a1, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _UNKNOWN **v5; // rcx
  int v6; // ebp
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  _DWORD *v11; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = (_UNKNOWN **)off_18004F000;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0x28u, &stru_1800445C8);
    v5 = (_UNKNOWN **)off_18004F000;
  }
  v6 = a2[1];
  if ( v5 != &off_18004F000 && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
  {
    sub_1800050FC((TRACEHANDLE)v5[2], 0x29u, &stru_1800445C8, v6);
    v5 = (_UNKNOWN **)off_18004F000;
  }
  v7 = *(_QWORD **)(a1 + 72);
  if ( v7 )
  {
    do
    {
      v8 = v7[2];
      v7 = (_QWORD *)*v7;
      if ( *(_DWORD *)(v8 + 212) == v6 && !*(_DWORD *)(v8 + 600) )
        sub_18001F090(a1, v8);
    }
    while ( v7 );
    v5 = (_UNKNOWN **)off_18004F000;
  }
  v9 = *a2;
  if ( v5 != &off_18004F000 && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    sub_1800050FC((TRACEHANDLE)v5[2], 0x2Au, &stru_1800445C8, v9);
  v10 = *(_QWORD **)(a1 + 72);
  while ( v10 )
  {
    v11 = (_DWORD *)v10[2];
    v10 = (_QWORD *)*v10;
    if ( v11[53] == v9 && !v11[149] )
    {
      v11[141] = 0;
      v11[142] = 0;
      v11[143] = 0;
      v11[144] = 0;
      v11[145] = 0;
      v11[146] = 0;
      v11[147] = 1;
    }
  }
  sub_18001E7B8(a1, v9, 0LL);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
