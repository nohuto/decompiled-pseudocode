/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x140967328
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1407E0D28 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

void __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  _KPROCESS *v2; // rsi
  ULONG_PTR v3; // rbx
  _DWORD *v4; // r9
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_KPROCESS **)(a1 + 32);
  v3 = a1;
  v1 = *(_QWORD *)(a1 + 16);
  memset(v5, 0, sizeof(v5));
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v3 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v3 + 64) )
    {
      KiStackAttachProcess(v2, 0LL, (__int64)v5, v4);
      MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 64));
      KiUnstackDetachProcess((__int64)v5, 0LL);
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
