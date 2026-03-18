/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0095968
 * Callers:
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C00958B0 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0095910 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  if ( (_BYTE)a2 )
  {
    v4 = *(_QWORD *)a1;
    if ( v4 )
    {
      Win32FreePool(v4, a2, a3);
      *(_QWORD *)a1 = 0LL;
    }
    *(_DWORD *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = 0;
}
