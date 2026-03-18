/*
 * XREFs of HalpGetProfileDescriptor @ 0x140375148
 * Callers:
 *     EmonQueryInformation @ 0x1403739C0 (EmonQueryInformation.c)
 *     EmonSetInterval @ 0x140374FE0 (EmonSetInterval.c)
 *     HalpRemoveProfileSourceFromList @ 0x1404B9B5C (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x1404CE0D0 (EmonEnableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x1404D8470 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404D88F0 (Amd64QueryInformation.c)
 *     Amd64SetInterval @ 0x1404D8D50 (Amd64SetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProfileDescriptor(int a1, _QWORD **a2, _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = *a2; i != a2; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 2) == a1 )
    {
      *a3 = i - 1;
      return 0LL;
    }
  }
  return 3221225659LL;
}
