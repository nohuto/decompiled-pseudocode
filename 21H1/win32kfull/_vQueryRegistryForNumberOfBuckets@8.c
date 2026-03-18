/*
 * XREFs of _vQueryRegistryForNumberOfBuckets@8 @ 0x292E5A
 * Callers:
 *     _bInitFontTables@0 @ 0x292DA4 (_bInitFontTables@0.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall vQueryRegistryForNumberOfBuckets(int *a1, int *a2)
{
  bool v4; // sf
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int result; // eax
  unsigned int v9; // [esp+Ch] [ebp-A0h] BYREF
  unsigned int v10; // [esp+10h] [ebp-9Ch] BYREF
  unsigned int v11; // [esp+14h] [ebp-98h] BYREF
  unsigned int v12; // [esp+18h] [ebp-94h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [esp+1Ch] [ebp-90h] BYREF
  int v14; // [esp+38h] [ebp-74h]
  int v15; // [esp+3Ch] [ebp-70h]
  const wchar_t *v16; // [esp+40h] [ebp-6Ch]
  unsigned int *v17; // [esp+44h] [ebp-68h]
  int v18; // [esp+48h] [ebp-64h]
  int v19; // [esp+4Ch] [ebp-60h]
  int v20; // [esp+50h] [ebp-5Ch]
  int v21; // [esp+54h] [ebp-58h]
  int v22; // [esp+58h] [ebp-54h]
  const wchar_t *v23; // [esp+5Ch] [ebp-50h]
  unsigned int *v24; // [esp+60h] [ebp-4Ch]
  int v25; // [esp+64h] [ebp-48h]
  int v26; // [esp+68h] [ebp-44h]
  int v27; // [esp+6Ch] [ebp-40h]
  int v28; // [esp+70h] [ebp-3Ch]
  int v29; // [esp+74h] [ebp-38h]
  const wchar_t *v30; // [esp+78h] [ebp-34h]
  unsigned int *v31; // [esp+7Ch] [ebp-30h]
  int v32; // [esp+80h] [ebp-2Ch]
  int v33; // [esp+84h] [ebp-28h]
  int v34; // [esp+88h] [ebp-24h]
  int v35; // [esp+8Ch] [ebp-20h]
  int v36; // [esp+90h] [ebp-1Ch]
  int v37; // [esp+94h] [ebp-18h]

  QueryTable.Name = L"NumberOfPublicFontFilesAtLastLogOff";
  v10 = 0;
  QueryTable.EntryContext = &v10;
  v12 = 0;
  v17 = &v12;
  v9 = 0;
  v24 = &v9;
  v11 = 0;
  v31 = &v11;
  QueryTable.QueryRoutine = 0;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0;
  QueryTable.DefaultLength = 0;
  v14 = 0;
  v15 = 288;
  v16 = L"NumberOfPublicFontFilesSetByUser";
  v18 = 0x4000000;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 288;
  v23 = L"NumberOfDeviceFontFilesAtLastLogOff";
  v25 = 0x4000000;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 288;
  v30 = L"NumberOfDeviceFontFilesSetByUser";
  v32 = 0x4000000;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v4 = RtlQueryRegistryValues(3u, L"FontCache", &QueryTable, 0, 0) < 0;
  v5 = v12;
  if ( v4 )
  {
    v6 = v11;
  }
  else
  {
    if ( !v12 )
      v5 = v10;
    v6 = v11;
    if ( !v11 )
      v6 = v9;
  }
  if ( v5 >= 0x64 )
  {
    v7 = 10000;
    if ( v5 <= 0x2710 )
      v7 = v5;
  }
  else
  {
    v7 = 100;
  }
  result = 5;
  *a1 = v7;
  if ( v6 >= 5 )
  {
    result = 100;
    if ( v6 <= 0x64 )
      result = v6;
  }
  *a2 = result;
  return result;
}
