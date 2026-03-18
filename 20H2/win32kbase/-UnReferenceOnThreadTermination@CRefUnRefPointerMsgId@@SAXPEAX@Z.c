/*
 * XREFs of ?UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z @ 0x1C00D2260
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AB70 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::UnReferenceOnThreadTermination(void *a1)
{
  _BYTE v1[56]; // [rsp+20h] [rbp-38h] BYREF

  CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, a1, 8LL, v1);
}
