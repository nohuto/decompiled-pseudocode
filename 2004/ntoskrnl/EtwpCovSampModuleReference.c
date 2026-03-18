/*
 * XREFs of EtwpCovSampModuleReference @ 0x140941EE8
 * Callers:
 *     ProcessForExeModule @ 0x1405AAD18 (ProcessForExeModule.c)
 *     EtwpCovSampProcessAddModule @ 0x140941F28 (EtwpCovSampProcessAddModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampModuleReference(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
  if ( result <= 1 )
    __fastfail(0xEu);
  if ( *(_QWORD *)(a2 + 64) == 2LL && !*(_DWORD *)(a2 + 132) )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1124));
  return result;
}
