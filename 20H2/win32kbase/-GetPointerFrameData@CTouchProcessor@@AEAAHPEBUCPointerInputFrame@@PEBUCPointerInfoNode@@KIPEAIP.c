/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C018F6D0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C018F810 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x1C012B68C (GetPointerInfoSize.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0186580 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019388C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdi
  unsigned int v19; // esi
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v25; // [rsp+78h] [rbp+10h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  v11 = 1;
  if ( !CTouchProcessor::CTouchProcessorLockShared(v12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  v17 = *((_DWORD *)a3 + 2);
  v25 = *((_QWORD *)a3 + 24);
  if ( v17 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
  v18 = *((_QWORD *)a2 + 17);
  v19 = 0;
  v20 = 0;
  do
  {
    v21 = *((unsigned int *)a2 + 12);
    if ( v20 >= (unsigned int)v21 )
      break;
    v22 = *((_QWORD *)a2 + 17) + 480 * v21;
    if ( v18 >= v22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v13, v15, v16);
    if ( *(_QWORD *)(v18 + 192) == v25 && *(_DWORD *)(v18 + 8) == v17 )
    {
      ++v19;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                (struct CPointerInfoNode *)v18,
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
    ++v20;
    v18 += 480LL;
  }
  while ( v11 );
  if ( v11 )
    *a6 = v19;
  return v11;
}
