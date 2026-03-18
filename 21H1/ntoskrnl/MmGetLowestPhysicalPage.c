/*
 * XREFs of MmGetLowestPhysicalPage @ 0x1403230FC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * a1) + 6912LL);
}
