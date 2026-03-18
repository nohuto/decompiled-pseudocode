/*
 * XREFs of ?CleanupPvtData@@YGXPAVPFF@@@Z @ 0x22150D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CleanupPvtData(struct PFF *a1)
{
  HANDLE CurrentThreadId; // eax
  int v2; // edx
  int i; // ecx

  CurrentThreadId = PsGetCurrentThreadId();
  v2 = *((_DWORD *)a1 + 23);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 8) & 4) != 0 && *(HANDLE *)(v2 + 12) == CurrentThreadId )
    {
      *((_DWORD *)a1 + 23) = *(_DWORD *)(v2 + 16);
      Win32FreePool((PATHOBJ *)v2);
    }
    else
    {
      for ( i = *(_DWORD *)(v2 + 16); i; i = *(_DWORD *)(i + 16) )
      {
        if ( (*(_BYTE *)(i + 8) & 4) != 0 && *(HANDLE *)(i + 12) == CurrentThreadId )
        {
          *(_DWORD *)(v2 + 16) = *(_DWORD *)(i + 16);
          Win32FreePool((PATHOBJ *)i);
          return;
        }
        v2 = i;
      }
    }
  }
}
