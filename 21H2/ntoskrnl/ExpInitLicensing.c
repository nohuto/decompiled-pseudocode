/*
 * XREFs of ExpInitLicensing @ 0x1407D41F8
 * Callers:
 *     sub_1405B3078 @ 0x1405B3078 (sub_1405B3078.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpInitLicensing(__int64 a1)
{
  __int64 *result; // rax

  if ( (_UNKNOWN *)a1 == &PspHostSiloGlobals )
  {
    qword_140D72E50 = 81920LL;
    qword_140D35E40 = (__int64)ExpHostBootLicensingData;
    result = &qword_140D35E40;
    *(_QWORD *)(a1 + 904) = &qword_140D35E40;
  }
  else
  {
    result = *(__int64 **)(a1 + 904);
  }
  *((_DWORD *)result + 11758) = -1;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 11747) = 0;
  result[5855] = 0LL;
  result[5878] = 0LL;
  return result;
}
