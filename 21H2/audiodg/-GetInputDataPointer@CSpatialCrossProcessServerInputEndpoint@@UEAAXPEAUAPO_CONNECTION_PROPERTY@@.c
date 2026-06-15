/*
 * XREFs of ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14006D6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062A60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140069DEC (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14006B848 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  UINT32 u32ValidFrameCount; // esi
  char v7; // al
  __int16 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  int ObjectsAvailableForProcessing; // eax
  __int64 v12; // r9
  bool v13; // zf
  int v14; // eax

  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      (__int64)this,
      (__int64)a2,
      (__int64)this - 1424,
      5,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  if ( u32ValidFrameCount )
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 17) + 44LL), u32ValidFrameCount);
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 17) + 64LL), 0, 0);
  v8 = u32ValidFrameCount * *((_WORD *)this - 556);
  *((_BYTE *)this + 73) = (v7 & 0x10) != 0;
  (*(void (__fastcall **)(char *, struct AE_CURRENT_POSITION *, _QWORD))(*((_QWORD *)this - 178) + 80LL))(
    (char *)this - 1424,
    a3,
    u32ValidFrameCount);
  if ( u32ValidFrameCount )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1424)) )
    {
      *((_DWORD *)this + 20) = 2;
      a2->u32BufferFlags = BUFFER_VALID;
      ObjectsAvailableForProcessing = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
                                        (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1424),
                                        (unsigned int *)this + 16,
                                        (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = ObjectsAvailableForProcessing;
      if ( ObjectsAvailableForProcessing < 0 )
      {
        if ( ObjectsAvailableForProcessing != -2005139358 )
          SpatialCPTraceLoggingErrorHelper(
            "CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer",
            313,
            (unsigned int)ObjectsAvailableForProcessing,
            v12);
      }
      else
      {
        *((_BYTE *)this + 72) = 1;
      }
      goto LABEL_17;
    }
    v13 = *((_DWORD *)this + 20) == 2;
    *((_DWORD *)this + 20) = v13;
    if ( v13 )
    {
      v14 = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
              (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1424),
              (unsigned int *)this + 16,
              (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = v14;
      if ( v14 >= 0 )
        *((_BYTE *)this + 72) = 1;
    }
  }
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v10, v9, (__int64)this - 1424, 23, 0, u32ValidFrameCount, 101);
  a2->u32BufferFlags = BUFFER_SILENT;
  *((_DWORD *)this + 19) = 0;
LABEL_17:
  a2->pBuffer = *((_QWORD *)this - 165);
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v10, v9, (__int64)this - 1424, 6, v8, v8, 0);
}
