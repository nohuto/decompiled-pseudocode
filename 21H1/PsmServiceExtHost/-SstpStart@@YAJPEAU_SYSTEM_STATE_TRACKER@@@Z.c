/*
 * XREFs of ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18003F058
 * Callers:
 *     SystemStateTrackerStart @ 0x18003EFFC (SystemStateTrackerStart.c)
 * Callees:
 *     ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x18003F260 (-SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z.c)
 */

__int64 __fastcall SstpStart(struct _SYSTEM_STATE_TRACKER *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 result; // rax

  v1 = *((_DWORD *)a1 + 54);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = 32LL * v2;
      if ( (*((_BYTE *)a1 + v4 + 40) & 1) != 0 )
      {
        result = RtlQueryWnfStateData(
                   (char *)a1 + v4 + 44,
                   *(_QWORD *)((char *)a1 + v4 + 24),
                   SstpStateChangeTriage,
                   a1,
                   0LL);
        if ( (int)result < 0 )
          break;
      }
      v1 = *((_DWORD *)a1 + 54);
      if ( ++v2 >= v1 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0;
    if ( v1 )
    {
      while ( 1 )
      {
        result = RtlSubscribeWnfStateChangeNotification(
                   (char *)a1 + 32 * v5 + 48,
                   *((_QWORD *)a1 + 4 * v5 + 3),
                   *((unsigned int *)a1 + 8 * v5 + 11),
                   SstpOnStateChanged,
                   a1,
                   0LL,
                   0,
                   0);
        if ( (int)result < 0 )
          break;
        if ( ++v5 >= *((_DWORD *)a1 + 54) )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      RtlAcquireSRWLockExclusive(a1);
      *((_DWORD *)a1 + 2) = GetCurrentThreadId();
      *((_DWORD *)a1 + 5) |= 1u;
      *((_DWORD *)a1 + 4) = 1;
      SstpPublish(a1);
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
      return 0LL;
    }
  }
  return result;
}
