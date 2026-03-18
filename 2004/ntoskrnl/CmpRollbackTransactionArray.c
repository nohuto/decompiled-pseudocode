/*
 * XREFs of CmpRollbackTransactionArray @ 0x140871C40
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpParseKey @ 0x1405EE060 (CmpParseKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     CmpTransDereferenceTransaction @ 0x140653900 (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140710620 (CmpRollbackLightWeightTransaction.c)
 *     CmpRetryBackOff @ 0x140871C08 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PADAPTER_OBJECT *a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebp
  PADAPTER_OBJECT *v8; // rsi
  __int64 v9; // r15
  PADAPTER_OBJECT v10; // rbx
  struct _KENLISTMENT *v11; // rcx
  int v12; // edi

  v4 = 0;
  if ( a1 )
  {
    v8 = a2;
    v9 = a1;
    do
    {
      v10 = *v8;
      v11 = (struct _KENLISTMENT *)*v8;
      if ( ((unsigned __int8)*v8 & 1) != 0 )
      {
        v12 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFEuLL));
        CmpTransDereferenceTransaction((__int64)v10);
      }
      else
      {
        v12 = TmRollbackEnlistment(v11, 0LL);
        HalPutDmaAdapter(*v8);
      }
      if ( v12 < 0 && v4 >= 0 && (((v12 + 1072103405) & 0xFFFFFFFC) != 0 || v12 == -1072103404) )
        v4 = v12;
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  if ( a1 )
    ExFreePoolWithTag(a2, 0x36344D43u);
  CmpRetryBackOff(a4);
  return (unsigned int)v4;
}
