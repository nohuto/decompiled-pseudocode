/*
 * XREFs of CmPostCallbackNotificationEx @ 0x14070F860
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x140659F40 (CmpSecurityMethod.c)
 *     NtDeleteValueKey @ 0x14065DF20 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140661030 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 *     NtSaveKeyEx @ 0x140728E00 (NtSaveKeyEx.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1408692A0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140869630 (NtRestoreKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _SLIST_ENTRY *v10; // r8
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  unsigned int v17; // [rsp+68h] [rbp-30h]
  __int128 v18; // [rsp+6Ch] [rbp-2Ch]
  __int64 v19; // [rsp+7Ch] [rbp-1Ch]
  int v20; // [rsp+84h] [rbp-14h]

  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) || (_QWORD *)*a6 == a6 )
    return a3;
  v15 = 0;
  v12[0] = &v13;
  v10 = (_SLIST_ENTRY *)v12;
  v19 = 0LL;
  v20 = 0;
  if ( !a5 )
    v10 = 0LL;
  v12[1] = a5;
  v13 = a2;
  v14 = a3;
  v18 = 0LL;
  v17 = a3;
  v16 = a4;
  CmpCallCallBacksEx(a1, (__int64)&v13, v10, 0, a1, a2, (__int64)a6);
  return v17;
}
