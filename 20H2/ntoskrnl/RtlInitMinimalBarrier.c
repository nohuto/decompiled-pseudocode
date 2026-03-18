/*
 * XREFs of RtlInitMinimalBarrier @ 0x140A14550
 * Callers:
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409FB010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitMinimalBarrier(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[1] = a2;
  result = 0LL;
  *a1 = a2;
  return result;
}
