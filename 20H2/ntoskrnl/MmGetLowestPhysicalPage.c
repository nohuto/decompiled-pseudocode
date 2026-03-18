/*
 * XREFs of MmGetLowestPhysicalPage @ 0x14033199C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * a1) + 6912LL);
}
