/*
 * XREFs of _RemoveHmodDependency@4 @ 0x15F1A
 * Callers:
 *     _FreeHook@4 @ 0x12EC8 (_FreeHook@4.c)
 *     _DestroyEventHook@4 @ 0x14A42 (_DestroyEventHook@4.c)
 *     __UnregisterUserApiHook@0 @ 0xD49EC (__UnregisterUserApiHook@0.c)
 *     __UnregisterDManipHook@0 @ 0x15275D (__UnregisterDManipHook@0.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x16A32 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 *     ___report_rangecheckfailure @ 0xED862 (___report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(int a1)
{
  bool v2; // zf
  unsigned int v3; // esi
  tagDomLock *v4; // [esp+4h] [ebp-4h] BYREF

  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v4);
  if ( a1 < catomSysTableEntries )
  {
    v2 = (&acatomSysDepends)[a1] == (int *)1;
    (&acatomSysDepends)[a1] = (int *)((char *)(&acatomSysDepends)[a1] - 1);
    if ( v2 )
    {
      if ( (&acatomSysUse)[a1] )
      {
        ++_gcSysExpunge;
        gdwSysExpungeMask |= 1 << a1;
      }
      else
      {
        v3 = 2 * a1;
        if ( v3 >= 0x40 )
          __report_rangecheckfailure();
        *(_WORD *)((char *)&aatomSysLoaded + v3) = 0;
      }
    }
  }
  tagDomLock::UnLockExclusive(v4);
}
