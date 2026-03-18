/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C01885C0
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C018BC04 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3,
        __int64 a4)
{
  struct CInputPointerNode *v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  _WORD *v8; // rax

  v5 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((_QWORD *)a3 + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = (_QWORD *)*((unsigned int *)a3 + 9);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( ((unsigned __int8)v6 & 8) != 0 )
      goto LABEL_14;
    v7 = *((_QWORD *)v5 + 30);
    if ( (struct CInputPointerNode *)v7 == (struct CInputPointerNode *)((char *)v5 + 240) )
      v7 = 0LL;
    if ( ((unsigned __int8)v6 & 2) != 0
      || !v7
      || (*(_DWORD *)(v7 + 36) & 1) != 0
      || (v8 = *(_WORD **)(v7 + 40)) == 0LL
      && (MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4), (v8 = *(_WORD **)(v7 + 40)) == 0LL) )
    {
LABEL_14:
      v8 = Win32AllocPoolZInit(0x138uLL, 1131443029LL);
      if ( !v8 )
        return;
      v8[10] = *((_WORD *)a3 + 8);
      *((_DWORD *)v8 + 6) = *((_DWORD *)a3 + 7);
      v6 = (_QWORD *)((char *)v5 + 224);
      a2 = (struct CInputPointerNode *)*((_QWORD *)v5 + 28);
      if ( *((struct CInputPointerNode **)a2 + 1) != (struct CInputPointerNode *)((char *)v5 + 224) )
        __fastfail(3u);
      *(_QWORD *)v8 = a2;
      *((_QWORD *)v8 + 1) = v6;
      *((_QWORD *)a2 + 1) = v8;
      *v6 = v8;
    }
    *((_QWORD *)a3 + 5) = v8;
    if ( (*((_DWORD *)v8 + 4))++ == -1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4);
  }
}
