/*
 * XREFs of ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x180122B70
 * Callers:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x180121B1C (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180122EF4 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x1801226CC (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 */

void __fastcall ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
        ControllerProcessor *this,
        float a2,
        __int16 a3,
        __int16 a4,
        char a5)
{
  __int16 v6; // bx
  char v8; // r8

  v6 = a3;
  if ( a2 >= 0.70999998 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a4, 0, a5);
LABEL_10:
    v8 = 1;
    goto LABEL_11;
  }
  if ( a2 > 0.69 )
    goto LABEL_6;
  if ( a2 >= -0.69 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a3, 0, a5);
LABEL_6:
    v6 = a4;
    goto LABEL_8;
  }
  if ( a2 <= -0.70999998 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a3, 0, a5);
    v6 = a4;
    goto LABEL_10;
  }
LABEL_8:
  v8 = 0;
LABEL_11:
  ControllerProcessor::SetVirtualKeyState(this, v6, v8, a5);
}
