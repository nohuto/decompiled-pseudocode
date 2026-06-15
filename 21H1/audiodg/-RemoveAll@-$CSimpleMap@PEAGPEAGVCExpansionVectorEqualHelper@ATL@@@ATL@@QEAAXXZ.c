/*
 * XREFs of ?RemoveAll@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAXXZ @ 0x140056718
 * Callers:
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140053044 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140053FFC (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    free(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
