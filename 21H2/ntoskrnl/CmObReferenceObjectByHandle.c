/*
 * XREFs of CmObReferenceObjectByHandle @ 0x14066461C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14066C210 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1406A1E20 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x1406B3C40 (NtFlushKey.c)
 *     NtSaveKeyEx @ 0x140728950 (NtSaveKeyEx.c)
 *     NtLockRegistryKey @ 0x1407C2F50 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140868000 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1408682E0 (NtCompressKey.c)
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140869140 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1408694D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1408697A0 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A61428 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
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
