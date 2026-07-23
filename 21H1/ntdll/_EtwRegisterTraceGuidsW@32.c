/*
 * XREFs of _EtwRegisterTraceGuidsW@32 @ 0x4B2E43A0
 * Callers:
 *     _EtwRegisterTraceGuidsA@32 @ 0x4B2E4370 (_EtwRegisterTraceGuidsA@32.c)
 * Callees:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 *     _EtwpCreateRegGuidsContext@20 @ 0x4B2E4478 (_EtwpCreateRegGuidsContext@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall EtwRegisterTraceGuidsW(
        ULONG (__cdecl *a1)(PETW_NOTIFICATION_HEADER, PVOID),
        int a2,
        unsigned int *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  void *v8; // eax
  void *v9; // edi
  LONG LastErrorValue; // esi
  int v12; // [esp-4h] [ebp-34h]
  ULONGLONG RegHandle; // [esp+10h] [ebp-20h] BYREF
  PETW_NOTIFICATION_CALLBACK Callback; // [esp+18h] [ebp-18h]
  GUID Guid; // [esp+1Ch] [ebp-14h] BYREF

  Callback = a1;
  LODWORD(RegHandle) = a5;
  if ( a1 && a8 && a3 && a4 <= 0x10000 )
  {
    v12 = RegHandle;
    Guid.Data1 = *a3;
    *(_DWORD *)&Guid.Data2 = a3[1];
    *(_DWORD *)Guid.Data4 = a3[2];
    *(_DWORD *)&Guid.Data4[4] = a3[3];
    *a8 = 0;
    a8[1] = 0;
    v8 = (void *)EtwpCreateRegGuidsContext(a1, &Guid, a4, v12);
    v9 = v8;
    if ( v8 )
    {
      LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, v8, &RegHandle);
      if ( LastErrorValue )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      else
        *(_QWORD *)a8 = RegHandle;
    }
    else
    {
      LastErrorValue = NtCurrentTeb()->LastErrorValue;
    }
    if ( LastErrorValue )
      RtlSetLastWin32Error(LastErrorValue);
    return LastErrorValue;
  }
  else
  {
    RtlSetLastWin32Error(87);
    return 87;
  }
}
