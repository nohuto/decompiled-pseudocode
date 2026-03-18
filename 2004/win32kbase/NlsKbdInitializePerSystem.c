/*
 * XREFs of NlsKbdInitializePerSystem @ 0x1C0059BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsSetKeyStateToggle@@YAXE@Z @ 0x1C0059DE0 (-NlsSetKeyStateToggle@@YAXE@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

void NlsKbdInitializePerSystem()
{
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v1; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v2; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v4; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v5; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v7; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v8; // [rsp+B0h] [rbp-50h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v10; // [rsp+F8h] [rbp-8h]
  int v11; // [rsp+100h] [rbp+0h]
  const wchar_t *v12; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v13; // [rsp+110h] [rbp+10h]
  int v14; // [rsp+118h] [rbp+18h]
  struct _UNICODE_STRING *v15; // [rsp+120h] [rbp+20h]
  int v16; // [rsp+128h] [rbp+28h]
  __int64 v17; // [rsp+130h] [rbp+30h]
  int v18; // [rsp+138h] [rbp+38h]
  const wchar_t *v19; // [rsp+140h] [rbp+40h]
  UNICODE_STRING *v20; // [rsp+148h] [rbp+48h]
  int v21; // [rsp+150h] [rbp+50h]
  struct _UNICODE_STRING *v22; // [rsp+158h] [rbp+58h]
  int v23; // [rsp+160h] [rbp+60h]
  __int64 v24; // [rsp+168h] [rbp+68h]
  int v25; // [rsp+170h] [rbp+70h]
  __int64 v26; // [rsp+178h] [rbp+78h]

  DestinationString = 0LL;
  String2 = 0LL;
  v4 = 0LL;
  v7 = 0LL;
  v5 = 0LL;
  v8 = 0LL;
  String1 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  if ( (_BYTE)gKeyboardInfo == 3 )
    gapulCvt_VK = &gapulCvt_VK_84;
  if ( (_WORD)gKeyboardInfo == 775 )
    gapulCvt_VK = &gapulCvt_VK_IBM02;
  NlsSetKeyStateToggle(0xF0u);
  NlsSetKeyStateToggle(0xF3u);
  NlsSetKeyStateToggle(0xF6u);
  NlsSetKeyStateToggle(0xFBu);
  RtlInitUnicodeString(&DestinationString, L"end");
  RtlInitUnicodeString(&String2, L"help");
  RtlInitUnicodeString(&v4, L"yes");
  RtlInitUnicodeString(&v7, L"no");
  RtlInitUnicodeString(&v5, L"home");
  RtlInitUnicodeString(&v8, L"clear");
  RtlInitUnicodeString(&String1, 0LL);
  RtlInitUnicodeString(&v1, 0LL);
  RtlInitUnicodeString(&v2, 0LL);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultLength = 0;
  v10 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0LL;
  QueryTable.Name = L"helpkey";
  QueryTable.EntryContext = &String1;
  QueryTable.DefaultData = &DestinationString;
  v12 = L"KanaHelpKey";
  v13 = &v1;
  v15 = &v4;
  v19 = L"clrkey";
  v20 = &v2;
  QueryTable.Flags = 32;
  QueryTable.DefaultType = 16777217;
  v11 = 32;
  v14 = 16777217;
  v18 = 32;
  v21 = 16777217;
  v22 = &v5;
  if ( RtlQueryRegistryValues(3u, L"WOW\\keyboard", &QueryTable, 0LL, 0LL) >= 0 )
  {
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      fNlsKbdConfiguration &= ~2u;
    if ( RtlEqualUnicodeString(&v1, &v7, 1u) )
      fNlsKbdConfiguration &= ~1u;
    if ( RtlEqualUnicodeString(&v2, &v8, 1u) )
      fNlsKbdConfiguration &= ~4u;
    ExFreePoolWithTag(String1.Buffer, 0);
    ExFreePoolWithTag(v1.Buffer, 0);
    ExFreePoolWithTag(v2.Buffer, 0);
  }
}
