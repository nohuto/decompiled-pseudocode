/*
 * XREFs of AstInitializeBloomFilter @ 0x140864034
 * Callers:
 *     AstInitialize @ 0x140B30C68 (AstInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall AstInitializeBloomFilter(__int64 a1, __int64 a2, __int64 a3)
{
  dword_140C46C30 = -849937013;
  AstIoctlBloomFilter = 0x8000;
  qword_140C46C28 = a3;
}
