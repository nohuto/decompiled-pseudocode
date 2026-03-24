/*
 * XREFs of VidSchiHandleControlEvent @ 0x1C00CFE88
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C0080820 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchFlushAdapter @ 0x1C00D1510 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C0090A04 (VidSchiSetSchedulerStatus.c)
 *     VidSchiResume @ 0x1C00D0438 (VidSchiResume.c)
 *     VidSchFlushAdapter @ 0x1C00D1510 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00D2C00 (VidSchTerminateAdapter.c)
 */

LONG __fastcall VidSchiHandleControlEvent(struct _VIDSCH_GLOBAL *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  LONG result; // eax

  v1 = *((_DWORD *)a1 + 77);
  if ( *((_DWORD *)a1 + 76) != v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          *((_DWORD *)a1 + 729) = 3;
          VidSchFlushAdapter(a1);
          return VidSchiSetSchedulerStatus((__int64)a1, 3, 1);
        }
      }
      else
      {
        return VidSchTerminateAdapter(a1);
      }
    }
    else
    {
      return VidSchiResume();
    }
  }
  return result;
}
