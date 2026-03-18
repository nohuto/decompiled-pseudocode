/*
 * XREFs of _CcdRetrieveValueFromRegistry @ 0x1C00E7220
 * Callers:
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00E72D8 (_CcdRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CcdRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, _QWORD *a3, __int64 a4)
{
  void *v4; // rdi
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // eax
  int v14; // ebx
  __int64 v16; // rax
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF
  int v18; // [rsp+6Ch] [rbp+24h]

  v18 = HIDWORD(a4);
  v4 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  while ( 1 )
  {
    operator delete[](v4);
    v8 = operator new[](Length, 0x63644356u, PagedPool);
    v4 = v8;
    if ( !v8 )
      break;
    v13 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v8, Length, &Length);
    v14 = v13;
    if ( v13 != -2147483643 && v13 != -1073741789 )
      goto LABEL_5;
  }
  v16 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
  *(_QWORD *)(v16 + 24) = Length;
  WdLogEvent5_WdLowResource(v16);
  v14 = -1073741801;
LABEL_5:
  if ( v14 < 0 )
    operator delete[](v4);
  else
    *a3 = v4;
  return (unsigned int)v14;
}
