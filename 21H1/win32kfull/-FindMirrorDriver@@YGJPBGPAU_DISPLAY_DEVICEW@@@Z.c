/*
 * XREFs of ?FindMirrorDriver@@YGJPBGPAU_DISPLAY_DEVICEW@@@Z @ 0x187789
 * Callers:
 *     _xxxRemoteConsoleShadowStart@12 @ 0x187F2C (_xxxRemoteConsoleShadowStart@12.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102 (-RtlStringCchCopyNW@@YGJPAGIPBGI@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall FindMirrorDriver(const WCHAR *a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int i; // eax
  bool v6; // zf
  unsigned int j; // eax
  char *v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // edi
  int v13; // ebx
  __int16 v14; // ax
  const unsigned __int16 *v16; // [esp+0h] [ebp-278h]
  unsigned int v17; // [esp+4h] [ebp-274h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [esp+10h] [ebp-268h] BYREF
  int v19; // [esp+2Ch] [ebp-24Ch]
  int v20; // [esp+30h] [ebp-248h]
  int v21; // [esp+34h] [ebp-244h]
  int v22; // [esp+38h] [ebp-240h]
  int v23; // [esp+3Ch] [ebp-23Ch]
  int v24; // [esp+40h] [ebp-238h]
  int v25; // [esp+44h] [ebp-234h]
  struct _UNICODE_STRING DestinationString; // [esp+48h] [ebp-230h] BYREF
  int v27; // [esp+50h] [ebp-228h]
  int v28; // [esp+54h] [ebp-224h]
  UNICODE_STRING String1; // [esp+58h] [ebp-220h] BYREF
  WCHAR v30[128]; // [esp+60h] [ebp-218h] BYREF
  WCHAR Path[133]; // [esp+160h] [ebp-118h] BYREF
  _BYTE v32[10]; // [esp+26Ah] [ebp-Eh] BYREF

  v2 = 0;
  v3 = a2;
  *(_DWORD *)&String1.Length = 0;
  v28 = a2;
  v4 = 0;
  String1.Buffer = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, a1);
  *(_DWORD *)v3 = 840;
  for ( i = DrvEnumDisplayDevices(0, *(_DWORD *)(*(_DWORD *)(_gpDispInfo + 52) + 120), 0, v3, 0, 0);
        i >= 0;
        i = DrvEnumDisplayDevices(0, *(_DWORD *)(*(_DWORD *)(_gpDispInfo + 52) + 120), v4, v3, 0, 0) )
  {
    ++v4;
    v6 = (*(_BYTE *)(v3 + 324) & 8) == 0;
    v27 = v4;
    if ( v6 || RtlStringCchCopyNW(v3 + 584, (size_t *)0x80, v16, v17) < 0 )
      continue;
    for ( j = (unsigned int)&v30[wcslen(Path) + 127]; j > (unsigned int)Path; j -= 2 )
    {
      if ( *(_WORD *)j == 92 )
        break;
    }
    if ( *(_WORD *)j != 92 )
      continue;
    v8 = (char *)(j + 2);
    QueryTable.QueryRoutine = 0;
    QueryTable.Flags = 288;
    QueryTable.Name = L"Service";
    QueryTable.EntryContext = &String1;
    v9 = (int)&v32[-j - 2] >> 1;
    v10 = 0;
    QueryTable.DefaultType = 16777217;
    QueryTable.DefaultData = 0;
    QueryTable.DefaultLength = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( v9 <= 0 )
      v10 = -1073741811;
    if ( v10 >= 0 )
    {
      v11 = v9;
      if ( !v9 )
        goto LABEL_17;
      v12 = 2147483646 - v9;
      v13 = (char *)L"Video" - v8;
      do
      {
        if ( !(v12 + v11) )
          break;
        v14 = *(_WORD *)&v8[v13];
        if ( !v14 )
          break;
        *(_WORD *)v8 = v14;
        v8 += 2;
        --v11;
      }
      while ( v11 );
      if ( !v11 )
LABEL_17:
        v8 -= 2;
      v3 = v28;
      v4 = v27;
      v10 = v11 != 0 ? 0 : -2147483643;
LABEL_20:
      *(_WORD *)v8 = 0;
      goto LABEL_21;
    }
    if ( v9 )
      goto LABEL_20;
LABEL_21:
    if ( v10 >= 0 )
    {
      memset(v30, 0, sizeof(v30));
      *(_DWORD *)&String1.Length = 0x1000000;
      String1.Buffer = v30;
      if ( RtlQueryRegistryValues(0, Path, &QueryTable, 0, 0) >= 0
        && !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
      {
        return v2;
      }
    }
  }
  return -1073741823;
}
