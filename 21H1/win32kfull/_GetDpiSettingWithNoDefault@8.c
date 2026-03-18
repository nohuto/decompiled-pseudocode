/*
 * XREFs of _GetDpiSettingWithNoDefault@8 @ 0xEAD64
 * Callers:
 *     _GetDpiSetting@8 @ 0xEAD44 (_GetDpiSetting@8.c)
 *     ?PerformWin8DpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z @ 0x14341A (-PerformWin8DpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall GetDpiSettingWithNoDefault(int a1, NTSTATUS *a2)
{
  unsigned __int16 v2; // di
  int v3; // esi
  NTSTATUS result; // eax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [esp+Ch] [ebp-58h] BYREF
  int v6; // [esp+28h] [ebp-3Ch]
  int v7; // [esp+2Ch] [ebp-38h]
  int v8; // [esp+30h] [ebp-34h]
  int v9; // [esp+34h] [ebp-30h]
  int v10; // [esp+38h] [ebp-2Ch]
  int v11; // [esp+3Ch] [ebp-28h]
  int v12; // [esp+40h] [ebp-24h]
  NTSTATUS v13; // [esp+44h] [ebp-20h] BYREF
  ULONG RelativeTo; // [esp+48h] [ebp-1Ch]
  PCWSTR Path[5]; // [esp+4Ch] [ebp-18h]

  QueryTable.Flags = 292;
  QueryTable.EntryContext = &v13;
  QueryTable.QueryRoutine = 0;
  QueryTable.Name = L"LogPixels";
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0;
  QueryTable.DefaultLength = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v13 = 0;
  RelativeTo = 5;
  Path[0] = L"Control Panel\\Desktop";
  v9 = 0;
  Path[1] = 0;
  Path[2] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  Path[3] = 0;
  v10 = 0;
  Path[4] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI";
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = 1;
      v3 = 2;
      goto LABEL_4;
    }
    v3 = 3;
  }
  else
  {
    v3 = 1;
  }
  v2 = 0;
LABEL_4:
  while ( 1 )
  {
    result = RtlQueryRegistryValues((ULONG)Path[2 * v2 - 1], Path[2 * v2], &QueryTable, 0, 0);
    if ( result >= 0 )
      break;
    v3 += 0xFFFF;
    ++v2;
    if ( !(_WORD)v3 )
      return result;
  }
  result = v13;
  *a2 = v13;
  return result;
}
