/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAXXZ @ 0x180386C80
 * Callers:
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x180385934 (--1CSwitchItemGrid@@UEAA@XZ.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x180386E3C (-Reset@GridLayout@@QEAAXXZ.c)
 * Callees:
 *     ??_GGridRow@@QEAAPEAXI@Z @ 0x180385A68 (--_GGridRow@@QEAAPEAXI@Z.c)
 */

void __fastcall CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = 0LL;
      do
      {
        GridRow::`scalar deleting destructor'((GridRow *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 56LL;
      }
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
