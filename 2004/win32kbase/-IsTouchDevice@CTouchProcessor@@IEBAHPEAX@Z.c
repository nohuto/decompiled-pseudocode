/*
 * XREFs of ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C01955D4
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0195AB0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0195B8C (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsTouchDevice(CTouchProcessor *this, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _BOOL8 result; // rax

  v2 = HMValidateHandleNoSecure(a2, 19);
  result = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 480);
    if ( v3 )
    {
      if ( (unsigned int)(*(_DWORD *)(v3 + 24) - 1) <= 3 )
        return 1;
    }
  }
  return result;
}
