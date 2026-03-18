/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C018FC48
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018EE84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C019C164 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C019E850 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  int v8; // r12d
  unsigned int v9; // r13d
  const struct CPointerInputFrame *v10; // rdi
  struct _KTHREAD **v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int *i; // rbx
  CTouchProcessor *v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-D8h]
  _BYTE v18[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v19; // [rsp+C1h] [rbp-37h]
  __int16 v20; // [rsp+C5h] [rbp-33h]
  char v21; // [rsp+C7h] [rbp-31h]

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (struct _KTHREAD **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        216,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  if ( v11[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v12 = *((unsigned int *)v10 + 12);
  v13 = 0;
  for ( i = (unsigned int *)*((_QWORD *)v10 + 17); v13 < (unsigned int)v12; ++v13 )
  {
    v15 = (CTouchProcessor *)(*((_QWORD *)v10 + 17) + 480 * v12);
    if ( i >= (unsigned int *)v15 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, a2, a3, a4);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v15, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      a3 = *i;
      if ( (a3 & 0x1000) == 0 )
      {
        a2 = (const struct CPointerInputFrame *)i[45];
        LOBYTE(v16) = (a6 & i[45]) == a6;
        if ( ((unsigned __int8)v16 & (((unsigned int)a2 & a7) == 0)) != 0 )
        {
          if ( (a3 & 0x80000) == 0
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, a2, a3, a4), a3 = *i, (a3 & 0x80000) == 0) )
          {
            v19 = 0;
            v20 = 0;
            v21 = 0;
            memset(v18, 0, sizeof(v18));
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (CTouchProcessor *)v11,
                                  (__int64)i,
                                  *((_QWORD *)i + 2),
                                  v10,
                                  0,
                                  v9,
                                  v8,
                                  a5,
                                  (CInputDest *)v18)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a2) = 2;
              WPP_RECORDER_SF_LL(
                *((unsigned __int16 *)i + 86),
                (_DWORD)a2,
                a3,
                217,
                v17,
                *((_WORD *)i + 86),
                *((_WORD *)i + 80));
            }
          }
        }
      }
    }
    v12 = *((unsigned int *)v10 + 12);
    i += 120;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        218,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
}
