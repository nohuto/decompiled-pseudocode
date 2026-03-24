/*
 * XREFs of ?CaptureControllerSetVisualTree@CChannel@@UEAAJIU_LUID@@_N@Z @ 0x18014FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005DBF8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetVisualTree(
        CChannel *this,
        unsigned int a2,
        struct _LUID a3,
        unsigned __int8 a4)
{
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _LUID v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  CChannel::CheckHandle((__int64)this, a2, 16);
  v9[0] = 38;
  v9[1] = a2;
  v10 = a3;
  v11 = a4;
  return CChannel::SendCommand(this, v9, 0x14u);
}
