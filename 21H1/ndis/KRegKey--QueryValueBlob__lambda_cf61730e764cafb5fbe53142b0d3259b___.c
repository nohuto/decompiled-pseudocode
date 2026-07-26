/*
 * XREFs of KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x1C0109AC0
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C01097A4 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x1C0102884 (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B8C0 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___(
        HANDLE *a1,
        __int64 a2,
        Ndis::BindStack *a3)
{
  HANDLE v4; // rcx
  PVOID PoolWithTag; // rbx
  _BYTE *v6; // rsi
  NTSTATUS ValueKey; // eax
  int v8; // edi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF
  Ndis::BindStack *v12; // [rsp+180h] [rbp+18h] BYREF

  v12 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = *a1;
  PoolWithTag = 0LL;
  ResultLength[0] = 0;
  v6 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(
               v4,
               (PUNICODE_STRING)&Ndis::FilterListValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               ResultLength);
  v8 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_5;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_5;
  }
  v8 = ZwQueryValueKey(
         *a1,
         (PUNICODE_STRING)&Ndis::FilterListValueName,
         KeyValuePartialInformation,
         PoolWithTag,
         ResultLength[0],
         ResultLength);
  if ( v8 >= 0 )
  {
    v6 = PoolWithTag;
LABEL_3:
    if ( *((_DWORD *)v6 + 1) == 3 )
      v8 = lambda_cf61730e764cafb5fbe53142b0d3259b_::operator()(&v12, (__int64)(v6 + 12), *((_DWORD *)v6 + 2));
    else
      v8 = -1073741788;
  }
LABEL_5:
  if ( PoolWithTag )
    operator delete[](PoolWithTag);
  return (unsigned int)v8;
}
