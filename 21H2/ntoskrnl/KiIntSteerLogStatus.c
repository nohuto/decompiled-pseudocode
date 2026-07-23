/*
 * XREFs of KiIntSteerLogStatus @ 0x140522A5C
 * Callers:
 *     KiIntSteerEventTraceControlCallback @ 0x1407D5820 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402C5430 (KiIntSteerEtwEventEnabled.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KiIntSteerLogState @ 0x140377B04 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogStatus(char a1)
{
  const EVENT_DESCRIPTOR *v2; // r11
  const EVENT_DESCRIPTOR *v3; // r11
  const EVENT_DESCRIPTOR *v4; // rbx
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 *i; // rbx
  __int64 *j; // rdi
  int v10; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 *v11[2]; // [rsp+50h] [rbp-61h] BYREF
  __int16 v12; // [rsp+60h] [rbp-51h]
  int v13; // [rsp+62h] [rbp-4Fh]
  __int16 v14; // [rsp+66h] [rbp-4Bh]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+68h] [rbp-49h] BYREF
  __int64 v16; // [rsp+78h] [rbp-39h]
  __int64 v17; // [rsp+80h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v19; // [rsp+98h] [rbp-19h]
  __int64 v20; // [rsp+A0h] [rbp-11h]
  int *v21; // [rsp+A8h] [rbp-9h]
  __int64 v22; // [rsp+B0h] [rbp-1h]
  int *v23; // [rsp+B8h] [rbp+7h]
  __int64 v24; // [rsp+C0h] [rbp+Fh]
  __int64 *v25; // [rsp+C8h] [rbp+17h]
  int v26; // [rsp+D0h] [rbp+1Fh]
  int v27; // [rsp+D4h] [rbp+23h]

  v2 = &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  if ( KiIntSteerEtwEventEnabled((__int64)v2) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v20 = 4LL;
    v19 = &KiIntTrackRootCount;
    v22 = 4LL;
    v21 = &KiIntSteerMaskCount;
    v24 = 2LL;
    v23 = &KiIntSteerMask;
    v27 = 0;
    v25 = qword_140C2B228;
    v26 = 160 * (unsigned __int16)KiIntSteerMask;
    EtwWriteEx(KiIntSteerEtwHandle, v3, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  v13 = 0;
  v14 = 0;
  v4 = &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  v10 = 0;
  if ( a1 )
    v4 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  if ( KiIntSteerEtwEventEnabled((__int64)v4) )
  {
    v11[1] = (unsigned __int16 *)qword_140CFC848[0];
    v11[0] = (unsigned __int16 *)KeActiveProcessors;
    v12 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v11) )
    {
      *(_QWORD *)&v15.Size = 4LL;
      v15.Ptr = (ULONGLONG)&v10;
      v17 = 4LL;
      v16 = KiProcessorBlock[v10] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &v15);
    }
  }
  v5 = PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v5 = PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  LOBYTE(v6) = KiIntSteerEtwEventEnabled((__int64)v5);
  if ( (_BYTE)v6 )
  {
    for ( i = (__int64 *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (__int64 *)*i )
    {
      if ( !a1 )
      {
        v6 = i[20];
        if ( i[22] == v6 )
          continue;
      }
      for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
        LOBYTE(v6) = KiIntSteerLogState((__int64)j, (__int64)v5);
    }
  }
  return v6;
}
