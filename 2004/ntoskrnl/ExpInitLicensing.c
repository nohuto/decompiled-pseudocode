/*
 * XREFs of ExpInitLicensing @ 0x1407C1494
 * Callers:
 *     sub_1405AD8E8 @ 0x1405AD8E8 (sub_1405AD8E8.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpInitLicensing(__int64 a1)
{
  __int64 *result; // rax

  if ( (_UNKNOWN *)a1 == &PspHostSiloGlobals )
  {
    qword_140D6CE50 = 0x10000LL;
    qword_140D2FE20 = (__int64)ExpHostBootLicensingData;
    result = &qword_140D2FE20;
    *(_QWORD *)(a1 + 904) = &qword_140D2FE20;
  }
  else
  {
    result = *(__int64 **)(a1 + 904);
  }
  *((_DWORD *)result + 9414) = -1;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 9403) = 0;
  result[4683] = 0LL;
  result[4706] = 0LL;
  return result;
}
