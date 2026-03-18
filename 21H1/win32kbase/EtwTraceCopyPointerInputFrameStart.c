/*
 * XREFs of EtwTraceCopyPointerInputFrameStart @ 0x1C012DC70
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A86BC (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceCopyPointerInputFrameStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000LL) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &CopyPointerInputFrameStart, &W32kControlGuid);
  return result;
}
