/*
 * XREFs of ObDereferenceObjectEx @ 0x14028AE3C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 *     PspClearProcessThreadCidRefs @ 0x1407A0920 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObDereferenceObjectExWithTag @ 0x14028AE58 (ObDereferenceObjectExWithTag.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR a1)
{
  return ObDereferenceObjectExWithTag(a1);
}
