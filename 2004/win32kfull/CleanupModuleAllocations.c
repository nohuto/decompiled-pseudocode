/*
 * XREFs of CleanupModuleAllocations @ 0x1C012ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 CleanupModuleAllocations()
{
  __int64 result; // rax

  if ( unk_1C0336678 )
    Win32FreePool(unk_1C0336678);
  if ( gpQmsgHistory )
  {
    Win32FreePool(gpQmsgHistory);
    gpQmsgHistory = 0LL;
  }
  if ( gpQmsgHistory2 )
  {
    Win32FreePool(gpQmsgHistory2);
    gpQmsgHistory2 = 0LL;
  }
  result = gpAtomickCheckStacks;
  if ( gpAtomickCheckStacks )
  {
    Win32FreePool(gpAtomickCheckStacks);
    result = gpAtomickCheckStacks;
    gpAtomickCheckStacks = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    result = Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  }
  return result;
}
