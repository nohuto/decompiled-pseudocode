/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C018E2C0
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C0191904 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int64 v8; // rdx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_QWORD *)a3 + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v5 = (_QWORD *)*((unsigned int *)a3 + 9);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( ((unsigned __int8)v5 & 8) != 0 )
      goto LABEL_14;
    v6 = *((_QWORD *)a2 + 30);
    if ( (struct CInputPointerNode *)v6 == (struct CInputPointerNode *)((char *)a2 + 240) )
      v6 = 0LL;
    if ( ((unsigned __int8)v5 & 2) != 0
      || !v6
      || (*(_DWORD *)(v6 + 36) & 1) != 0
      || (v7 = *(_WORD **)(v6 + 40)) == 0LL
      && (MicrosoftTelemetryAssertTriggeredNoArgsKM(v5), (v7 = *(_WORD **)(v6 + 40)) == 0LL) )
    {
LABEL_14:
      v7 = Win32AllocPoolZInit(0x138uLL, 0x43707355u);
      if ( !v7 )
        return;
      v7[10] = *((_WORD *)a3 + 8);
      *((_DWORD *)v7 + 6) = *((_DWORD *)a3 + 7);
      v5 = (_QWORD *)((char *)a2 + 224);
      v8 = *((_QWORD *)a2 + 28);
      if ( *(struct CInputPointerNode **)(v8 + 8) != (struct CInputPointerNode *)((char *)a2 + 224) )
        __fastfail(3u);
      *(_QWORD *)v7 = v8;
      *((_QWORD *)v7 + 1) = v5;
      *(_QWORD *)(v8 + 8) = v7;
      *v5 = v7;
    }
    *((_QWORD *)a3 + 5) = v7;
    if ( (*((_DWORD *)v7 + 4))++ == -1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  }
}
