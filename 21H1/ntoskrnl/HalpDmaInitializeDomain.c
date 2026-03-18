/*
 * XREFs of HalpDmaInitializeDomain @ 0x140A5E2CC
 * Callers:
 *     HalpDmaInit @ 0x140A5DFA8 (HalpDmaInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 */

__int64 HalpDmaInitializeDomain()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  HalpDmaDomainListLock = 0LL;
  qword_140C49DF8 = (__int64)&HalpDmaDomainList;
  HalpDmaDomainList = (__int64)&HalpDmaDomainList;
  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 4u;
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 256;
  *(_OWORD *)((char *)&v2[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[3]) = 2031616;
  v2[9] = HalpDmaFreeChildAdapter;
  RtlInitUnicodeString(&DestinationString, L"DmaAdapter");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&HalpDmaAdapterObjectType);
}
