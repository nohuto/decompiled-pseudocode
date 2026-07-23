/*
 * XREFs of CmObReferenceObjectByHandle @ 0x14065943C
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140728E00 (NtSaveKeyEx.c)
 *     NtLockRegistryKey @ 0x1407C3470 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140868160 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140868440 (NtCompressKey.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1408692A0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140869630 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140869900 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A62428 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
