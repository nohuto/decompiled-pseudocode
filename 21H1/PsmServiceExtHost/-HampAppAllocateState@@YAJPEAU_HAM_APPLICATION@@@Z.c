/*
 * XREFs of ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x180026E40
 * Callers:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180026DA8 (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180026EB0 (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 */

__int64 __fastcall HampAppAllocateState(struct _HAM_APPLICATION *a1)
{
  int TerminateReason; // edx
  __int16 v4; // [rsp+30h] [rbp+8h] BYREF

  TerminateReason = TpAllocWork((char *)a1 + 560, HampAppInterruptiveUIChangeWorker, a1, 0LL);
  if ( TerminateReason >= 0 )
  {
    TerminateReason = HampAppQueryTerminateReason(a1, (enum _HAM_TERMINATE_REASON *)&v4);
    if ( (int)(TerminateReason + 0x80000000) < 0 || TerminateReason == -1073283070 )
    {
      TerminateReason = 0;
      *((_WORD *)a1 + 304) = v4;
    }
  }
  return (unsigned int)TerminateReason;
}
