/*
 * XREFs of KiKernelSysretExit @ 0x140A16DC0
 * Callers:
 *     KiCallUserMode @ 0x1404024B0 (KiCallUserMode.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiUmsFastReturnToUser @ 0x140413200 (KiUmsFastReturnToUser.c)
 * Callees:
 *     <none>
 */

void KiKernelSysretExit()
{
  unsigned int ShadowFlags; // esp
  unsigned __int64 UserDirectoryTableBase; // rbp
  char v2; // sp
  char v3; // sp

  ShadowFlags = KeGetPcr()->Prcb.ShadowFlags;
  if ( (ShadowFlags & 2) == 0 )
  {
    UserDirectoryTableBase = KeGetCurrentThread()->Process->UserDirectoryTableBase;
    if ( (UserDirectoryTableBase & 1) != 0 )
    {
      if ( (v2 & 1) != 0 )
        __writegsdword(0x9018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
      else
        UserDirectoryTableBase |= 0x8000000000000000uLL;
    }
    __writecr3(UserDirectoryTableBase);
  }
  if ( (v3 & 2) == 0 )
    __asm { verw    word ptr gs:902Ah }
  __asm
  {
    swapgs
    sysret
  }
}
