/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1C002FBF0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0147884 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this, __int64 a2, int a3)
{
  __int64 v3; // rcx

  if ( *(_QWORD *)this )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer((_DWORD)this, (unsigned int)&LockRelease, a3, (__int64)ghsemSprite);
    if ( ghsemSprite )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
      PsLeavePriorityRegion(v3);
    }
  }
}
