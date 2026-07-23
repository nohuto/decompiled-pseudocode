/*
 * XREFs of KiRestoreIptState @ 0x14051A5F0
 * Callers:
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x140383704 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeRestoreSupervisorState @ 0x14051A0A0 (KeRestoreSupervisorState.c)
 *     KiRestoreThreadIptState @ 0x14051A6E0 (KiRestoreThreadIptState.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiRestoreIptState(unsigned __int64 *a1)
{
  int v1; // r10d
  unsigned __int64 *v2; // r8
  unsigned __int64 *v3; // r8
  unsigned int i; // r9d
  unsigned __int64 result; // rax

  v1 = 0;
  if ( KiXSaveAreaLength )
  {
    v2 = a1 + 1;
    if ( (KiIptMsrMask & 2) != 0 )
    {
      __writemsr(0x560u, *v2);
      v2 = a1 + 2;
    }
    if ( (KiIptMsrMask & 4) != 0 )
      __writemsr(0x561u, *v2++);
    __writemsr(0x571u, *v2);
    v3 = v2 + 1;
    if ( (KiIptMsrMask & 0x10) != 0 )
      __writemsr(0x572u, *v3++);
    for ( i = 1409; i < 0x589; i += 2 )
    {
      if ( !_bittest((const signed __int32 *)&KiIptMsrMask, v1 + 5) )
        break;
      __writemsr(i - 1, *v3);
      __writemsr(i, v3[1]);
      v3 += 2;
      ++v1;
    }
    result = *a1;
    __writemsr(0x570u, *a1);
  }
  return result;
}
