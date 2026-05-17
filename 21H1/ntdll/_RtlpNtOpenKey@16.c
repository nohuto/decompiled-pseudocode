/*
 * XREFs of _RtlpNtOpenKey@16 @ 0x4B36D250
 * Callers:
 *     <none>
 * Callees:
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 */

int __stdcall RtlpNtOpenKey(int a1, int a2, int a3, int a4)
{
  if ( a3 )
    *(_DWORD *)(a3 + 12) &= 0xFFFFFFCF;
  return ZwOpenKey(a1, a2, a3);
}
