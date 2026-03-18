/*
 * XREFs of DereferenceW32ProcessEx @ 0x1C000CE2C
 * Callers:
 *     DereferenceW32Process @ 0x1C000A720 (DereferenceW32Process.c)
 *     W32pProcessCallout @ 0x1C000C880 (W32pProcessCallout.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceW32ProcessEx(__int64 a1, int a2)
{
  void *v2; // rdi

  v2 = *(void **)a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        UserDeleteW32Process();
    }
    else
    {
      PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
      Win32FreePool(a1);
    }
  }
  return ObfDereferenceObject(v2);
}
