/*
 * XREFs of ApiSetpLoadSchemaExtension @ 0x14095ED60
 * Callers:
 *     ApiSetpLoadSchemaExtensions @ 0x14095EE74 (ApiSetpLoadSchemaExtensions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ApiSetComposeSchema @ 0x1405BE7D0 (ApiSetComposeSchema.c)
 *     ApiSetLoadSchemaEx @ 0x14095EA94 (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x14095EC30 (ApiSetpConstructPathToExtension.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetpLoadSchemaExtension(void *a1, _DWORD **a2, unsigned int *a3)
{
  int v5; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  SIZE_T v8; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v9; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  WCHAR Source[138]; // [rsp+7Ch] [rbp-84h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  ResultLength = 0;
  v11.Buffer = 0LL;
  ValueName.Buffer = L"FileName";
  *(_QWORD *)&ValueName.Length = 1179664LL;
  v5 = ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x114u, &ResultLength);
  if ( v5 >= 0 )
  {
    v5 = ApiSetpConstructPathToExtension(Source, v13, &v11);
    if ( v5 >= 0 )
    {
      v5 = ApiSetLoadSchemaEx((__int64)&v11, &v9, &v8);
      if ( v5 >= 0 )
        v5 = ApiSetComposeSchema(a2, a3, v9, v8);
    }
  }
  if ( v11.Buffer )
    ExFreePoolWithTag(v11.Buffer, 0);
  return (unsigned int)v5;
}
