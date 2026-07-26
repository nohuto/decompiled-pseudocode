/*
 * XREFs of KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x1C0102044
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C01011BC (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B930 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _WORD *a3)
{
  HANDLE v6; // rcx
  _DWORD *v7; // rbx
  _DWORD *v8; // rbp
  NTSTATUS ValueKey; // eax
  NTSTATUS v10; // esi
  unsigned int v12; // eax
  _DWORD *PoolWithTag; // rax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  ResultLength[0] = 0;
  v8 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v10 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_3;
    goto LABEL_6;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_3;
  }
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v10 >= 0 )
  {
    v8 = v7;
LABEL_6:
    if ( v8[1] == 3 )
    {
      v12 = v8[2];
      if ( v12 > 0x20 )
      {
        v10 = -1073741811;
      }
      else
      {
        *a3 = v12;
        memmove(a3 + 1, v8 + 3, v12);
        v10 = 0;
      }
    }
    else
    {
      v10 = -1073741788;
    }
  }
LABEL_3:
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)v10;
}
