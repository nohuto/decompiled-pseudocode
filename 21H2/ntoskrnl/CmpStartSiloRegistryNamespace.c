/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1406C39CC
 * Callers:
 *     CmInitSiloNamespace @ 0x1405D2580 (CmInitSiloNamespace.c)
 *     CmInitServerSiloState @ 0x1407A5728 (CmInitServerSiloState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmpCleanupParseContext @ 0x140655A80 (CmpCleanupParseContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackExclusive @ 0x14066C138 (CmpLockKcbStackExclusive.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1406FB360 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406FB440 (CmpUnlockKcbStack.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  __int64 v2; // rcx
  struct _DMA_ADAPTER *v3; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int KeyBody; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v16[19]; // [rsp+78h] [rbp-90h] BYREF

  LOBYTE(v14) = 0;
  memset(&v15[8], 0, 32);
  *(_WORD *)&v15[10] = -1;
  memset(v16, 0, 0x128uLL);
  LODWORD(v16[6]) = -1;
  *((_QWORD *)&v16[9] + 1) = &v16[9];
  *(_QWORD *)&v16[9] = &v16[9];
  memset((char *)&v16[13] + 8, 0, 0x50uLL);
  v3 = 0LL;
  *(_QWORD *)v15 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry(v2);
  v4 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb((__int64)&v15[8], *((_QWORD *)CmpRegistryRootObject + 1), v5, v6);
  CmpLockKcbStackExclusive((__int64)&v15[8]);
  KeyBody = CmpCreateKeyBody(v4[1], 1, (__int64)&v15[8], (__int64)v15, (__int64)&v14);
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcbStack(&v15[8]);
    CmpUnlockRegistry(v9, v8);
    v10 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), *(signed __int64 *)v15, 0LL);
    v3 = (struct _DMA_ADAPTER *)(*(_QWORD *)v15 & -(__int64)(v10 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  CmpUnlockKcbStack(&v15[8]);
  CmpUnlockRegistry(v13, v12);
  v3 = *(struct _DMA_ADAPTER **)v15;
LABEL_5:
  CmpCleanupKcbStack(&v15[8]);
  CmpCleanupParseContext((__int64)v16, 0);
  if ( v3 )
    HalPutDmaAdapter(v3);
  return (unsigned int)KeyBody;
}
