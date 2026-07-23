/*
 * XREFs of HalpCreateErrorRecord @ 0x1404B9CF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B9D30 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpCreateNMIErrorRecord @ 0x1404BDAE8 (HalpCreateNMIErrorRecord.c)
 */

__int64 __fastcall HalpCreateErrorRecord(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 >= 0 )
  {
    if ( v1 <= 1 )
      return HalpCreateMachineCheckErrorRecord(a1);
    if ( v1 == 3 )
      return HalpCreateNMIErrorRecord();
  }
  return 3221225659LL;
}
