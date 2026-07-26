/*
 * XREFs of KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x1C01228CC
 * Callers:
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0122D5C (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B930 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD *a3)
{
  HANDLE v6; // rcx
  _BYTE *v7; // rbx
  _BYTE *v8; // rbp
  NTSTATUS ValueKey; // eax
  NTSTATUS v10; // esi
  _BYTE *PoolWithTag; // rax
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
      goto LABEL_12;
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_12;
  }
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v10 >= 0 )
  {
    v8 = v7;
LABEL_7:
    if ( *((_DWORD *)v8 + 1) == 3 )
    {
      if ( *((_DWORD *)v8 + 2) == 16 )
      {
        v10 = 0;
        *a3 = *(_OWORD *)(v8 + 12);
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741788;
    }
  }
LABEL_12:
  if ( v7 )
    operator delete[](v7);
  return (unsigned int)v10;
}
