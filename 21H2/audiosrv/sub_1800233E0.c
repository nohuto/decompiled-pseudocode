/*
 * XREFs of sub_1800233E0 @ 0x1800233E0
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800233E0(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v4 != v5 )
    goto LABEL_7;
  if ( v5 )
  {
    v6 = 2 * v4;
    if ( (v4 & 0x40000000) != 0 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( (unsigned __int64)v6 > 0x7FFFFFF )
    return 0LL;
  v7 = o__recalloc(*(_QWORD *)a1, v6, 16LL);
  if ( !v7 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v6;
  *(_QWORD *)a1 = v7;
LABEL_7:
  v8 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v4);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v9 = a2[1];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    *v8 = *a2;
    v8[1] = a2[1];
    v4 = *(_DWORD *)(a1 + 8);
  }
  result = 1LL;
  *(_DWORD *)(a1 + 8) = v4 + 1;
  return result;
}
