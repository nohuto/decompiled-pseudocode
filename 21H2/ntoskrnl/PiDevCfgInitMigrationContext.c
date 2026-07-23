/*
 * XREFs of PiDevCfgInitMigrationContext @ 0x14076EAC0
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14076E9C4 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiDevCfgFreeMigrationContext @ 0x14076EAA0 (PiDevCfgFreeMigrationContext.c)
 */

__int64 __fastcall PiDevCfgInitMigrationContext(UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  int CachedContextBaseKey; // ebx
  NTSTATUS v6; // eax
  NTSTATUS v8; // eax
  void **v9; // rsi
  NTSTATUS v10; // eax
  void *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v14; // [rsp+90h] [rbp+30h] BYREF

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  v14 = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = a2;
  *(_QWORD *)(a3 + 40) = a1;
  v12 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v14);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_17;
  LODWORD(v12) = 3145774;
  *((_QWORD *)&v12 + 1) = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v14;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)a3 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey((PHANDLE)a3, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v6;
  if ( v6 == -1073741772 )
    return 0;
  if ( v6 < 0 )
    goto LABEL_17;
  LODWORD(v12) = 1048590;
  *((_QWORD *)&v12 + 1) = L"Devices";
  ObjectAttributes.RootDirectory = *(HANDLE *)a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey((PHANDLE)(a3 + 8), 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v8;
  if ( v8 == -1073741772 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  else if ( v8 < 0 )
  {
    goto LABEL_17;
  }
  LODWORD(v12) = 1048590;
  *((_QWORD *)&v12 + 1) = L"Classes";
  v9 = (void **)(a3 + 16);
  ObjectAttributes.RootDirectory = *(HANDLE *)a3;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey((PHANDLE)(a3 + 16), 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v10;
  if ( v10 != -1073741772 )
  {
    if ( v10 >= 0 )
      goto LABEL_12;
LABEL_17:
    PiDevCfgFreeMigrationContext(a3);
    return (unsigned int)CachedContextBaseKey;
  }
  CachedContextBaseKey = 0;
  *v9 = 0LL;
LABEL_12:
  v11 = *v9;
  if ( *v9 )
  {
    if ( a1 )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_QWORD *)(a3 + 24) = 0LL;
      ObjectAttributes.RootDirectory = v11;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      CachedContextBaseKey = ZwOpenKey((PHANDLE)(a3 + 24), 0x20019u, &ObjectAttributes);
      if ( CachedContextBaseKey == -1073741772 )
      {
        CachedContextBaseKey = 0;
        *(_QWORD *)(a3 + 24) = 0LL;
      }
    }
  }
  if ( CachedContextBaseKey < 0 )
    goto LABEL_17;
  return (unsigned int)CachedContextBaseKey;
}
