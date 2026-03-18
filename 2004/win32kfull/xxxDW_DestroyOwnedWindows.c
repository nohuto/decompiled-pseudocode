/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C00E77E0
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C0033524 (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *i; // rbx
  void *v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 776LL);
  v11[2] = 0LL;
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v4 = *(_QWORD *)(result + 24);
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v11;
      v11[1] = v4;
      HMLockObject(v4);
LABEL_4:
      for ( i = *(__int64 **)(v4 + 112); i; i = (__int64 *)i[11] )
      {
        if ( i[15] == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 480LL) & 1) != 0 || i != v2 )
          {
            if ( (*(_WORD *)(i[5] + 42) & 0x3FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              *(_QWORD *)(i[5] + 64) = 0LL;
              HMAssignmentUnlock(i + 15);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v10 = (void *)ReferenceDwmApiPort(v7);
                DwmAsyncOwnerChange(v10, *i, 0LL);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64) = 0LL;
          HMAssignmentUnlock(i + 15);
        }
      }
      return ThreadUnlock1(v7, v6, v8);
    }
  }
  return result;
}
