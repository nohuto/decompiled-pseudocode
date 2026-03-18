/*
 * XREFs of RtlInitMinimalBarrier @ 0x140A0E550
 * Callers:
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F5010 (FsRtlMdlReadCompleteDevEx.c)
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
