/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x1406DADB0
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406C9544 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}
