/*
 * XREFs of _xxxImmActivateThreadsLayout@12 @ 0x14F6B9
 * Callers:
 *     _xxxImmActivateThreadsLayout@12 @ 0x14F6B9 (_xxxImmActivateThreadsLayout@12.c)
 *     _EditionImmActivateThreadsLayout@12 @ 0x16F276 (_EditionImmActivateThreadsLayout@12.c)
 * Callees:
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxImmActivateLayout@8 @ 0xEC868 (_xxxImmActivateLayout@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxImmActivateThreadsLayout@12 @ 0x14F6B9 (_xxxImmActivateThreadsLayout@12.c)
 */

int __fastcall xxxImmActivateThreadsLayout(LONG_PTR a1, int a2, int a3)
{
  int v4; // esi
  PKTHREAD CurrentThread; // eax
  int v6; // eax
  int v7; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // [esp+20h] [ebp-16Ch]
  _DWORD *v13; // [esp+20h] [ebp-16Ch]
  int i; // [esp+24h] [ebp-168h]
  _DWORD *v16; // [esp+28h] [ebp-164h]
  _DWORD v17[82]; // [esp+2Ch] [ebp-160h] BYREF
  CPPEH_RECORD ms_exc; // [esp+174h] [ebp-18h]

  memset(v17, 0, 0x144u);
  v4 = 0;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  while ( a1 )
  {
    v6 = *(_DWORD *)(a1 + 240);
    if ( v6 != a3 && (*(_BYTE *)(a1 + 264) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 436) )
      {
        v7 = 5 * v4;
        LockW32Thread(a1, &v17[v7 + 2]);
        v17[v7 + 1] = a1;
        v4 = v12 + 1;
        v12 = v4;
        if ( v4 == 16 )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 444) = *(_DWORD *)(v6 + 20);
        HMAssignmentLock(a1 + 240, a3);
        if ( *(_DWORD *)(a1 + 440) )
        {
          ms_exc.registration.TryLevel = 0;
          **(_DWORD **)(a1 + 260) |= 0x40u;
          ms_exc.registration.TryLevel = -2;
        }
        ms_exc.registration.TryLevel = 1;
        *(_DWORD *)(*(_DWORD *)(a1 + 260) + 100) = *(_DWORD *)(a3 + 20);
        *(_WORD *)(*(_DWORD *)(a1 + 260) + 104) = *(_WORD *)(a3 + 40);
        ms_exc.registration.TryLevel = -2;
      }
    }
    a1 = *(_DWORD *)(a1 + 364);
  }
  if ( a2 )
    goto LABEL_15;
  if ( !a1 )
  {
    if ( !v4 )
      return 0;
LABEL_15:
    if ( !a1 )
      goto LABEL_18;
  }
  if ( *(_DWORD *)(a1 + 364) )
  {
    v17[0] = a2;
    return xxxImmActivateThreadsLayout(a3);
  }
LABEL_18:
  v17[0] = a2;
  v9 = v17;
  while ( 1 )
  {
    v16 = v9;
    if ( !v9 )
      break;
    for ( i = v4 - 1; i >= 0; --i )
    {
      v10 = &v16[5 * i];
      v13 = v10;
      v11 = v10[1];
      if ( (*(_BYTE *)(v11 + 264) & 1) == 0 )
      {
        xxxImmActivateLayout(v10[1], a3);
        if ( (*(_BYTE *)(v11 + 264) & 1) == 0 )
        {
          ms_exc.registration.TryLevel = 2;
          *(_DWORD *)(*(_DWORD *)(v11 + 260) + 100) = *(_DWORD *)(a3 + 20);
          *(_WORD *)(*(_DWORD *)(v11 + 260) + 104) = *(_WORD *)(a3 + 40);
          ms_exc.registration.TryLevel = -2;
        }
      }
      PopAndFreeW32ThreadLock((int)(v13 + 2));
    }
    v9 = (_DWORD *)*v16;
    v4 = 16;
  }
  return 1;
}
