/*
 * XREFs of ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C00DF92C
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00DF53C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C00DF778 (-ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C02142A4 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPreviousConfigIndex(int a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax

  if ( a1 == -1 )
    return 0LL;
  v2 = a1 - 1;
  result = 1LL;
  if ( a1 )
    return v2;
  return result;
}
