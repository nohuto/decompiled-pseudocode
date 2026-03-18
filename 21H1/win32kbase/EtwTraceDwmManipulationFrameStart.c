/*
 * XREFs of EtwTraceDwmManipulationFrameStart @ 0x1C012DE60
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C013044C (McTemplateK0dq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDwmManipulationFrameStart(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0dq_EtwWriteTransfer(a1, &DwmManipulationFrameStart, a3, (unsigned int)a1, a2);
  return result;
}
