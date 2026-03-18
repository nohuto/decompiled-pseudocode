/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x1406A1FF0
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A1F14 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406A42E0 (CmpCleanupLightWeightUoWData.c)
 */

void __fastcall CmpCleanupLightWeightPrepare(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 NextElement; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v7 = 0LL;
    v3 = a1 + 16;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v3, &v7, 0LL);
      if ( !NextElement )
        break;
      CmpCleanupLightWeightUoWData(NextElement, v6, a3);
    }
  }
}
