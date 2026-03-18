/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140AB4630
 * Callers:
 *     NtSaveKeyEx @ 0x14065A1F0 (NtSaveKeyEx.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     NtLockRegistryKey @ 0x14080F930 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x14090E310 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14090E5E0 (NtCompressKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14090F3F0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14090F750 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x14090F9B0 (NtSaveMergedKeys.c)
 *     CmSaveKeyToBuffer @ 0x140AB4770 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B12AF0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v7; // rax
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v7 = (struct _OBJECT_HANDLE_INFORMATION *)&v10;
  v10 = 0LL;
  Object = 0LL;
  if ( !a6 )
    v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, v7);
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      *a5 = Object;
      if ( v6 )
        *v6 = v10;
      return 0LL;
    }
    v8 = -1073741816;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v8;
}
