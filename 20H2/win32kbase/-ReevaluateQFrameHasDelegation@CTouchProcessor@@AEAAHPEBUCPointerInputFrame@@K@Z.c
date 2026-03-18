/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C019659C
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0198D9C (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01927F8 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // edi
  _DWORD *v7; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // esi
  CPointerInfoNode *v10; // rcx
  __int64 result; // rax

  v4 = a3;
  v5 = 0;
  v7 = (_DWORD *)(*((_QWORD *)a2 + 18) + 160LL * (unsigned int)a3);
  if ( *v7 != (_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v8 = *((_DWORD *)a2 + 12);
  v9 = 0;
  do
  {
    if ( v9 >= v8 )
      break;
    v10 = (CPointerInfoNode *)(*((_QWORD *)a2 + 17) + 480LL * v9);
    if ( *((_DWORD *)v10 + 2) == v4 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v10) )
      v5 = 1;
    ++v9;
  }
  while ( !v5 );
  result = v5;
  v7[35] ^= (v7[35] ^ (8 * v5)) & 8;
  return result;
}
