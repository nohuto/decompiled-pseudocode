/*
 * XREFs of PopUserPresentOverride @ 0x1408F1F90
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x140711F10 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140712000 (PopAcquireAdaptiveLock.c)
 *     PopEvaluateGlobalUserStatus @ 0x140712414 (PopEvaluateGlobalUserStatus.c)
 */

__int64 __fastcall PopUserPresentOverride(char a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  PopAcquireAdaptiveLock(1);
  v2 = 0;
  if ( a1 )
  {
    v3 = PopUserPresentOverrideCount + 1;
  }
  else
  {
    if ( !PopUserPresentOverrideCount )
    {
      v2 = -1073741811;
      goto LABEL_11;
    }
    v3 = PopUserPresentOverrideCount - 1;
  }
  PopUserPresentOverrideCount = v3;
  if ( v3 == 1 && a1 || !v3 && !a1 )
    PopEvaluateGlobalUserStatus();
LABEL_11:
  PopReleaseAdaptiveLock();
  return v2;
}
