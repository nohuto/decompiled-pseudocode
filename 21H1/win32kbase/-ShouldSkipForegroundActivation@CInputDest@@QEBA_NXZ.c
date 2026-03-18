/*
 * XREFs of ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C005FADC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01A1E74 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     ApiSetEditionIsAppForeground @ 0x1C01CE528 (ApiSetEditionIsAppForeground.c)
 */

bool __fastcall CInputDest::ShouldSkipForegroundActivation(CInputDest *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 26);
  result = 1;
  if ( (v1 & 1) == 0 )
    return (v1 & 2) != 0 && (unsigned int)ApiSetEditionIsAppForeground(*((_QWORD *)this + 10)) != 0;
  return result;
}
