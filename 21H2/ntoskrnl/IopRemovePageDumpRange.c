/*
 * XREFs of IopRemovePageDumpRange @ 0x14050448C
 * Callers:
 *     IopDumpCallRemovePagesCallbacks @ 0x140503DD0 (IopDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     IoFreeDumpRange @ 0x1405022E0 (IoFreeDumpRange.c)
 */

__int64 __fastcall IopRemovePageDumpRange(__int64 a1, char *a2)
{
  int v3; // r9d
  __int64 result; // rax
  char v5; // di
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a2 )
    *a2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v3 >= 0 )
  {
    v5 = 0;
  }
  else
  {
    v3 &= ~0x80000000;
    v5 = 1;
    *(_DWORD *)(a1 + 8) = v3;
  }
  if ( ((v3 - 1) & v3) != 0 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = v3 & 1;
  if ( !v8 )
    v7 >>= 12;
  v9 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v10[0] = *(_QWORD *)(v9 + 48);
  v10[1] = v9 + 56;
  *(_QWORD *)&v12 = v10;
  result = IoFreeDumpRange((__int64)&v11, (char *)v7, v6, 2 * (v8 ^ 1u));
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v5;
  }
  return result;
}
