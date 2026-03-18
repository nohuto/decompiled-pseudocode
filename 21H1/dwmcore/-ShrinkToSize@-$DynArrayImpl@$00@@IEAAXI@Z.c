/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18009FEC0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180042060 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800B59E0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180158E84 (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180159EF0 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801AF320 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x1801BD7D4 (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800A09AC (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 */

void __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  int v5; // eax
  void *v6; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v5 = *(_DWORD *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = v5;
        return;
      }
      v6 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v6 )
      {
        *(_QWORD *)a1 = v6;
        v5 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
}
