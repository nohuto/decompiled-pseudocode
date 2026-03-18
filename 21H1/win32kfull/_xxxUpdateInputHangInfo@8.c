/*
 * XREFs of _xxxUpdateInputHangInfo@8 @ 0x6C0FA
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _NtUserMsgWaitForMultipleObjectsEx@20 @ 0x82980 (_NtUserMsgWaitForMultipleObjectsEx@20.c)
 *     _xxxGetInputEvent@4 @ 0x82D1E (_xxxGetInputEvent@4.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 *     _xxxSleepThreadWithPwnd@16 @ 0xAB35C (_xxxSleepThreadWithPwnd@16.c)
 *     _xxxClearWakeMask@0 @ 0x14226B (_xxxClearWakeMask@0.c)
 * Callees:
 *     _IsWindowGhosted@4 @ 0x72B34 (_IsWindowGhosted@4.c)
 *     _xxxHandleHealthyThread@4 @ 0x1707E9 (_xxxHandleHealthyThread@4.c)
 *     _xxxHandleHealthyWindow@4 @ 0x170876 (_xxxHandleHealthyWindow@4.c)
 */

int __stdcall xxxUpdateInputHangInfo(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebx
  int v5; // ecx
  _DWORD *i; // edx
  _DWORD *v8; // edx
  int v9; // esi
  unsigned int v10; // edx
  int v11; // eax
  int v12; // [esp+Ch] [ebp-4h]

  v2 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v9 = MEMORY[0xFFDF0324];
    v10 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v9 = MEMORY[0xFFDF0324];
        v10 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v2 = MEMORY[0xFFDF0004];
    }
    v3 = v2 * (v9 << 8) + (((unsigned int)v2 * (unsigned __int64)v10) >> 24);
  }
  else
  {
    v3 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  if ( a2 )
  {
    v12 = v3;
    if ( !v3 )
      v12 = -1;
  }
  else
  {
    v12 = 0;
  }
  if ( a1 )
  {
    for ( i = *(_DWORD **)(_gptiCurrent + 652); i; i = (_DWORD *)*i )
    {
      if ( i[1] != a1 )
      {
        v11 = i[2];
        if ( !v11 || (unsigned int)(v3 - v11) <= _gdwHungAppTimeout )
          continue;
      }
      i[1] = a1;
      i[2] = v12;
LABEL_15:
      v4 = 1;
      goto LABEL_16;
    }
    v4 = 0;
    v8 = (_DWORD *)Win32AllocPoolZInit(24, 1952936789);
    if ( v8 )
    {
      *v8 = *(_DWORD *)(_gptiCurrent + 652);
      v8[1] = a1;
      v8[2] = v12;
      *(_DWORD *)(_gptiCurrent + 652) = v8;
      goto LABEL_15;
    }
LABEL_16:
    if ( IsWindowGhosted(a1) )
      xxxHandleHealthyWindow(a1);
  }
  else
  {
    EtwTraceMessageCheckDelay(_gptiCurrent);
    *(_DWORD *)(_gptiCurrent + 660) = v12;
    v4 = 1;
    if ( *(int *)(_gptiCurrent + 264) < 0 )
      xxxHandleHealthyThread(_gptiCurrent);
  }
  v5 = *(_DWORD *)(_gptiCurrent + 688);
  *(_DWORD *)(_gptiCurrent + 692) &= ~4u;
  *(_DWORD *)(_gptiCurrent + 688) = v5;
  EtwTraceProcessWindowInfo(_gptiCurrent);
  return v4;
}
