/*
 * XREFs of EtwTraceDCompBeginFrameEvent @ 0x1C012DD10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0130F40 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDCompBeginFrameEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &DCompBeginFrameEvent, a3, a1, a2);
  return result;
}
