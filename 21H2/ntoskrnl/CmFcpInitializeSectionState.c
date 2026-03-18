/*
 * XREFs of CmFcpInitializeSectionState @ 0x1406EBB3C
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
 *     CmFcManagerInitialize @ 0x140B15B24 (CmFcManagerInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpInitializeSectionState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
