/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C018BC04
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019C8D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C01885C0 (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0198DC0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall CTouchProcessor::CreateAndReferenceMsgData(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  int v6; // r15d
  int v7; // r12d
  unsigned __int16 v8; // r14
  int v10; // edi
  struct CInputPointerNode *NodeById; // rbp
  _QWORD *v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx

  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v10 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v8, 0, 0);
  if ( !NodeById )
    return 0LL;
  v12 = Win32AllocPoolZInit(0x40uLL, 1685091157LL);
  v14 = v12;
  if ( !v12 )
    return 0LL;
  *((_WORD *)v12 + 8) = v8;
  *((_DWORD *)v12 + 7) = v7;
  *((_DWORD *)v12 + 8) = v6;
  LOBYTE(v10) = (a5 & 0x40004) == 0;
  *((_DWORD *)v12 + 9) = *((_DWORD *)v12 + 9) & 0xFFFFFFE0 | (8 * (a6 & 1)) | v10 & 0xFFFFFFE1 | ((a5 & 0x2000 | ((a5 & 0x10000 | (a5 >> 1) & 0x20000) >> 6)) >> 9);
  CTouchProcessor::AssignPointerCaptureData(this, NodeById, (struct CPointerMsgData *)v12, v13);
  v15 = (_QWORD *)((char *)NodeById + 240);
  v16 = *((_QWORD *)NodeById + 30);
  if ( *(struct CInputPointerNode **)(v16 + 8) != (struct CInputPointerNode *)((char *)NodeById + 240) )
    __fastfail(3u);
  *v14 = v16;
  v14[1] = v15;
  *(_QWORD *)(v16 + 8) = v14;
  *v15 = v14;
  CTouchProcessor::ReferenceMsgData(v16, v14, 1LL);
  return v14;
}
