/*
 * XREFs of _W32pThreadCallout@8 @ 0x464C8
 * Callers:
 *     <none>
 * Callees:
 *     _FreeW32Thread@4 @ 0x43994 (_FreeW32Thread@4.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _AllocateW32Thread@4 @ 0x46666 (_AllocateW32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall W32pThreadCallout(void *a1, int a2)
{
  int W32Thread; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edi

  if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    if ( a2 || (W32Thread = AllocateW32Thread(a1), W32Thread >= 0) )
    {
      W32Thread = DCompositionThreadCallout(a1, a2);
      if ( W32Thread >= 0 )
      {
        W32Thread = GdiThreadCallout(a1, a2);
        if ( W32Thread >= 0 )
        {
          W32Thread = UserThreadCallout(a1, a2);
          if ( W32Thread >= 0 )
          {
            W32Thread = 0;
            if ( !a2 )
              return W32Thread;
          }
          if ( !a2 )
          {
            if ( W32Thread >= 0 )
              return W32Thread;
            GdiThreadCalloutCleanup(a1);
          }
        }
      }
      if ( a2 == 1 || W32Thread < 0 )
        FreeW32Thread(a1);
      return W32Thread;
    }
    UserSetLastError(8);
    return W32Thread;
  }
  v4 = 0;
  if ( !a2 )
    v4 = AllocateW32Thread(a1);
  v5 = GdiThreadCallout(a1, a2);
  v6 = v5;
  if ( a2 )
  {
LABEL_18:
    if ( a2 != 1 )
      return v6;
LABEL_20:
    FreeW32Thread(a1);
    return v6;
  }
  if ( v4 >= 0 )
  {
    if ( v5 < 0 )
      goto LABEL_20;
    goto LABEL_18;
  }
  return v6;
}
