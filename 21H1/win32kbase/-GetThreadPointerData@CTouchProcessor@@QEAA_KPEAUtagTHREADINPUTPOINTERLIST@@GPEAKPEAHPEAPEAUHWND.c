/*
 * XREFs of ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120
 * Callers:
 *     NtUserGetPointerType @ 0x1C013A100 (NtUserGetPointerType.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0196BD0 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C0197DF0 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C0197EC8 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C019857C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0198620 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C0198A80 (-GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0198FB8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01998CC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C019E8B0 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x1C01CE170 (ApiSetEditionGetThreadPointerHookData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::GetThreadPointerData(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        int *a5,
        HWND *a6)
{
  __int64 ThreadPointerHookData; // rbx
  struct tagTHREADINPUTPOINTERLIST *v10; // rax
  __int64 v11; // rcx

  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData(a2, a3);
  if ( !ThreadPointerHookData )
  {
    v10 = *(struct tagTHREADINPUTPOINTERLIST **)a2;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)a2 == a2 )
      return 0LL;
    do
    {
      v11 = *((unsigned __int16 *)v10 + 8);
      ThreadPointerHookData = (__int64)v10;
      if ( (_WORD)v11 == a3 )
        break;
      v10 = *(struct tagTHREADINPUTPOINTERLIST **)v10;
    }
    while ( v10 != a2 );
    if ( v10 == a2 )
      return 0LL;
    if ( (_WORD)v11 != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  }
  if ( (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0 )
    return 0LL;
  if ( a4 )
    *a4 = *(_DWORD *)(ThreadPointerHookData + 20);
  if ( a5 )
    *a5 = -(*(_DWORD *)(ThreadPointerHookData + 48) & 1);
  if ( a6 )
    *a6 = *(HWND *)(ThreadPointerHookData + 40);
  return *(_QWORD *)(ThreadPointerHookData + 24);
}
