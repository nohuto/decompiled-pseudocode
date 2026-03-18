/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x1408C5DB0
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1406613EC (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E7A94 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405EEEC0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1405F1600 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  _KPROCESS *v2; // rsi
  ULONG_PTR v3; // rbx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_KPROCESS **)(a1 + 32);
  v3 = a1;
  v1 = *(_QWORD *)(a1 + 16);
  memset(v4, 0, sizeof(v4));
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v3 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v3 + 64) )
    {
      KiStackAttachProcess(v2, 0, (__int64)v4);
      MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 64));
      KiUnstackDetachProcess((__int64)v4, 0);
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
