/*
 * XREFs of CmObReferenceObjectByHandle @ 0x1405E3EAC
 * Callers:
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x140654D60 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     NtSaveKeyEx @ 0x140716F00 (NtSaveKeyEx.c)
 *     NtLockRegistryKey @ 0x1407B0C10 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1408649C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140864CA0 (NtCompressKey.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140865AF0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140865E80 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x140866150 (NtSaveMergedKeys.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A4B7EC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
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
