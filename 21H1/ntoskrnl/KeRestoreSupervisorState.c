/*
 * XREFs of KeRestoreSupervisorState @ 0x1405143A0
 * Callers:
 *     KiFreezeTargetExecution @ 0x140518360 (KiFreezeTargetExecution.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1409A96AC (IopLiveDumpProcessCorralStateChange.c)
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 * Callees:
 *     RtlXRestoreS @ 0x14037EEF8 (RtlXRestoreS.c)
 *     KiRestoreIptState @ 0x1405148F0 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KeRestoreSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax

  if ( a1 )
  {
    v2 = a2 & 0x100;
    if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000005F0] )
      result = RtlXRestoreS(a1 - 512, a2 & MEMORY[0xFFFFF780000005F0]);
    if ( (_DWORD)KiIptMsrMask )
    {
      if ( v2 )
        return KiRestoreIptState(a1 + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8] + 64);
    }
  }
  return result;
}
