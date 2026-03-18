/*
 * XREFs of _NtUserGetUpdatedClipboardFormats@12 @ 0x1649A2
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z @ 0x12220 (-CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?IsFmtBlocked@@YGHI@Z @ 0xF3F48 (-IsFmtBlocked@@YGHI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z @ 0x1818DE (-CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z.c)
 */

int __stdcall NtUserGetUpdatedClipboardFormats(int a1, unsigned int a2, unsigned int *a3)
{
  int v3; // esi
  struct tagWINDOWSTATION *v4; // ebx
  int v5; // eax
  unsigned int v6; // edi
  unsigned int *v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // edi
  int v11; // ecx
  _DWORD *v12; // ecx
  int v14; // [esp+24h] [ebp-24h]
  int CurrentProcessWin32Process; // [esp+28h] [ebp-20h]
  unsigned int v16; // [esp+2Ch] [ebp-1Ch]
  unsigned int v17; // [esp+58h] [ebp+10h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v3 = 0;
  EnterSharedCrit(0, 1);
  v4 = CheckClipboardAccess();
  if ( v4 )
  {
    v5 = PsGetCurrentProcessWin32Process();
    v6 = CountNumClipFormatForIL(
           (int)v4,
           (unsigned int)PsGetCurrentProcessWin32Process,
           *(_DWORD *)(v5 + 496),
           *(_DWORD *)(v5 + 500));
    v7 = a3;
    if ( (unsigned int)a3 >= _MmUserProbeAddress )
      v7 = (unsigned int *)_MmUserProbeAddress;
    *v7 = *v7;
    *a3 = v6;
    if ( a2 >= v6 )
    {
      v8 = 0;
      v9 = 0;
      v16 = 0;
      while ( 1 )
      {
        v17 = v8;
        if ( v8 >= *((_DWORD *)v4 + 17) || v9 >= a2 )
          break;
        v10 = 20 * v8;
        if ( CheckClipboardAccessForIntegrityLevel(
               *(_DWORD *)(*((_DWORD *)v4 + 16) + 20 * v8 + 12),
               *(_DWORD *)(*((_DWORD *)v4 + 16) + 20 * v8 + 16),
               *(_DWORD *)(CurrentProcessWin32Process + 496),
               *(_DWORD *)(CurrentProcessWin32Process + 500))
          || (v14 = *((_DWORD *)v4 + 16), !IsFmtBlocked(*(void **)(v14 + v10))) )
        {
          v12 = (_DWORD *)(a1 + 4 * v16);
          if ( (unsigned int)v12 >= _MmUserProbeAddress )
            v12 = (_DWORD *)_MmUserProbeAddress;
          *v12 = *v12;
          *(_DWORD *)(a1 + 4 * v16) = *(_DWORD *)(v10 + *((_DWORD *)v4 + 16));
          v9 = ++v16;
        }
        else
        {
          EtwTraceUIPIClipboardError(
            0,
            CurrentProcessWin32Process,
            v11,
            *(_DWORD *)(v14 + v10 + 12),
            *(_DWORD *)(v14 + v10 + 16));
          v9 = v16;
        }
        v8 = v17 + 1;
      }
      v3 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x7A);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
