/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0195948
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01A1EC4 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A45B0 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  const struct CPointerInputFrame *v10; // rdi
  struct _KTHREAD **v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned __int64 i; // rbx
  CTouchProcessor *v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // [rsp+20h] [rbp-D8h]
  _BYTE v19[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v20; // [rsp+C1h] [rbp-37h]
  __int16 v21; // [rsp+C5h] [rbp-33h]
  char v22; // [rsp+C7h] [rbp-31h]

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
        215,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  if ( v11[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v12 = *((unsigned int *)v10 + 12);
  v13 = 0;
  for ( i = *((_QWORD *)v10 + 17); v13 < (unsigned int)v12; ++v13 )
  {
    v15 = (CTouchProcessor *)(*((_QWORD *)v10 + 17) + 480 * v12);
    if ( i >= (unsigned __int64)v15 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v15, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      if ( (*(_DWORD *)i & 0x1000) == 0 )
      {
        LODWORD(a2) = *(_DWORD *)(i + 180);
        LOBYTE(v16) = (a6 & (unsigned int)a2) == a6;
        if ( ((unsigned __int8)v16 & (((unsigned int)a2 & a7) == 0)) != 0 )
        {
          if ( (*(_DWORD *)i & 0x80000) == 0
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v16), (*(_DWORD *)i & 0x80000) == 0) )
          {
            v20 = 0;
            v21 = 0;
            v22 = 0;
            memset(v19, 0, sizeof(v19));
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (CTouchProcessor *)v11,
                                  i,
                                  *(_QWORD *)(i + 16),
                                  v10,
                                  0,
                                  a3,
                                  a4,
                                  a5,
                                  (CInputDest *)v19)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(a2) = 2;
              WPP_RECORDER_SF_LL(
                *(unsigned __int16 *)(i + 172),
                (_DWORD)a2,
                v17,
                216,
                v18,
                *(_WORD *)(i + 172),
                *(_WORD *)(i + 160));
            }
          }
        }
      }
    }
    v12 = *((unsigned int *)v10 + 12);
    i += 480LL;
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
        217,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
}
