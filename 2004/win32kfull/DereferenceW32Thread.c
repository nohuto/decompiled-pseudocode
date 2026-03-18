/*
 * XREFs of DereferenceW32Thread @ 0x1C000C7D0
 * Callers:
 *     FreeW32Thread @ 0x1C000C788 (FreeW32Thread.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C000CBFC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

LONG_PTR __fastcall DereferenceW32Thread(__int64 a1)
{
  void *v1; // rsi
  void *ThreadWin32Thread; // rbx

  v1 = *(void **)a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
      PsSetThreadWin32Thread(*(_QWORD *)a1, 0LL, ThreadWin32Thread);
      Win32FreePool(a1);
      ExFreePoolWithTag(ThreadWin32Thread, 0);
    }
    else
    {
      UserDeleteW32Thread(a1);
    }
  }
  return ObfDereferenceObject(v1);
}
