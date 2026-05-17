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

int __stdcall EtwRegisterTraceGuidsW(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, int a6, int a7, _DWORD *a8)
{
  int RegGuidsContext; // eax
  int v9; // edi
  struct _TEB *LastErrorValue; // esi
  int v12; // [esp-4h] [ebp-34h]
  int v13[2]; // [esp+10h] [ebp-20h] BYREF
  int v14; // [esp+18h] [ebp-18h]
  _DWORD Buf1[4]; // [esp+1Ch] [ebp-14h] BYREF

  v14 = a1;
  v13[0] = a5;
  if ( a1 && a8 && a3 && a4 <= 0x10000 )
  {
    v12 = v13[0];
    Buf1[0] = *a3;
    Buf1[1] = a3[1];
    Buf1[2] = a3[2];
    Buf1[3] = a3[3];
    *a8 = 0;
    a8[1] = 0;
    RegGuidsContext = EtwpCreateRegGuidsContext(a1, Buf1, a4, v12);
    v9 = RegGuidsContext;
    if ( RegGuidsContext )
    {
      LastErrorValue = (struct _TEB *)EtwNotificationRegister(Buf1, 2, v14, RegGuidsContext, v13);
      if ( LastErrorValue )
      {
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v9);
      }
      else
      {
        *a8 = v13[0];
        a8[1] = v13[1];
      }
    }
    else
    {
      LastErrorValue = (struct _TEB *)NtCurrentTeb()->LastErrorValue;
    }
    if ( LastErrorValue )
      RtlSetLastWin32Error(LastErrorValue);
    return (int)LastErrorValue;
  }
  else
  {
    RtlSetLastWin32Error((struct _TEB *)0x57);
    return 87;
  }
}
