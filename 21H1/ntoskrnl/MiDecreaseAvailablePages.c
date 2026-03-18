/*
 * XREFs of MiDecreaseAvailablePages @ 0x140224310
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x140223EC0 (MiUnlinkNodeLargePageHelper.c)
 *     MiReplenishPageSlist @ 0x1402EA3B0 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiPageAvailableEx @ 0x1402243F4 (MiPageAvailableEx.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x1403ACE14 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x140535A64 (MiObtainFreePages.c)
 */

__int64 __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v12; // rax

  if ( a2 == 1 )
  {
    v9 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 7104));
    if ( v9 == *(_QWORD *)(a1 + 5168) || v9 == *(_QWORD *)(a1 + 5176) )
      MiUpdateAvailableEvents(a1);
    v7 = v9 + 1;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), -a2);
    v8 = *(_QWORD *)(a1 + 5176);
    v9 = v7 - a2;
    if ( v7 - a2 <= v8 && v7 > v8 || (v10 = *(_QWORD *)(a1 + 5168), v9 <= v10) && v7 > v10 )
      MiUpdateAvailableEvents(a1);
  }
  if ( v9 <= 0x420 )
  {
    v12 = *(_QWORD *)(a1 + 6848);
    if ( !v12 || !*(_BYTE *)(v12 + 52) )
      MiObtainFreePages(a1);
    if ( v9 < 0xA0 && v7 >= 0xA0 && *(_DWORD *)(a1 + 1160) )
      KeSetEvent((PRKEVENT)(a1 + 1008), 0, 0);
  }
  if ( a3 == -1LL )
    return MiPageAvailableEx(a1, v9, a4);
  else
    return v9 >= a3;
}
