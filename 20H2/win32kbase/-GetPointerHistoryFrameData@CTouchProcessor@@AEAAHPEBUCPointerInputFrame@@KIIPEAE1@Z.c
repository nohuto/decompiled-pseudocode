/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C018FDA0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C018F810 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     GetPointerInfoSize @ 0x1C012B68C (GetPointerInfoSize.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0186580 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C018BA40 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C019388C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 PointerInfoSize; // r15
  unsigned int v19; // r12d
  unsigned int v20; // edi
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int i; // r13d
  int *v24; // rdx
  int v25; // esi
  unsigned __int16 *v26; // rdx
  struct tagPOINTER_INFO *v27; // rsi

  v7 = a4;
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v19 = a5;
  v20 = 1;
  if ( v7 > *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
  v21 = v7 * (unsigned int)PointerInfoSize;
  if ( (_DWORD)v21 != v19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v14, v16, v17);
  v22 = 0;
  for ( i = 0; v20 && i < v7; ++i )
  {
    a5 = v22 < *((_DWORD *)a2 + 12) ? v22 : 0;
    v24 = (int *)(a6 + 4);
    if ( (unsigned __int64)(a6 + 4) >= MmUserProbeAddress )
      v24 = (int *)MmUserProbeAddress;
    v25 = *v24;
    if ( !*v24 || HIWORD(v25) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v24, 0LL, v17);
    v22 = a5;
    v26 = (unsigned __int16 *)(*((_QWORD *)a2 + 17) + 480LL * a5);
    if ( v26[86] != v25 )
    {
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame(this, a2, v25, &a5) )
        return 0;
      v22 = a5;
      v26 = (unsigned __int16 *)(*((_QWORD *)a2 + 17) + 480LL * a5);
    }
    if ( v19 >= (unsigned int)PointerInfoSize )
    {
      v27 = a7;
      v20 = CTouchProcessor::PointerInfoCopyOutHelper(
              (CTouchProcessor *)this,
              (struct CPointerInfoNode *)v26,
              *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 19),
              a3,
              PointerInfoSize,
              a7);
      if ( v20 )
      {
        a6 += PointerInfoSize;
        a7 = (struct tagPOINTER_INFO *)((char *)v27 + PointerInfoSize);
        v19 -= PointerInfoSize;
        ++v22;
      }
    }
    v7 = a4;
  }
  return v20;
}
