/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C0069680
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C006B1D0 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     memset @ 0x1C00D3880 (memset.c)
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
  _BYTE v14[352]; // [rsp+60h] [rbp-168h] BYREF

  memset(v14, 0, sizeof(v14));
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
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v14);
  InputExtensibilityCallout::CoreMsgSendMessage(v13, 9LL, v14, 352LL);
}
