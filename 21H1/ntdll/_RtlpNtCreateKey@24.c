/*
 * XREFs of _RtlpNtCreateKey@24 @ 0x4B36D150
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 */

int __stdcall RtlpNtCreateKey(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a3 )
    *(_DWORD *)(a3 + 12) &= 0xFFFFFFCF;
  return ZwCreateKey(a1, a2, a3, 0, 0, 0, a6);
}
