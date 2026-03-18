/*
 * XREFs of EtwTraceEndPointerMessageGeneration @ 0x1C012E210
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     McTemplateK0hh_EtwWriteTransfer @ 0x1C0130540 (McTemplateK0hh_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndPointerMessageGeneration(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0hh_EtwWriteTransfer(a1, &EndPointerMessageGeneration, a3, (unsigned __int16)a1, a2);
  return result;
}
