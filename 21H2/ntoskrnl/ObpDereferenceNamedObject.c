/*
 * XREFs of ObpDereferenceNamedObject @ 0x140202270
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 */

LONG_PTR __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  return ObfDereferenceObject((PVOID)(a1 + 48));
}
