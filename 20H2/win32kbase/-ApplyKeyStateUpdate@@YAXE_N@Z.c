/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01AE6DC
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2370 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateAsyncKeyState @ 0x1C002D190 (UpdateAsyncKeyState.c)
 *     UpdateRawKeyState @ 0x1C00A16A8 (UpdateRawKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(unsigned __int8 a1, char a2)
{
  UpdateRawKeyState(a1, a2);
  UpdateAsyncKeyState(gpqForeground, a1, a2);
}
