/*
 * XREFs of ResFwBackgroundTransition @ 0x1409F0408
 * Callers:
 *     BgpFwLibraryEnable @ 0x140399AF8 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x1409EE224 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x1409F0F0C (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x1409EE470 (ResFwpPageOutBackground.c)
 *     ResFwpPageInBackground @ 0x1409F044C (ResFwpPageInBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_140C13310 & 0xC00) != 0xC00 )
      {
        v2 = qword_140C13358;
        if ( qword_140C13358 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13358, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140C13360;
        if ( qword_140C13360 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13360, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else
  {
    ResFwpPageInBackground();
  }
}
