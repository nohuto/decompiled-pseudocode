/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01978F0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0197A30 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x1C01339CC (GetPointerInfoSize.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C018E7C0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019BAAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        struct tagPOINTER_INFO *a7)
{
  __int64 PointerInfoSize; // r15
  unsigned int v11; // ebx
  PERESOURCE *v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r12d
  unsigned __int64 v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v22; // [rsp+78h] [rbp+10h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  v11 = 1;
  if ( !CTouchProcessor::CTouchProcessorLockShared(v12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v14 = *((_DWORD *)a3 + 2);
  v22 = *((_QWORD *)a3 + 24);
  if ( v14 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v15 = *((_QWORD *)a2 + 17);
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = *((unsigned int *)a2 + 12);
    if ( v17 >= (unsigned int)v18 )
      break;
    v19 = *((_QWORD *)a2 + 17) + 480 * v18;
    if ( v15 >= v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
    if ( *(_QWORD *)(v15 + 192) == v22 && *(_DWORD *)(v15 + 8) == v14 )
    {
      ++v16;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                (struct CPointerInfoNode *)v15,
                *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 19),
                a4,
                PointerInfoSize,
                a7);
        if ( v11 )
        {
          a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
          a5 -= PointerInfoSize;
        }
      }
    }
    ++v17;
    v15 += 480LL;
  }
  while ( v11 );
  if ( v11 )
    *a6 = v16;
  return v11;
}
