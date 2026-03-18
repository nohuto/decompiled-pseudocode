/*
 * XREFs of __GetPriorityClipboardFormat@8 @ 0x182ECD
 * Callers:
 *     _NtUserGetPriorityClipboardFormat@8 @ 0x1641D6 (_NtUserGetPriorityClipboardFormat@8.c)
 * Callees:
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?IsFmtBlocked@@YGHI@Z @ 0xF3F48 (-IsFmtBlocked@@YGHI@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z @ 0x1818DE (-CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z.c)
 */

int __fastcall _GetPriorityClipboardFormat(void **a1, int a2)
{
  struct tagWINDOWSTATION *v3; // eax
  struct tagWINDOWSTATION *v4; // ebx
  void **v5; // ecx
  void *v6; // esi
  void **v7; // edi
  int v8; // eax
  int CurrentProcessWin32Process; // eax
  int v10; // eax
  void *v12; // [esp-8h] [ebp-1Ch]
  void *v13; // [esp-4h] [ebp-18h]
  int v14; // [esp+Ch] [ebp-8h]

  v3 = CheckClipboardAccess();
  v4 = v3;
  if ( !v3 || !*((_DWORD *)v3 + 17) || !*((_DWORD *)v3 + 16) )
    return 0;
  if ( a2 > 0 )
  {
    v5 = a1;
    do
    {
      v14 = a2 - 1;
      v6 = *v5;
      if ( *v5 )
      {
        v7 = (void **)*((_DWORD *)v4 + 16);
        v8 = *((_DWORD *)v4 + 17);
        while ( v8 )
        {
          --v8;
          if ( *v7 == v6 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
            if ( !CheckClipboardAccessForIntegrityLevel(
                    (int)v7[3],
                    (int)v7[4],
                    *(_DWORD *)(CurrentProcessWin32Process + 496),
                    *(_DWORD *)(CurrentProcessWin32Process + 500))
              && IsFmtBlocked(v6) )
            {
              v13 = v7[4];
              v12 = v7[3];
              v10 = PsGetCurrentProcessWin32Process();
              EtwTraceUIPIClipboardError(0, v10, v6, v12, v13);
              v5 = a1;
              break;
            }
            return (int)v6;
          }
          v7 += 5;
        }
      }
      a2 = v14;
      a1 = ++v5;
    }
    while ( v14 > 0 );
  }
  return -1;
}
