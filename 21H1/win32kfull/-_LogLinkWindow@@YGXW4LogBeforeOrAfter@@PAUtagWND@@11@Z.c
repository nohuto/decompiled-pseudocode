/*
 * XREFs of ?_LogLinkWindow@@YGXW4LogBeforeOrAfter@@PAUtagWND@@11@Z @ 0x185013
 * Callers:
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

struct LINKWINDOW_LOG *__fastcall _LogLinkWindow(int a1, _DWORD *a2, int a3, int a4)
{
  struct LINKWINDOW_LOG *result; // eax
  char *v7; // esi
  unsigned int v8; // [esp+8h] [ebp-8h]
  struct LINKWINDOW_LOG *v9; // [esp+Ch] [ebp-4h]

  result = gpLinkWindowLog;
  v9 = gpLinkWindowLog;
  if ( gpLinkWindowLog )
  {
    result = (struct LINKWINDOW_LOG *)_IsTopLevelWindow(a2);
    if ( result )
    {
      if ( !a1 )
        ++giLinkWindowLogIndex;
      v8 = giLinkWindowLogIndex;
      v7 = (char *)v9 + 68 * (giLinkWindowLogIndex % guiLinkWindowLogSize);
      if ( a1 )
      {
        *((_DWORD *)v7 + 6) = a2[13];
        *((_DWORD *)v7 + 7) = a2[12];
        result = (struct LINKWINDOW_LOG *)a2[16];
        *((_DWORD *)v7 + 9) = result;
      }
      else
      {
        memset((char *)v9 + 68 * (giLinkWindowLogIndex % guiLinkWindowLogSize), 0, 0x44u);
        *(_DWORD *)v7 = v8;
        *((_DWORD *)v7 + 2) = a3;
        *((_DWORD *)v7 + 3) = a4;
        *((_DWORD *)v7 + 1) = a2;
        *((_DWORD *)v7 + 4) = a2[13];
        *((_DWORD *)v7 + 5) = a2[12];
        *((_DWORD *)v7 + 10) = _gptiCurrent;
        *((_DWORD *)v7 + 8) = a2[16];
        return (struct LINKWINDOW_LOG *)RtlWalkFrameChain((PVOID *)v7 + 11, 6u, 0x100u);
      }
    }
  }
  return result;
}
