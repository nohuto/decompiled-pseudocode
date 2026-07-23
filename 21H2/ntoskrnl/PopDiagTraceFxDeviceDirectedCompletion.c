/*
 * XREFs of PopDiagTraceFxDeviceDirectedCompletion @ 0x1405724A0
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x14056A79C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceDirectedCompletion(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  REGHANDLE v3; // rbx
  int v4; // ecx
  int v5; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+44h] [rbp+Bh] BYREF
  __int64 v7; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  int *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  int *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v2 = a2;
  v7 = a1;
  PopFxAddLogEntry(a1, 0, 26, a2);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END) )
    {
      v4 = *(_DWORD *)(v7 + 156);
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v5;
      v6 = v4;
      v12 = &v6;
      v10 = 4;
      v13 = 4;
      v5 = v2;
      UserData.Size = 8;
      EtwWriteEx(v3, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
