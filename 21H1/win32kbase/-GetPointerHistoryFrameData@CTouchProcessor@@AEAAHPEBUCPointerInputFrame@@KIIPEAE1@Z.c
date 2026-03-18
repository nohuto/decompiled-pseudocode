/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0197FC0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0197A30 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     GetPointerInfoSize @ 0x1C01339CC (GetPointerInfoSize.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C018E7C0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C0193C60 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019BAAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct tagPOINTER_INFO *a7)
{
  unsigned int v7; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 PointerInfoSize; // r15
  unsigned int v13; // r12d
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int i; // r13d
  int *v18; // rdx
  int v19; // esi
  unsigned __int16 *v20; // rdx
  struct tagPOINTER_INFO *v21; // rsi

  v7 = a4;
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v13 = a5;
  v14 = 1;
  if ( v7 > *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  v15 = v7 * (unsigned int)PointerInfoSize;
  if ( (_DWORD)v15 != v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
  v16 = 0;
  for ( i = 0; v14 && i < v7; ++i )
  {
    a5 = v16 < *((_DWORD *)a2 + 12) ? v16 : 0;
    v18 = (int *)(a6 + 4);
    if ( (unsigned __int64)(a6 + 4) >= MmUserProbeAddress )
      v18 = (int *)MmUserProbeAddress;
    v19 = *v18;
    if ( !*v18 || HIWORD(v19) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
    v16 = a5;
    v20 = (unsigned __int16 *)(*((_QWORD *)a2 + 17) + 480LL * a5);
    if ( v20[86] != v19 )
    {
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame(this, a2, v19, &a5) )
        return 0;
      v16 = a5;
      v20 = (unsigned __int16 *)(*((_QWORD *)a2 + 17) + 480LL * a5);
    }
    if ( v13 >= (unsigned int)PointerInfoSize )
    {
      v21 = a7;
      v14 = CTouchProcessor::PointerInfoCopyOutHelper(
              (CTouchProcessor *)this,
              (struct CPointerInfoNode *)v20,
              *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 19),
              a3,
              PointerInfoSize,
              a7);
      if ( v14 )
      {
        a6 += PointerInfoSize;
        a7 = (struct tagPOINTER_INFO *)((char *)v21 + PointerInfoSize);
        v13 -= PointerInfoSize;
        ++v16;
      }
    }
    v7 = a4;
  }
  return v14;
}
