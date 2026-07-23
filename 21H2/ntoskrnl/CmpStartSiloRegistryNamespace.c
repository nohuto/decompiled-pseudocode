/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1406225AC
 * Callers:
 *     CmInitSiloNamespace @ 0x1405D2580 (CmInitSiloNamespace.c)
 *     CmInitServerSiloState @ 0x1407A5928 (CmInitServerSiloState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackExclusive @ 0x140660F58 (CmpLockKcbStackExclusive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140712740 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rbx
  _QWORD *v3; // rbx
  int KeyBody; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  signed __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v13[19]; // [rsp+78h] [rbp-90h] BYREF

  LOBYTE(v11) = 0;
  memset(&v12[8], 0, 32);
  *(_WORD *)&v12[10] = -1;
  memset(v13, 0, 0x128uLL);
  LODWORD(v13[6]) = -1;
  *((_QWORD *)&v13[9] + 1) = &v13[9];
  *(_QWORD *)&v13[9] = &v13[9];
  memset((char *)&v13[13] + 8, 0, 0x50uLL);
  v2 = 0LL;
  *(_QWORD *)v12 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb(&v12[8], *((_QWORD *)CmpRegistryRootObject + 1));
  CmpLockKcbStackExclusive(&v12[8]);
  KeyBody = CmpCreateKeyBody(v3[1], 1, (__int64)&v12[8], (__int64)v12, (__int64)&v11);
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcbStack(&v12[8]);
    CmpUnlockRegistry(v6, v5);
    v7 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), *(signed __int64 *)v12, 0LL);
    v2 = (struct _DMA_ADAPTER *)(*(_QWORD *)v12 & -(__int64)(v7 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  CmpUnlockKcbStack(&v12[8]);
  CmpUnlockRegistry(v10, v9);
  v2 = *(struct _DMA_ADAPTER **)v12;
LABEL_5:
  CmpCleanupKcbStack(&v12[8]);
  CmpCleanupParseContext(v13, 0LL);
  if ( v2 )
    HalPutDmaAdapter(v2);
  return (unsigned int)KeyBody;
}
