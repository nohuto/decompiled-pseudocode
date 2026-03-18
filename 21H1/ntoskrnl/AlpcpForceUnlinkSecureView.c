/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x1408BEC20
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1406604DC (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     AlpcpUnlockBlob @ 0x14060CF00 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064942C (AlpcpLockForCachedReferenceBlob.c)
 */

void __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  _KPROCESS *v2; // rsi
  ULONG_PTR v3; // rbx
  _DWORD *v4; // r9
  __int64 v5; // r8
  _DWORD *v6; // r9
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_KPROCESS **)(a1 + 32);
  v3 = a1;
  v1 = *(_QWORD *)(a1 + 16);
  memset(v7, 0, sizeof(v7));
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v3 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v3 + 64) )
    {
      KiStackAttachProcess(v2, 0LL, (__int64)v7, v4);
      MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 64));
      KiUnstackDetachProcess((__int64)v7, 0LL, v5, v6);
      *(_QWORD *)(v3 + 64) = 0LL;
    }
    *(_DWORD *)(v3 + 72) |= 1u;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v3 + 72) |= 4u;
  }
  else
  {
    v3 = 0LL;
  }
  AlpcpUnlockBlob(v1);
  if ( v3 )
    AlpcpDereferenceBlobEx(v3, 1);
}
