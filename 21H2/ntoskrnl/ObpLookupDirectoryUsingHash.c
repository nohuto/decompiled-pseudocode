/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x1406F16A8
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x1406F1554 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x14026CAAC (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x1402AAF3C (ObpLockDirectoryShared.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 */

void *__fastcall ObpLookupDirectoryUsingHash(char *a1, const UNICODE_STRING *a2, __int64 a3, BOOLEAN a4)
{
  char v5; // bp
  char *v9; // rsi
  __int64 *v10; // rdi
  int v11; // r15d
  void *v12; // rdi
  struct _DMA_ADAPTER *v13; // rcx
  void *result; // rax

  v5 = *(_BYTE *)(a3 + 30);
  v9 = &a1[8 * *(unsigned __int16 *)(a3 + 28)];
  if ( !v5 )
    ObpLockDirectoryShared(a3, a1);
  v10 = *(__int64 **)v9;
  if ( !*(_QWORD *)v9 )
    goto LABEL_15;
  v11 = *(_DWORD *)(a3 + 24);
  do
  {
    if ( *((_DWORD *)v10 + 4) == v11
      && RtlEqualUnicodeString(
           a2,
           (PCUNICODE_STRING)(v10[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v10[1] - 48 + 26) & 3] + 8),
           a4) )
    {
      break;
    }
    v9 = (char *)v10;
    v10 = (__int64 *)*v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v12 = (void *)v10[1];
    ObfReferenceObject(v12);
    if ( !v5 )
    {
      ObpUnlockDirectory((__int64)a1, a3);
      v9 = 0LL;
    }
    v13 = *(struct _DMA_ADAPTER **)(a3 + 8);
    if ( v13 )
      HalPutDmaAdapter(v13);
    *(_QWORD *)(a3 + 8) = v12;
    result = v12;
    *(_QWORD *)(a3 + 16) = v9;
  }
  else
  {
LABEL_15:
    if ( !v5 )
      ObpUnlockDirectory((__int64)a1, a3);
    return 0LL;
  }
  return result;
}
