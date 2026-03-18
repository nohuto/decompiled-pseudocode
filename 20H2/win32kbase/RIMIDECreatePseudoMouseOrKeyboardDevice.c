/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0168060
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0133BB0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0133FD0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00B45B0 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C015362C (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C0153780 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0155430 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01670C0 (RIMIDECreateDeviceInstancePath.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int ReferencedRimObj; // ebx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v18[9]; // [rsp+60h] [rbp-A0h] BYREF
  char v19; // [rsp+F0h] [rbp-10h] BYREF

  v5 = a1;
  if ( (unsigned int)a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  *(_QWORD *)&v17.Length = 0x1000000LL;
  v17.Buffer = (PWSTR)&v19;
  Handle = (HANDLE)-1LL;
  v16 = -1LL;
  memset(v18, 0, sizeof(v18));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath();
  if ( ReferencedRimObj >= 0 )
  {
    v8 = rimInputTypeFromDeviceTypeAndUsages(v5, 0, 0);
    v11 = v8 - 1;
    if ( (unsigned int)v11 > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v7, v9, v10);
    ReferencedRimObj = rimFindReferencedRimObj(v8, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        HIDWORD(v18[0]) &= 0xFFFFFFF8;
        *(_QWORD *)&v18[5] = 0LL;
        DWORD2(v18[5]) = 0;
        *(_QWORD *)((char *)&v18[7] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v12) + 880);
        HIDWORD(v18[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v18[7] + 4)) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v17, v5, v18, 0, (__int64)&v16);
        if ( ReferencedRimObj >= 0 )
          *a2 = v16;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
