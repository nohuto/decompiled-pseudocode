/*
 * XREFs of ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C009EA34
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009DCB0 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C009E94C (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01F823C (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoOpenKey(struct _CIT_IMPACT_CONTEXT *a1, void **a2)
{
  void *v2; // rax
  unsigned int v5; // ebx
  NTSTATUS v7; // eax
  const char *v8; // rdx
  const WCHAR *v9; // rdx
  void *v10; // rax
  unsigned int v11; // r8d
  char IsStateSeparationEnabled; // al
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  char v17; // [rsp+80h] [rbp-80h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 73);
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  KeyHandle = 0LL;
  KeyPath = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( v2 )
  {
    *a2 = v2;
    return 0;
  }
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)&v17;
  if ( !(unsigned __int8)RtlIsMultiSessionSku() )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v9 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
    if ( !IsStateSeparationEnabled )
      v9 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
    goto LABEL_8;
  }
  if ( !*((_QWORD *)a1 + 12) )
  {
    v5 = -1073741823;
    goto LABEL_10;
  }
  v7 = RtlFormatCurrentUserKeyPath(&KeyPath);
  v5 = v7;
  if ( v7 >= 0 )
  {
    RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    v9 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon";
LABEL_8:
    RtlAppendUnicodeToString(&Destination, v9);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v10 = KeyHandle;
      v5 = 0;
      *((_QWORD *)a1 + 73) = KeyHandle;
      *a2 = v10;
      KeyHandle = 0LL;
      goto LABEL_10;
    }
    v11 = 5058;
    goto LABEL_15;
  }
  v11 = 5039;
LABEL_15:
  CitpLogFailureWorker(v7, v8, v11);
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
