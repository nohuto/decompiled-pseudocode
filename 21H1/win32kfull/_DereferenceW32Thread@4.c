/*
 * XREFs of _DereferenceW32Thread@4 @ 0x42CB6
 * Callers:
 *     _FreeW32Thread@4 @ 0x43994 (_FreeW32Thread@4.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 */

LONG_PTR __stdcall DereferenceW32Thread(int a1)
{
  void *v1; // ebx
  void *ThreadWin32Thread; // esi

  v1 = *(void **)a1;
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
      PsSetThreadWin32Thread(*(_DWORD *)a1, 0, ThreadWin32Thread);
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
