/*
 * XREFs of ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180067DF8
 * Callers:
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x180068840 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x180069580 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180069D80 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ?UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ @ 0x18002CB98 (-UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180050EA4 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800665C0 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B92C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
char *__fastcall Windows::Services::TargetedContent::Internal::GetCorrelationVector(char *a1, HSTRING a2)
{
  WCHAR *StringRawBuffer; // rax
  __int64 v4; // r8
  void **v5; // rcx
  char *v6; // rdx
  const char *v7; // rbx
  char *v8; // rax
  char *v9; // rdi
  void **v10; // r14
  struct TraceLoggingCorrelationVector *v11; // rbx
  struct TraceLoggingCorrelationVector *v12; // r15
  void *v13; // rcx
  char *v15; // [rsp+20h] [rbp-60h] BYREF
  int v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  void *v18[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  unsigned __int64 v20; // [rsp+50h] [rbp-30h]
  char *Source[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  unsigned __int64 v23; // [rsp+70h] [rbp-10h]

  v17 = -2LL;
  v15 = a1;
  v16 = 0;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  if ( *StringRawBuffer )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( StringRawBuffer[v4] );
  }
  std::wstring::assign(v18, StringRawBuffer);
  v5 = v18;
  if ( v20 >= 8 )
    v5 = (void **)v18[0];
  v6 = (char *)v18;
  if ( v20 >= 8 )
    v6 = (char *)v18[0];
  v23 = 15LL;
  v22 = 0LL;
  LOBYTE(Source[0]) = 0;
  std::string::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<wchar_t>>>>(
    (__int64)Source,
    v6,
    (char *)v5 + 2 * v19);
  v7 = (const char *)Source;
  if ( v23 >= 0x10 )
    v7 = Source[0];
  v8 = (char *)operator new(0xA0uLL);
  v9 = v8;
  v15 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 1;
    *((_DWORD *)v8 + 3) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
    v10 = (void **)(v8 + 16);
    *((_QWORD *)v8 + 2) = 0LL;
    v11 = TraceLoggingCorrelationVector::Set(v7);
    if ( v9 + 16 != (char *)&v15 )
    {
      v12 = v11;
      v11 = 0LL;
      v13 = *v10;
      if ( v12 == *v10 )
      {
LABEL_18:
        ContentDeliveryManager::Background::CorrelationVectorWrapper::UpdateStringRepresentation((ContentDeliveryManager::Background::CorrelationVectorWrapper *)(v9 + 16));
        goto LABEL_20;
      }
      if ( v13 )
        operator delete(v13);
      *v10 = v12;
    }
    if ( v11 )
      operator delete(v11);
    goto LABEL_18;
  }
  v9 = 0LL;
LABEL_20:
  *((_QWORD *)a1 + 1) = v9;
  *(_QWORD *)a1 = v9 + 16;
  if ( v23 >= 0x10 )
    operator delete(Source[0]);
  v23 = 15LL;
  v22 = 0LL;
  LOBYTE(Source[0]) = 0;
  if ( v20 >= 8 )
    operator delete(v18[0]);
  return a1;
}
