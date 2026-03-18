/*
 * XREFs of CmObReferenceObjectByHandle @ 0x14066E70C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1406A4AE0 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 *     NtSaveKeyEx @ 0x140724EC0 (NtSaveKeyEx.c)
 *     NtLockRegistryKey @ 0x1407BEB50 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x14086A3E0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14086A6C0 (NtCompressKey.c)
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14086B510 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14086B8A0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14086BB70 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A5E608 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
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
