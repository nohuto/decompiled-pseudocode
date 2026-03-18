/*
 * XREFs of ResFwBackgroundTransition @ 0x1409F6408
 * Callers:
 *     BgpFwLibraryEnable @ 0x14039BFB8 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x1409F6F0C (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x1409F6FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x1409F4470 (ResFwpPageOutBackground.c)
 *     ResFwpPageInBackground @ 0x1409F644C (ResFwpPageInBackground.c)
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
      if ( v1 == 1 && (dword_140C13330 & 0xC00) != 0xC00 )
      {
        v2 = qword_140C13378;
        if ( qword_140C13378 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13378, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140C13380;
        if ( qword_140C13380 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13380, 0LL);
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
