/*
 * XREFs of KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C0100F20
 * Callers:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100DE4 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C0100FFC (_lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B8D0 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3)
{
  HANDLE v5; // rcx
  _BYTE *v6; // rbx
  _BYTE *v7; // rsi
  NTSTATUS ValueKey; // eax
  NTSTATUS v9; // edi
  _BYTE *PoolWithTag; // rax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v14; // [rsp+190h] [rbp+18h] BYREF

  v14 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v5 = *a1;
  v6 = 0LL;
  ResultLength[0] = 0;
  v7 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v9 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_5;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_5;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v9 >= 0 )
  {
    v7 = v6;
LABEL_3:
    if ( *((_DWORD *)v7 + 1) == -65518 )
      v9 = lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator()(&v14, v7 + 12, *((unsigned int *)v7 + 2));
    else
      v9 = -1073741788;
  }
LABEL_5:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v9;
}
