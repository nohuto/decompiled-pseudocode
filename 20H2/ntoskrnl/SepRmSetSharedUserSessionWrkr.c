/*
 * XREFs of SepRmSetSharedUserSessionWrkr @ 0x140926560
 * Callers:
 *     SepRmCommandServerThread @ 0x1407A4480 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall SepRmSetSharedUserSessionWrkr(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 44);
  result = PsGetCurrentServerSiloGlobals();
  *(_DWORD *)(result[141] + 24LL) = v2;
  *(_DWORD *)(a2 + 40) = 0;
  return result;
}
