/*
 * XREFs of sub_180027150 @ 0x180027150
 * Callers:
 *     sub_1800270E0 @ 0x1800270E0 (sub_1800270E0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180029064 @ 0x180029064 (sub_180029064.c)
 *     sub_18007F294 @ 0x18007F294 (sub_18007F294.c)
 */

__int64 __fastcall sub_180027150(__int64 a1, int *a2)
{
  int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h]
  __int64 v10; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(a1 + 608) & 0x10000) != 0 )
  {
    *a2 = 0;
    return 0;
  }
  v4 = sub_180029064(a1 + 96, *(_QWORD *)(a1 + 88) + 228LL, &v8);
  if ( v4 >= 0 )
  {
    *a2 = v8;
    return 0;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
  {
    v7 = *(_QWORD *)(a1 + 88);
    v9 = 0x1000000LL;
    v10 = v7 + 228;
    v8 = v4;
    sub_18007F294(v6, &unk_1800A18B2);
  }
  return (unsigned int)v4;
}
