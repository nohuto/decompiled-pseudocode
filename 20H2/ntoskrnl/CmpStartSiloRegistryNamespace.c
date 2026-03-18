/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1406E3CDC
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 *     CmInitServerSiloState @ 0x14079B670 (CmInitServerSiloState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackExclusive @ 0x1407022A8 (CmpLockKcbStackExclusive.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rbx
  _QWORD *v3; // rbx
  __int64 v4; // r8
  struct _LOOKASIDE_LIST_EX *v5; // r9
  int KeyBody; // edi
  signed __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v10[40]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v11[19]; // [rsp+78h] [rbp-90h] BYREF

  LOBYTE(v9) = 0;
  memset(&v10[8], 0, 32);
  *(_WORD *)&v10[10] = -1;
  memset(v11, 0, 0x128uLL);
  LODWORD(v11[6]) = -1;
  *((_QWORD *)&v11[9] + 1) = &v11[9];
  *(_QWORD *)&v11[9] = &v11[9];
  memset((char *)&v11[13] + 8, 0, 0x50uLL);
  v2 = 0LL;
  *(_QWORD *)v10 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb((__int64)&v10[8], *((_QWORD *)CmpRegistryRootObject + 1), v4, v5);
  CmpLockKcbStackExclusive(&v10[8]);
  KeyBody = CmpCreateKeyBody(v3[1], 0, (__int64)v11, 0LL, 1, (__int64)&v10[8], (ULONG_PTR **)v10, (bool *)&v9);
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcbStack((__int64)&v10[8]);
    CmpUnlockRegistry();
    v7 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), *(signed __int64 *)v10, 0LL);
    v2 = (struct _DMA_ADAPTER *)(*(_QWORD *)v10 & -(__int64)(v7 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  CmpUnlockKcbStack((__int64)&v10[8]);
  CmpUnlockRegistry();
  v2 = *(struct _DMA_ADAPTER **)v10;
LABEL_5:
  CmpCleanupKcbStack((__int64)&v10[8]);
  CmpCleanupParseContext((__int64)v11, 0);
  if ( v2 )
    HalPutDmaAdapter(v2);
  return (unsigned int)KeyBody;
}
