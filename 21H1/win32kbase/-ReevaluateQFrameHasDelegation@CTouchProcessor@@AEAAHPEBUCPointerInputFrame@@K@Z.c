/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C019E7BC
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C01A1004 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C019AA28 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  unsigned int v4; // edi
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  unsigned int v8; // esi
  CPointerInfoNode *v9; // rcx
  __int64 result; // rax

  v4 = 0;
  v6 = (_DWORD *)(*((_QWORD *)a2 + 18) + 160LL * a3);
  if ( *v6 != a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  do
  {
    if ( v8 >= v7 )
      break;
    v9 = (CPointerInfoNode *)(*((_QWORD *)a2 + 17) + 480LL * v8);
    if ( *((_DWORD *)v9 + 2) == a3 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v9) )
      v4 = 1;
    ++v8;
  }
  while ( !v4 );
  result = v4;
  v6[35] ^= (v6[35] ^ (8 * v4)) & 8;
  return result;
}
