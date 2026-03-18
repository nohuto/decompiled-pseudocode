/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01B0A5C
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B46E0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateRawKeyState @ 0x1C003EAE8 (UpdateRawKeyState.c)
 *     UpdateAsyncKeyState @ 0x1C0069E20 (UpdateAsyncKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(unsigned __int8 a1, char a2)
{
  UpdateRawKeyState(a1, a2);
  UpdateAsyncKeyState(gpqForeground, a1, a2);
}
