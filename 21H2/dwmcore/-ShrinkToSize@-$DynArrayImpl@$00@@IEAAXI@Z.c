/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800DC2C8
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x1800508CC (-FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005E6E4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x1800790F0 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18019378C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1801FDC0C (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801FDE30 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x18020C48C (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18003AF88 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

void __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  int v5; // eax
  LPVOID v6; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        DefaultHeap::Free(*(void **)a1);
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
