/*
 * XREFs of RtlInitializeSwapReference @ 0x1407C187C
 * Callers:
 *     CmFcManagerInitialize @ 0x140A35D98 (CmFcManagerInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSwapReference(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
