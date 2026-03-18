/*
 * XREFs of ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C006B350
 * Callers:
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C006ABE8 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C006AD04 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C006B264 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C006B2F0 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C006B318 (-ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C006B3A8 (-Reset@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectCompos.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  char i; // si
  __int64 v6; // rcx

  v2 = 0LL;
  for ( i = a2; (unsigned int)v2 < *(_DWORD *)(a1 + 8); v2 = (unsigned int)(v2 + 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v2);
    if ( v6 )
      Win32FreePool(v6);
  }
  LOBYTE(a2) = i;
  return CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
           a1,
           a2);
}
