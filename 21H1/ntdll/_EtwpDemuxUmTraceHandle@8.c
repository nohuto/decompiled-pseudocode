/*
 * XREFs of _EtwpDemuxUmTraceHandle@8 @ 0x4B381562
 * Callers:
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _EtwpTraceUmMessage@24 @ 0x4B2EFAD2 (_EtwpTraceUmMessage@24.c)
 *     _EtwpGetPrivateLoggerContextByName@8 @ 0x4B2F1B33 (_EtwpGetPrivateLoggerContextByName@8.c)
 *     _EtwpGetUmProcessImageInfo@8 @ 0x4B2F1D78 (_EtwpGetUmProcessImageInfo@8.c)
 *     _EtwpIsPrivateLoggerOn@4 @ 0x4B2F25E2 (_EtwpIsPrivateLoggerOn@4.c)
 *     @EtwpTraceUmEvent@20 @ 0x4B381076 (@EtwpTraceUmEvent@20.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 * Callees:
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

int __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 v2; // si
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  NTSTATUS v6; // eax
  ULONG ReturnLength; // [esp+Ch] [ebp-10h] BYREF
  _DWORD *v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  __int16 OutputBuffer; // [esp+18h] [ebp-4h] BYREF

  v9 = a2;
  v2 = 0;
  v3 = a1;
  v10 = a1;
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v2 + 4));
    v4 = *(_DWORD *)(EtwpLoggerArray + 8 * v2);
    if ( (v4 & 1) != 0 || !*(_DWORD *)(v4 + 380) )
      goto LABEL_9;
    v5 = *(unsigned __int16 *)(v4 + 384);
    if ( !(_WORD)v5 )
    {
      v6 = ZwTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v4 + 380), 4u, &OutputBuffer, 2u, &ReturnLength);
      v3 = v10;
      if ( v6 || ReturnLength != 2 )
        goto LABEL_9;
      LOWORD(v5) = OutputBuffer;
      *(_WORD *)(v4 + 384) = OutputBuffer;
      v5 = (unsigned __int16)v5;
    }
    if ( v5 == v3 )
      break;
LABEL_9:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v2++ + 4));
    if ( v2 >= 8u )
      return 4201;
  }
  *v9 = v2;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v2 + 4));
  return 0;
}
