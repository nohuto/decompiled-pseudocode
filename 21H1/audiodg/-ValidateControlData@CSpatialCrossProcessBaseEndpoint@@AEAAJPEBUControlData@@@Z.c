/*
 * XREFs of ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x1400627B8
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14006170C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140061F28 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateControlData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct ControlData *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v4 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::ValidateControlData", 552, v4, a4);
    v7 = 1;
    (**((void (__fastcall ***)(char *, __int64, int *))this + 142))((char *)this + 1136, 2LL, &v7);
    return v4;
  }
  if ( *(_DWORD *)a2 != 806
    || *((_DWORD *)a2 + 1) != 1396785988
    || !(*((_DWORD *)a2 + 130) + *((_DWORD *)a2 + 131))
    || *((_DWORD *)a2 + 132) < 0x340u )
  {
    v4 = -2005139387;
    goto LABEL_8;
  }
  return v4;
}
