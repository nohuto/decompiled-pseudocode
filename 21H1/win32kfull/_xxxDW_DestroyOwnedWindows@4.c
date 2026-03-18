/*
 * XREFs of _xxxDW_DestroyOwnedWindows@4 @ 0x7315A
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _IsGhostWindow@4 @ 0x72B1C (_IsGhostWindow@4.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 */

int __thiscall xxxDW_DestroyOwnedWindows(struct tagVWPL *this)
{
  struct tagVWPL **v2; // eax
  int result; // eax
  int v4; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagVWPL **i; // esi
  _DWORD v8[3]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+10h] [ebp-8h]
  struct tagVWPL **v10; // [esp+14h] [ebp-4h]

  v2 = *(struct tagVWPL ***)(*((_DWORD *)this + 2) + 436);
  v8[2] = 0;
  v10 = v2;
  result = *((_DWORD *)this + 3);
  if ( result )
  {
    result = *(_DWORD *)(result + 4);
    v4 = *(_DWORD *)(result + 12);
    v9 = v4;
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v8;
      v8[1] = v4;
      HMLockObject(v4);
      for ( i = *(struct tagVWPL ***)(v4 + 60); ; i = *(struct tagVWPL ***)(v9 + 60) )
      {
        while ( 1 )
        {
          if ( !i )
            return ThreadUnlock1();
          if ( i[16] == this )
            break;
LABEL_9:
          i = (struct tagVWPL **)i[12];
        }
        if ( (*_gpsi & 4) != 0 && (*(_BYTE *)(*((_DWORD *)this + 2) + 264) & 1) == 0 && i == v10 )
        {
          *((_DWORD *)i[5] + 10) = 0;
          HMAssignmentUnlock(i + 16);
          goto LABEL_9;
        }
        if ( IsGhostWindow(i) || !xxxDestroyWindow(i) )
        {
          *((_DWORD *)i[5] + 10) = 0;
          HMAssignmentUnlock(i + 16);
          if ( IsWindowDesktopComposed(i) )
          {
            ReferenceDwmApiPort();
            DwmAsyncOwnerChange(0);
          }
        }
      }
    }
  }
  return result;
}
