/*
 * XREFs of _vEnableSynchronize@4 @ 0xAD9DA
 * Callers:
 *     <none>
 * Callees:
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     _UserSetTimer@8 @ 0x1A5A50 (_UserSetTimer@8.c)
 */

void __stdcall vEnableSynchronize(int a1)
{
  int v2; // ebx
  volatile unsigned int *v3; // [esp+0h] [ebp-8h]
  unsigned int v4; // [esp+4h] [ebp-4h]
  char v5; // [esp+13h] [ebp+Bh]

  v2 = *(_DWORD *)(a1 + 1416);
  if ( (v2 & 0xC0) != 0 )
  {
    if ( UserIsUserCritSecIn() )
    {
      v5 = 0;
    }
    else
    {
      v5 = 1;
      UserEnterUserCritSec();
    }
    if ( (v2 & 0x80u) != 0 && !++gcSynchronizeTimer )
      gidSynchronizeTimer = UserSetTimer();
    if ( (v2 & 0x40) != 0 )
      ++gcSynchronizeFlush;
    SETFLAG((volatile signed __int32 *)(a1 + 24), 1, 2048, v3, v4);
    if ( v5 )
      UserLeaveUserCritSec();
  }
}
