/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0122328
 * Callers:
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C012256C (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B930 (--_V@YAXPEAX@Z.c)
 *     _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C01224F8 (_lambda_90693e01559ab5daa9d90de50bdb401e_--operator().c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0122714 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 */

__int64 KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ...)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rbp
  _BYTE *v8; // rbx
  NTSTATUS ValueKey; // eax
  NTSTATUS v10; // esi
  _BYTE *PoolWithTag; // rax
  __int64 v12; // rax
  _WORD *v13; // rsi
  _WORD *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v18; // ebp
  _WORD *v19; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-148h] BYREF
  va_list va; // [rsp+1A8h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  ResultLength[0] = 0;
  v7 = KeyValueInformation;
  v8 = 0LL;
  ValueKey = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v10 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_3:
      v10 = -1073741670;
      goto LABEL_17;
    }
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
    if ( v10 < 0 )
      goto LABEL_17;
    v7 = v8;
  }
  else if ( ValueKey < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v7 + 1) != -57326 )
  {
    v10 = -1073741788;
    goto LABEL_17;
  }
  v12 = *((unsigned int *)v7 + 2);
  if ( (v12 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_17;
  }
  v13 = v7 + 12;
  v14 = v7 + 12;
  v15 = (unsigned __int64)&v7[v12 + 12];
  v16 = 0;
  if ( (unsigned __int64)(v7 + 12) >= v15 )
    goto LABEL_16;
LABEL_12:
  if ( *v14 )
  {
    while ( (unsigned __int64)++v14 < v15 )
    {
      if ( !*v14 )
      {
        ++v16;
        if ( (unsigned __int64)++v14 < v15 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v10 = -1073741789;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(
                           a3,
                           v16) )
    goto LABEL_3;
  v18 = 0;
  while ( *v13 )
  {
    v19 = v13;
    do
      ++v19;
    while ( *v19 );
    v10 = lambda_90693e01559ab5daa9d90de50bdb401e_::operator()((__int64 *)va, v13, v18);
    if ( v10 < 0 )
      goto LABEL_17;
    v13 = v19 + 1;
    ++v18;
  }
  v10 = 0;
LABEL_17:
  if ( v8 )
    operator delete[](v8);
  return (unsigned int)v10;
}
