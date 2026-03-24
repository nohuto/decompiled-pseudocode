/*
 * XREFs of DpiGdoDestroyGdiObjects @ 0x1C02D9DC0
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C018AE58 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C8C24 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C0189AC4 (DpiAppendNumberToString.c)
 *     DxgkReleaseGdiViewId @ 0x1C02A01B4 (DxgkReleaseGdiViewId.c)
 */

__int64 __fastcall DpiGdoDestroyGdiObjects(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  PCWSTR ValueName[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v1 + 3584), Executive, 0, 0, 0LL);
  v2 = (_QWORD *)(v1 + 3568);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    SymbolicLinkName = 0LL;
    v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v3 + 2, v3, File, 1u, 0x20u);
    v7 = v4;
    if ( v4 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
      v13[3] = 275LL;
      v13[4] = 21LL;
      v13[5] = v7;
      WdLogEvent5_WdCriticalError(v13);
      goto LABEL_17;
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)v3 + 10, 0);
    v8 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v9 = (_QWORD *)v3[1], (_QWORD *)*v9 != v3) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    --*(_DWORD *)(v1 + 3640);
    KeReleaseMutex((PRKMUTEX)(v1 + 3584), 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v3 + 2, v3, 0x20u);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v1 + 3584), Executive, 0, 0, 0LL);
    LOBYTE(v10) = *(_BYTE *)(v1 + 2743);
    if ( !(_BYTE)v10 )
    {
      v11 = v3[3];
      *(_OWORD *)ValueName = 0LL;
      v12 = *(_QWORD *)(v11 + 64);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 64LL) + 2743LL)
        && (int)DpiAppendNumberToString(L"\\Device\\Video", *(_DWORD *)(v12 + 152), (PUNICODE_STRING)ValueName) >= 0 )
      {
        RtlDeleteRegistryValue(4u, L"VIDEO", ValueName[1]);
        RtlFreeUnicodeString((PUNICODE_STRING)ValueName);
      }
      if ( (int)DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *((_DWORD *)v3 + 38) + 1, &SymbolicLinkName) >= 0 )
      {
        IoDeleteSymbolicLink(&SymbolicLinkName);
        RtlFreeUnicodeString(&SymbolicLinkName);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v3 + 10);
      LOBYTE(v10) = *(_BYTE *)(v1 + 2743);
    }
    DxgkReleaseGdiViewId(v10, *(_QWORD *)(v1 + 5936), *((_DWORD *)v3 + 38), 0);
    IoDeleteDevice((PDEVICE_OBJECT)v3[3]);
  }
  LODWORD(v7) = 0;
LABEL_17:
  KeReleaseMutex((PRKMUTEX)(v1 + 3584), 0);
  return (unsigned int)v7;
}
