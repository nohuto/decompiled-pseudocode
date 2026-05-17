/*
 * XREFs of RtlpNtOpenKey @ 0x18007E120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNtOpenKey(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    *(_DWORD *)(a3 + 24) &= 0xFFFFFFCF;
  return NtOpenKey(a1, a2, a3);
}
