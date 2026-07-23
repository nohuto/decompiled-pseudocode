/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140A75038
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  __int64 result; // rax

  dword_140C197B0 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
  result = *(_QWORD *)(a1 + 240);
  qword_140C197B8 = *(_QWORD *)(result + 2616);
  return result;
}
