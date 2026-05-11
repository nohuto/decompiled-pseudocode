/*
 * XREFs of USBType1SetSampleRate @ 0x1C0032840
 * Callers:
 *     USBType1StateChangePin @ 0x1C0006260 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C00065F0 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C00070D0 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0007680 (USBCaptureChangePowerState.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C002CB68 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBType1SetSampleRate(__int64 a1, int a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rbx
  int SetProperty; // edx
  int v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(v2 + 144);
  SetProperty = 0;
  if ( (*(_BYTE *)(v3[20] + 3LL) & 1) != 0 || *(_DWORD *)(a1 + 116) == 2 && *(_BYTE *)(v3[19] + 7LL) > 1u )
  {
    SetProperty = USBHwGetSetProperty(
                    *(_QWORD *)(v2 + 16),
                    0x1Cu,
                    0,
                    1u,
                    1,
                    0,
                    0,
                    *(unsigned __int8 *)(v3[21] + 2LL),
                    &v6,
                    3u);
    if ( SetProperty < 0 && *(_BYTE *)(v3[19] + 7LL) == 1 )
      return 0;
  }
  return (unsigned int)SetProperty;
}
