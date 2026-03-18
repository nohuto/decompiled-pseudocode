/*
 * XREFs of ?GetWindowDetails@InputTraceLogging@@CG?AUWindowDetails@1@PAUtagWND@@PAUtagBWND@@@Z @ 0x14D176
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 *     _xxxWindowFromPoint@8 @ 0x9ADAE (_xxxWindowFromPoint@8.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z @ 0x9AE96 (-SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z @ 0xC529E (-SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall InputTraceLogging::GetWindowDetails(_DWORD *this, _DWORD *a2)
{
  HANDLE ThreadId; // edi
  int v4; // edx
  char *v5; // eax
  int v6; // ecx
  PETHREAD *v7; // eax
  int v8; // ecx
  struct _KTHREAD *v10; // [esp-4h] [ebp-10h]

  ThreadId = 0;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[6] = 0;
  if ( this )
  {
    v4 = this[2];
    *a2 = *(_DWORD *)(this[19] + 60);
    if ( *(_DWORD *)(this[5] + 116) )
      v5 = (char *)this[25];
    else
      v5 = byte_FC318;
    v6 = *(_DWORD *)(v4 + 232);
    v10 = *(struct _KTHREAD **)v4;
    a2[1] = v5;
    a2[2] = v6 + 584;
    a2[3] = *(_DWORD *)(v6 + 32);
    a2[4] = PsGetThreadId(v10);
    v7 = (PETHREAD *)this[39];
    if ( v7 )
      ThreadId = PsGetThreadId(*v7);
    v8 = this[38];
    a2[5] = ThreadId;
    a2[6] = v8;
  }
  return a2;
}
