/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1406194CC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1406572C0 (NtQueryMultipleValueKey.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 *     NtSaveKeyEx @ 0x140714B70 (NtSaveKeyEx.c)
 *     NtLockRegistryKey @ 0x1407ADAB0 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1408636A0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140863980 (NtCompressKey.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1408647D0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140864B60 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140864E30 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A58208 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        struct _DMA_ADAPTER **a5,
        _QWORD *a6)
{
  _QWORD *v6; // rdi
  NTSTATUS v7; // eax
  struct _DMA_ADAPTER *v8; // rcx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  struct _DMA_ADAPTER *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v6 = a6;
  v7 = ObReferenceObjectByHandle(
         a1,
         a2,
         (POBJECT_TYPE)CmKeyObjectType,
         a4,
         (PVOID *)&v12,
         (POBJECT_HANDLE_INFORMATION)((unsigned __int64)&v11 & -(__int64)(a6 != 0LL)));
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)&v12->Version == 1803104306 )
    {
      *a5 = v12;
      v8 = 0LL;
      if ( v6 )
        *v6 = v11;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    HalPutDmaAdapter(v8);
  return v9;
}
