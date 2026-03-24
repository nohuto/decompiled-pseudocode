/*
 * XREFs of BiIsLinkedToEfiVariable @ 0x1409726E0
 * Callers:
 *     BiIsLinkedToFirmwareVariable @ 0x1407849A8 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     BiGetObjectDescription @ 0x140781FD8 (BiGetObjectDescription.c)
 */

bool __fastcall BiIsLinkedToEfiVariable(__int64 a1, int *a2)
{
  int v3; // eax
  bool result; // al
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  result = 0;
  if ( (int)BiGetObjectDescription(a1, &v5) >= 0
    && (HIDWORD(v5) & 0xF0000000) == 0x10000000
    && (HIDWORD(v5) & 0xF00000) == 0x100000 )
  {
    if ( (HIDWORD(v5) & 0xFFFFF) != 2 )
      return 1;
    if ( !a2 )
      return 1;
    v3 = *a2;
    if ( *a2 == 285212673 || v3 == 301989890 || v3 == 301989892 || v3 == 369098882 )
      return 1;
  }
  return result;
}
