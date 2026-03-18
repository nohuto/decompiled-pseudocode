/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C002C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C002E540 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToISM(
        bool a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int64 a8,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a9)
{
  __int64 v13; // rcx
  void *v14; // [rsp+20h] [rbp-1A8h]
  __int64 v15; // [rsp+28h] [rbp-1A0h]
  _BYTE v16[352]; // [rsp+60h] [rbp-168h] BYREF

  memset(v16, 0, sizeof(v16));
  CKeyboardProcessor::CreateKeyboardInputMessage(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    0,
    a8,
    a9,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v16);
  InputExtensibilityCallout::CoreMsgSendMessage(v13, 9LL, v16, 352LL, v14, v15);
}
