/*
 * XREFs of McTemplateK0zqjqq_EtwWriteTransfer @ 0x1C00191E4
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0016364 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003F88 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v12; // [rsp+40h] [rbp-29h]
  int v13; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  char *v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  __int64 v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  char *v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  char *v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]

  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = (unsigned int)(2 * v8 + 2);
  }
  else
  {
    v9 = 10LL;
  }
  v14 = 0;
  v13 = v9;
  if ( !a4 )
    a4 = L"NULL";
  v16 = 4LL;
  v12 = a4;
  v15 = &a5;
  v17 = a6;
  v18 = 16LL;
  v19 = &a7;
  v21 = &a8;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v9, &EventAdapterRescan, 0LL, 6u, &v11);
}
