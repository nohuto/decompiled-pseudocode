/*
 * XREFs of PopDiagTraceFxComponentIdleState @ 0x1403A62D4
 * Callers:
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x1403A67F0 (PoFxCompleteIdleState.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentIdleState(__int64 a1, int a2, unsigned int a3)
{
  REGHANDLE v3; // rbx
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  int *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]
  int v12; // [rsp+98h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a2;
  v4 = a1;
  PopFxAddLogEntry(a1, a2, 8, a3);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_STATE) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = 4;
      v6 = &v12;
      v9 = (int *)&v13;
      v10 = 4;
      UserData.Size = 8;
      EtwWriteEx(v3, &POP_ETW_EVENT_COMPONENT_IDLE_STATE, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
}
