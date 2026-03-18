/*
 * XREFs of W32pThreadCallout @ 0x1C000CB00
 * Callers:
 *     <none>
 * Callees:
 *     FreeW32Thread @ 0x1C000C788 (FreeW32Thread.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C000CBFC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     AllocateW32Thread @ 0x1C000CD5C (AllocateW32Thread.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  int v4; // edi
  int W32Thread; // ebp
  int v7; // eax

  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    W32Thread = 0;
    if ( !a2 )
      W32Thread = AllocateW32Thread(a1);
    v7 = GdiThreadCallout(a1, a2);
    v4 = v7;
    if ( a2 )
      goto LABEL_18;
    if ( W32Thread < 0 )
      return (unsigned int)v4;
    if ( v7 >= 0 )
    {
LABEL_18:
      if ( a2 != 1 )
        return (unsigned int)v4;
    }
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v4 = AllocateW32Thread(a1);
    if ( v4 < 0 )
    {
      UserSetLastError(8LL);
      return (unsigned int)v4;
    }
  }
  v4 = DCompositionThreadCallout(a1, a2);
  if ( v4 >= 0 )
  {
    v4 = GdiThreadCallout(a1, a2);
    if ( v4 >= 0 )
    {
      v4 = UserThreadCallout(a1, a2);
      if ( v4 >= 0 )
      {
        v4 = 0;
        if ( !a2 )
          return (unsigned int)v4;
      }
      if ( !a2 )
      {
        if ( v4 >= 0 )
          return (unsigned int)v4;
        GdiThreadCalloutCleanup(a1);
      }
    }
  }
  if ( a2 == 1 || v4 < 0 )
LABEL_12:
    FreeW32Thread(a1);
  return (unsigned int)v4;
}
