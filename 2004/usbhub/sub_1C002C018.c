/*
 * XREFs of sub_1C002C018 @ 0x1C002C018
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 */

__int64 __fastcall sub_1C002C018(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  NTSTATUS v5; // r10d
  unsigned int v6; // r10d

  v4 = sub_1C000F050(a1);
  *a2 = 1;
  if ( (v4[640] & 1) != 0 )
    sub_1C000FD80(a1, 8, 1214475858, 0LL, 0LL);
  else
    v5 = sub_1C0015F10(a1, 0x22001Bu, (ULONG_PTR)a2, 0LL);
  sub_1C000FD80(a1, 8, 1214475892, v5, (unsigned int)*a2);
  return v6;
}
