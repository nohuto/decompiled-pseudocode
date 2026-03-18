/*
 * XREFs of ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0193B9C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018FCAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionFindNodeQueuedMessage @ 0x1C01CDB58 (ApiSetEditionFindNodeQueuedMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  __int64 v6; // rcx
  struct tagQMSG *result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v16[7]; // [rsp+20h] [rbp-78h] BYREF

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  result = (struct tagQMSG *)CInputDest::GetQueue((const struct CPointerInfoNode *)((char *)a2 + 352), 2);
  if ( result )
  {
    v9 = *((_QWORD *)a2 + 2);
    v10 = *((_OWORD *)a2 + 23);
    v16[0] = *((_OWORD *)a2 + 22);
    v11 = *((_OWORD *)a2 + 24);
    v16[1] = v10;
    v12 = *((_OWORD *)a2 + 25);
    v16[2] = v11;
    v13 = *((_OWORD *)a2 + 26);
    v16[3] = v12;
    v14 = *((_OWORD *)a2 + 27);
    v16[4] = v13;
    v15 = *((_OWORD *)a2 + 28);
    v16[5] = v14;
    v16[6] = v15;
    return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                               v16,
                               v9,
                               v8,
                               a4);
  }
  return result;
}
