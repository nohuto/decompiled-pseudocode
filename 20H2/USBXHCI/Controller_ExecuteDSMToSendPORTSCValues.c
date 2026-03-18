/*
 * XREFs of Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0032584
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     WPP_RECORDER_SF_P @ 0x1C0036414 (WPP_RECORDER_SF_P.c)
 *     Controller_ExecuteDSM @ 0x1C00700B8 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_ExecuteDSMToSendPORTSCValues(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned int v5; // r15d
  _DWORD *PoolWithTag; // rax
  int v7; // edx
  int v8; // r8d
  _DWORD *v9; // rsi
  _DWORD *v10; // r14
  int Ulong; // eax

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 584) )
  {
    v3 = *(_QWORD *)(a1 + 152);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 83LL);
    v5 = 4 * v4 + 4;
    PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink), v5, 0x49434858u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(4 * v4 + 4));
      *v9 = v4;
      if ( (_DWORD)v4 )
      {
        v10 = v9 + 1;
        do
        {
          Ulong = XilRegister_ReadUlong(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL),
                    (unsigned int *)(v1 + *(_QWORD *)(v3 + 40)));
          v1 += 16LL;
          *v10++ = Ulong;
          --v4;
        }
        while ( v4 );
      }
      Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL, 1LL, v9, (_WORD)v5);
      ExFreePoolWithTag(v9, 0x49434858u);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_P(*(_QWORD *)(a1 + 72), v7, v8, 253);
    }
  }
}
