/*
 * XREFs of HalpGetProfileDescriptor @ 0x140377EE8
 * Callers:
 *     EmonQueryInformation @ 0x140376760 (EmonQueryInformation.c)
 *     EmonSetInterval @ 0x140377D80 (EmonSetInterval.c)
 *     HalpRemoveProfileSourceFromList @ 0x1404BD75C (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x1404D1B20 (EmonEnableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x1404DBF10 (Amd64EnableMonitoring.c)
 *     Amd64QueryInformation @ 0x1404DC390 (Amd64QueryInformation.c)
 *     Amd64SetInterval @ 0x1404DC7F0 (Amd64SetInterval.c)
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
