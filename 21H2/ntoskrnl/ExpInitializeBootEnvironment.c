/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140B29088
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  dword_140C15C70 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  *(_OWORD *)&ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
  qword_140C15C78 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2648LL);
  return IoAddTriageDumpDataBlock((ULONG)&ExpBootEnvironmentInformation, (PVOID)0x20);
}
