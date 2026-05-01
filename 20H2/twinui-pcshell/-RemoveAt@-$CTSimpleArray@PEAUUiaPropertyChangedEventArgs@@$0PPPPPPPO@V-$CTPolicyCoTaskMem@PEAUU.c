/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardCompareHelper@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardMergeHelper@PEAUUiaPropertyChangedEventArgs@@@@@@QEAAJ_K@Z @ 0x180419B88
 * Callers:
 *     ?AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z @ 0x18041932C (-AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z.c)
 *     ?ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z @ 0x1804198C0 (-ProcessPendingNotifications@AppResizeAcc@@AEAAX_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800F03F3 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<UiaPropertyChangedEventArgs *,4294967294,CTPolicyCoTaskMem<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardCompareHelper<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardMergeHelper<UiaPropertyChangedEventArgs *>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = a1[1];
  if ( a2 >= v2 )
    return 2147650721LL;
  if ( a2 != v2 - 1 )
  {
    memmove_0((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v2 - a2) - 8);
    v2 = a1[1];
  }
  a1[1] = v2 - 1;
  return 0LL;
}
