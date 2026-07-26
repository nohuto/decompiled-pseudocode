/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x1C0109888
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C010978C (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C0102BF8 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0109A08 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B930 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        Ndis::BindStack *a4)
{
  HANDLE v7; // rcx
  _BYTE *v8; // r14
  PVOID PoolWithTag; // rbx
  NTSTATUS ValueKey; // eax
  NTSTATUS v11; // ebp
  __int64 v12; // rax
  const wchar_t *v13; // rbp
  _WORD *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  const wchar_t *v17; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v7 = *a1;
  ResultLength[0] = 0;
  v8 = KeyValueInformation;
  PoolWithTag = 0LL;
  ValueKey = ZwQueryValueKey(
               v7,
               (PUNICODE_STRING)&Ndis::ProtocolListValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               ResultLength);
  v11 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    if ( !PoolWithTag )
      goto LABEL_13;
    v11 = ZwQueryValueKey(
            *a1,
            (PUNICODE_STRING)&Ndis::ProtocolListValueName,
            KeyValuePartialInformation,
            PoolWithTag,
            ResultLength[0],
            ResultLength);
    if ( v11 < 0 )
      goto LABEL_20;
    v8 = PoolWithTag;
  }
  else if ( ValueKey < 0 )
  {
    goto LABEL_20;
  }
  if ( *((_DWORD *)v8 + 1) != 7 )
  {
    v11 = -1073741788;
    goto LABEL_20;
  }
  v12 = *((unsigned int *)v8 + 2);
  if ( (v12 & 1) != 0 )
  {
    v11 = -1073741811;
    goto LABEL_20;
  }
  v13 = (const wchar_t *)(v8 + 12);
  v14 = v8 + 12;
  v15 = (unsigned __int64)&v8[v12 + 12];
  v16 = 0;
  if ( (unsigned __int64)(v8 + 12) >= v15 )
    goto LABEL_29;
LABEL_6:
  if ( *v14 )
  {
    while ( (unsigned __int64)++v14 < v15 )
    {
      if ( !*v14 )
      {
        ++v16;
        if ( (unsigned __int64)++v14 < v15 )
          goto LABEL_6;
        break;
      }
    }
LABEL_29:
    v11 = -1073741789;
    goto LABEL_20;
  }
  if ( v16 > 0x80 )
  {
    v11 = -1073740757;
    goto LABEL_20;
  }
  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
                           a3,
                           v16) )
  {
LABEL_13:
    v11 = -1073741670;
    goto LABEL_20;
  }
  while ( *v13 )
  {
    v17 = v13;
    do
      ++v17;
    while ( *v17 );
    v11 = Ndis::BindStack::AddStaticProtocolBinding(a4, v13);
    if ( v11 < 0 )
      goto LABEL_20;
    v13 = v17 + 1;
  }
  v11 = 0;
LABEL_20:
  if ( PoolWithTag )
    operator delete[](PoolWithTag);
  return (unsigned int)v11;
}
