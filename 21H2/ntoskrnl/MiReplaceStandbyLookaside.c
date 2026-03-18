/*
 * XREFs of MiReplaceStandbyLookaside @ 0x1402E8AA0
 * Callers:
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiLockStandbyLookasidePage @ 0x14038E94C (MiLockStandbyLookasidePage.c)
 *     MiLockStandbyOldestPage @ 0x14038ECAC (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiGetStandbyLookaside @ 0x1402C14C0 (MiGetStandbyLookaside.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402E901C (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402E9070 (MiFindSuitableLookasideReplacement.c)
 *     MiPageStandbyLookasideStatus @ 0x1402E9490 (MiPageStandbyLookasideStatus.c)
 *     MiPfnToStandbyLookaside @ 0x140339140 (MiPfnToStandbyLookaside.c)
 */

__int64 __fastcall MiReplaceStandbyLookaside(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rcx
  int i; // esi
  __int64 v10; // r14
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v6 = 48 * a1;
  result = MiPageStandbyLookasideStatus();
  if ( (_DWORD)result != 1 )
  {
    MiPfnToStandbyLookaside(v8, 0LL, v13);
    for ( i = 0; i < 3; ++i )
    {
      result = MiGetStandbyLookaside((__int64 *)v13, i);
      v10 = result;
      v11 = 0LL;
      v12 = (_QWORD *)result;
      while ( *v12 != a1 )
      {
        if ( v12[1] == a1 )
        {
          v11 = (unsigned int)(v11 + 1);
          goto LABEL_9;
        }
        if ( v12[2] == a1 )
        {
          v11 = (unsigned int)(v11 + 2);
          goto LABEL_9;
        }
        if ( v12[3] == a1 )
        {
          v11 = (unsigned int)(v11 + 3);
LABEL_9:
          if ( (_DWORD)v11 == 64 )
            goto LABEL_10;
          break;
        }
        v12 += 4;
        v11 = (unsigned int)(v11 + 4);
        if ( (unsigned int)v11 >= 0x40 )
          goto LABEL_9;
      }
      if ( a2 != -1 || (result = MiFindSuitableLookasideReplacement(i, result, v11, v6, a3), !(_DWORD)result) )
        result = MiWriteStandbyLookasideEntry(v10 + 8 * v11, 3LL, a2);
LABEL_10:
      ;
    }
  }
  return result;
}
