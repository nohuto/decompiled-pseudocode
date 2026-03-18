/*
 * XREFs of _GetWin8StyleDpiSettingFromRegistry@4 @ 0xED4D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall GetWin8StyleDpiSettingFromRegistry(BOOL *a1)
{
  BOOL v1; // esi
  NTSTATUS result; // eax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [esp+8h] [ebp-40h] BYREF
  int v4; // [esp+24h] [ebp-24h]
  int v5; // [esp+28h] [ebp-20h]
  int v6; // [esp+2Ch] [ebp-1Ch]
  int v7; // [esp+30h] [ebp-18h]
  int v8; // [esp+34h] [ebp-14h]
  int v9; // [esp+38h] [ebp-10h]
  int v10; // [esp+3Ch] [ebp-Ch]
  int v11; // [esp+40h] [ebp-8h] BYREF
  int v12; // [esp+44h] [ebp-4h] BYREF

  v1 = 0;
  QueryTable.Flags = 288;
  QueryTable.QueryRoutine = 0;
  QueryTable.EntryContext = &v12;
  QueryTable.Name = L"Win8DpiScaling";
  QueryTable.DefaultData = &v11;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultLength = 4;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v11 = 0;
  v7 = 0;
  v12 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  result = RtlQueryRegistryValues(5u, L"Control Panel\\Desktop", &QueryTable, 0, 0);
  if ( result >= 0 )
    v1 = v12 != 0;
  *a1 = v1;
  return result;
}
