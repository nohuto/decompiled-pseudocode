/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x18000A7B8
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x18000A7FC (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x18000AB24 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  if ( !_InterlockedCompareExchange(&dword_180014BE0, 1, 0) )
  {
    MilWerRegisterMemoryBlock(&g_StackCaptureFrames, 0x3800u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
}
