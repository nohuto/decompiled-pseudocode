/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C00962DC
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C009542C (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = a2;
  Win32FreePool(*(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)a2), a2, a3);
  if ( v4 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v5 = v4++;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v4);
    }
    while ( v4 < *(_DWORD *)(a1 + 8) );
  }
}
