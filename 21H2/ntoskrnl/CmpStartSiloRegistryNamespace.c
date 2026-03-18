/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x140690978
 * Callers:
 *     CmInitSiloNamespace @ 0x140690914 (CmInitSiloNamespace.c)
 *     CmInitServerSiloState @ 0x140861E8C (CmInitServerSiloState.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpLockKcbStackExclusive @ 0x14067E974 (CmpLockKcbStackExclusive.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  void *v2; // rbx
  _QWORD *v3; // rbx
  int KeyBody; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  signed __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+68h] [rbp-A0h]
  _OWORD v19[19]; // [rsp+78h] [rbp-90h] BYREF

  LOBYTE(v15) = 0;
  *(_OWORD *)v17 = 0LL;
  WORD1(v17[0]) = -1;
  v18 = 0LL;
  memset(v19, 0, 0x128uLL);
  LODWORD(v19[6]) = -1;
  *((_QWORD *)&v19[9] + 1) = &v19[9];
  *(_QWORD *)&v19[9] = &v19[9];
  memset((char *)&v19[13] + 8, 0, 0x50uLL);
  v2 = 0LL;
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb(v17, *((_QWORD *)CmpRegistryRootObject + 1));
  CmpLockKcbStackExclusive((__int64)v17);
  KeyBody = CmpCreateKeyBody(v3[1], 3, (__int64)v17, (__int64)&v16, (__int64)&v15);
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcbStack(v17);
    CmpUnlockRegistry(v6, v5, v7, v8);
    v9 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v16, 0LL);
    v2 = (void *)(v16 & -(__int64)(v9 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  CmpUnlockKcbStack(v17);
  CmpUnlockRegistry(v12, v11, v13, v14);
  v2 = (void *)v16;
LABEL_5:
  if ( *((_QWORD *)&v18 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v18 + 1));
  CmpCleanupParseContext(v19, 0LL);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)KeyBody;
}
