/*
 * XREFs of CleanupModuleAllocations @ 0x1C012CB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 CleanupModuleAllocations()
{
  __int64 result; // rax

  if ( unk_1C0335698 )
    Win32FreePool(unk_1C0335698);
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
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
  }
  return result;
}
