/*
 * XREFs of _McTemplateK0qqzz_EtwWriteTransfer@28 @ 0x156523
 * Callers:
 *     _NtUserLayoutCompleted@4 @ 0xA8C00 (_NtUserLayoutCompleted@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _McGenEventWrite_EtwWriteTransfer@20 @ 0x1564D4 (_McGenEventWrite_EtwWriteTransfer@20.c)
 */

NTSTATUS __stdcall McTemplateK0qqzz_EtwWriteTransfer(
        int a1,
        char a2,
        char a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5)
{
  const wchar_t *v5; // edx
  int v6; // esi
  int v7; // ecx
  const wchar_t *v8; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-54h] BYREF
  char *v11; // [esp+1Ch] [ebp-44h]
  int v12; // [esp+20h] [ebp-40h]
  int v13; // [esp+24h] [ebp-3Ch]
  int v14; // [esp+28h] [ebp-38h]
  char *v15; // [esp+2Ch] [ebp-34h]
  int v16; // [esp+30h] [ebp-30h]
  int v17; // [esp+34h] [ebp-2Ch]
  int v18; // [esp+38h] [ebp-28h]
  const wchar_t *v19; // [esp+3Ch] [ebp-24h]
  int v20; // [esp+40h] [ebp-20h]
  int v21; // [esp+44h] [ebp-1Ch]
  int v22; // [esp+48h] [ebp-18h]
  const wchar_t *v23; // [esp+4Ch] [ebp-14h]
  int v24; // [esp+50h] [ebp-10h]
  int v25; // [esp+54h] [ebp-Ch]
  int v26; // [esp+58h] [ebp-8h]

  v5 = a4;
  v11 = &a2;
  v12 = 0;
  v13 = 4;
  v14 = 0;
  v15 = &a3;
  v16 = 0;
  v17 = 4;
  v18 = 0;
  v6 = 10;
  if ( a4 )
    v7 = 2 * wcslen(a4) + 2;
  else
    v7 = 10;
  if ( !a4 )
    v5 = L"NULL";
  v19 = v5;
  v8 = a5;
  v20 = 0;
  v21 = v7;
  v22 = 0;
  if ( a5 )
  {
    v7 = wcslen(a5);
    v6 = 2 * v7 + 2;
  }
  else
  {
    v8 = L"NULL";
  }
  v23 = v8;
  v24 = 0;
  v25 = v6;
  v26 = 0;
  return McGenEventWrite_EtwWriteTransfer(v7, v7, &UserData);
}
