/*
 * XREFs of CmpAbortRollbackPacket @ 0x140768310
 * Callers:
 *     CmpTryToRundownHive @ 0x140272410 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     CmpTransDereferenceTransaction @ 0x140653900 (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140710620 (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall CmpAbortRollbackPacket(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // r14d
  __int64 v5; // rbx
  int v6; // edi

  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3);
      if ( v5 )
        break;
LABEL_16:
      if ( ++v3 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v5 & 1) != 0 )
    {
      v6 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)(v5 & 0xFFFFFFFFFFFFFFFEuLL));
      if ( v6 < 0 )
        goto LABEL_10;
      CmpTransDereferenceTransaction(v5);
    }
    else
    {
      v6 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8LL * v3), 0LL);
      if ( v6 < 0 )
        goto LABEL_10;
      HalPutDmaAdapter((PADAPTER_OBJECT)v5);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3) = 0LL;
LABEL_10:
    if ( ((v6 + 1072103405) & 0xFFFFFFFC) == 0 && v6 != -1072103404 )
      v6 = 0;
    if ( v2 >= 0 && v6 < 0 )
      v2 = v6;
    goto LABEL_16;
  }
  return (unsigned int)v2;
}
