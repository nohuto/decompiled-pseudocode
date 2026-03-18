/*
 * XREFs of UpdateKeyLights @ 0x1C0058B00
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C001B6C0 (xxxChangeForegroundKeyboardTable.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0069990 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00CC860 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00AFD40 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UpdateKeyLights(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int16 v3; // r8
  char v4; // cl
  int v5; // eax
  int v6; // eax
  __int16 v7; // ax

  v1 = a1;
  word_1C024B8E2 = 0;
  v2 = 4LL;
  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    byte_1C024B845 |= 2u;
    word_1C024B8E2 = 4;
  }
  else
  {
    byte_1C024B845 &= ~2u;
  }
  v3 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
  if ( (byte_1C024B8C4 & 2) != 0 )
  {
    word_1C024B8E2 = v3 | 2;
    v4 = byte_1C024B864 | 2;
  }
  else
  {
    v4 = byte_1C024B864 & 0xFD;
  }
  if ( (byte_1C024B8C4 & 8) != 0 )
  {
    v7 = v3 | 2;
    if ( (byte_1C024B8C4 & 2) == 0 )
      v7 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
    word_1C024B8E2 = v7 | 1;
    LOBYTE(a1) = v4 | 8;
  }
  else
  {
    LOBYTE(a1) = v4 & 0xF7;
  }
  byte_1C024B864 = a1;
  if ( (_BYTE)gKeyboardInfo == 7
    || (!qword_1C0252F50 ? (v5 = 0) : (v5 = qword_1C0252F50(a1, 4LL)), v5 && (_DWORD)gRemoteClientKeyboardType == 7) )
  {
    if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
    {
      word_1C024B8E2 |= 8u;
      byte_1C024B845 |= 8u;
    }
    else
    {
      byte_1C024B845 &= ~8u;
    }
  }
  if ( qword_1C0252F50 )
    v6 = qword_1C0252F50(a1, v2);
  else
    v6 = 0;
  if ( v6 )
  {
    if ( v1 )
      word_1C024B8E2 |= 0x8000u;
    else
      word_1C024B8E2 &= ~0x8000u;
  }
  gdwUpdateKeyboard |= 2u;
  CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
}
