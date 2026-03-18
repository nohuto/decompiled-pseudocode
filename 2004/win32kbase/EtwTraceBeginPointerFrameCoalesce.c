/*
 * XREFs of EtwTraceBeginPointerFrameCoalesce @ 0x1C0127980
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0189FAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019C8D0 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C012A144 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceBeginPointerFrameCoalesce(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&BeginPointerFrameDelegateCoalesce, a3, a1, a2, 0);
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&BeginPointerFrameCoalesce, 0, a1, a2, 0);
  }
  return result;
}
