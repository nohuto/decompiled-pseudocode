/*
 * XREFs of wil::details::ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___::_ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___ @ 0x180404B10
 * Callers:
 *     _ScreenManager::GetAppViewCloseOverrideOperation_::_1_::dtor$0 @ 0x1804050F7 (_ScreenManager--GetAppViewCloseOverrideOperation_--_1_--dtor$0.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1804059B8 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___::_ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll(*(_QWORD *)a1 + 312LL);
  }
  return result;
}
