/*
 * XREFs of _DereferenceW32ProcessEx@8 @ 0x480CE
 * Callers:
 *     _W32pProcessCallout@4 @ 0x46322 (_W32pProcessCallout@4.c)
 *     _DereferenceW32Process@4 @ 0xECA22 (_DereferenceW32Process@4.c)
 * Callees:
 *     <none>
 */

void __fastcall DereferenceW32ProcessEx(int a1, int a2, int a3, int a4)
{
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        UserDeleteW32Process(a1);
    }
    else
    {
      PsSetProcessWin32Process(*(_DWORD *)a1, 0, a1);
      Win32FreePool(a1);
    }
  }
  JUMPOUT(0x24D9C4);
}
