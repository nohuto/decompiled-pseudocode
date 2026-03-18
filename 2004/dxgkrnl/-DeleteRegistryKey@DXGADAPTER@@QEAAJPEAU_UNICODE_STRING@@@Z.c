/*
 * XREFs of ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C020BC24
 * Callers:
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C020BF14 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C000C4E4 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1C02616D4 (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0261718 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02631EC (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0263A00 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DeleteRegistryKey(DXGADAPTER *this, struct _UNICODE_STRING *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  int appended; // eax
  int inserted; // eax
  int v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+A0h] [rbp-60h] BYREF
  char v23; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&v17.Length = 34078720LL;
  v2 = 0;
  v18[1] = v18;
  v18[0] = v18;
  v19[1] = v19;
  v19[0] = v19;
  v17.Buffer = (wchar_t *)&v23;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  memset(&KeyInformation, 0, sizeof(KeyInformation));
  if ( *((_BYTE *)this + 210) )
  {
    v3 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v3 + 24) = 11671LL;
    WdLogEvent5_WdEvent(v3);
  }
  else
  {
    RtlUnicodeStringCopy(&v17, a2);
    LODWORD(v4) = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v18, &v17);
    while ( (_QWORD *)v18[0] != v18 )
    {
      DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v18, &v17);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v17;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v4 = v5;
      if ( v5 < 0
        || (ResultLength = 0,
            v8 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength),
            v4 = v8,
            v8 < 0)
        || (appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys(
                         (DXG_REGISTRY_KEY_LIST *)v18,
                         KeyHandle,
                         &KeyInformation,
                         &v17),
            v4 = appended,
            appended < 0)
        || (inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v19, &v17), v4 = inserted,
                                                                                              inserted < 0) )
      {
LABEL_19:
        v14 = WdLogNewEntry5_WdError(v7, v6);
        *(_QWORD *)(v14 + 24) = v4;
        WdLogEvent5_WdError(v14);
        goto LABEL_20;
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    while ( (_QWORD *)v19[0] != v19 )
    {
      v11 = DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v19, &v17);
      v4 = v11;
      if ( v11 < 0 )
        goto LABEL_19;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v17;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v4 = v12;
      if ( v12 < 0 )
        goto LABEL_19;
      v13 = ZwDeleteKey(KeyHandle);
      v4 = v13;
      if ( v13 < 0 )
        goto LABEL_19;
      if ( KeyHandle )
        ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
LABEL_20:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    v2 = v4;
  }
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v19);
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v18);
  return v2;
}
