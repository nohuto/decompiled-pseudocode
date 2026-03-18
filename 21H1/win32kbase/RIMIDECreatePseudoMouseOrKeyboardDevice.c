/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0170910
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C013BBA0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C013BFC0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0057210 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C015BEDC (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C015C030 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C015DCE0 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C016F970 (RIMIDECreateDeviceInstancePath.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(__int64 a1, __int64 *a2)
{
  unsigned int v3; // edi
  int ReferencedRimObj; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v12; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v13[9]; // [rsp+60h] [rbp-A0h] BYREF
  char v14; // [rsp+F0h] [rbp-10h] BYREF

  v3 = a1;
  if ( (unsigned int)a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  *(_QWORD *)&v12.Length = 0x1000000LL;
  v12.Buffer = (PWSTR)&v14;
  Handle = (HANDLE)-1LL;
  v11 = -1LL;
  memset(v13, 0, sizeof(v13));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(v3, 0LL);
  if ( ReferencedRimObj >= 0 )
  {
    v5 = rimInputTypeFromDeviceTypeAndUsages(v3, 0, 0);
    v6 = v5 - 1;
    if ( (unsigned int)v6 > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    ReferencedRimObj = rimFindReferencedRimObj(v5, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        HIDWORD(v13[0]) &= 0xFFFFFFF8;
        *(_QWORD *)&v13[5] = 0LL;
        DWORD2(v13[5]) = 0;
        *(_QWORD *)((char *)&v13[7] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v7) + 880);
        HIDWORD(v13[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v13[7] + 4)) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v12, v3, v13, 0, (__int64)&v11);
        if ( ReferencedRimObj >= 0 )
          *a2 = v11;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
