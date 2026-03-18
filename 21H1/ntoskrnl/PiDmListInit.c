/*
 * XREFs of PiDmListInit @ 0x14078A2B4
 * Callers:
 *     PiDmInit @ 0x140A49A6C (PiDmInit.c)
 * Callees:
 *     PiDmEnumObjectsWithCallback @ 0x1406A7068 (PiDmEnumObjectsWithCallback.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmListInit(int a1)
{
  unsigned int v1; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)P = 0LL;
  HIDWORD(P[1]) = a1;
  v1 = PiDmEnumObjectsWithCallback(
         qword_1400072C0[5 * a1],
         (__int64 (__fastcall *)(void *, __int64, _BYTE *))PiDmListInitEnumCallback,
         (__int64)P);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x5A706E50u);
  return v1;
}
