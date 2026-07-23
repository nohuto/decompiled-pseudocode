/*
 * XREFs of BiCreateObject @ 0x1409718B0
 * Callers:
 *     BcdCreateObject @ 0x140971500 (BcdCreateObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x14097306C (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140710ED0 (ExUuidCreate.c)
 *     BiCreateKey @ 0x14077FE30 (BiCreateKey.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x1407811BC (BiIsObjectAliased.c)
 *     BiIsValidObject @ 0x140971BF0 (BiIsValidObject.c)
 *     BiSetObjectDescription @ 0x140971C84 (BiSetObjectDescription.c)
 */

NTSTATUS __fastcall BiCreateObject(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r9
  __int64 v8; // r8
  void *v9; // rsi
  void *v10; // rdi
  unsigned int v11; // r10d
  __int64 v12; // r11
  _QWORD *v13; // r11
  int v14; // ebx
  GUID *p_Uuid; // r11
  NTSTATUS result; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  bool v20; // [rsp+30h] [rbp-50h] BYREF
  void *v21; // [rsp+38h] [rbp-48h] BYREF
  void *v22; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-38h] BYREF
  void *v24; // [rsp+58h] [rbp-28h] BYREF
  int v25; // [rsp+60h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  *a5 = 0LL;
  v6 = a3[1];
  v24 = 0LL;
  GuidString.Buffer = 0LL;
  v8 = *a3;
  v9 = 0LL;
  Uuid = 0LL;
  v10 = 0LL;
  BiLogMessage(2LL, L"Creating object. Version: %d. Type: 0x%08x", v8, v6);
  if ( !(unsigned __int8)BiIsValidObject(a3, v12, v11) )
    return -1073741637;
  if ( v13 )
  {
    if ( BiIsObjectAliased(v13, &v25) )
      return -1073741773;
  }
  else
  {
    BiLogMessage(2LL, L"Generating object GUID.");
    result = ExUuidCreate(&Uuid);
    if ( result < 0 )
      return result;
    p_Uuid = &Uuid;
  }
  v14 = RtlStringFromGUIDEx(p_Uuid, &GuidString, 1u);
  if ( v14 >= 0 )
  {
    BiLogMessage(2LL, L"Object GUID: %s", GuidString.Buffer);
    v18 = BiOpenKey(a1, L"Objects", v17 + 2, &v22);
    v9 = v22;
    v14 = v18;
    if ( v18 >= 0 )
    {
      v19 = BiCreateKey((__int64)v22, GuidString.Buffer, 0xF003Fu, 0, &v21, &v20);
      v10 = v21;
      v14 = v19;
      if ( v19 >= 0 )
      {
        v14 = BiSetObjectDescription(v21, a3);
        if ( v14 >= 0 )
        {
          v14 = BiCreateKey((__int64)v10, L"Elements", 0x20019u, 0, &v24, &v20);
          if ( v14 >= 0 )
          {
            *a5 = v10;
            v14 = 0;
          }
          if ( v24 )
            BiCloseKey(v24);
        }
      }
    }
  }
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  if ( v14 < 0 && v10 )
    BiCloseKey(v10);
  if ( v9 )
    BiCloseKey(v9);
  return v14;
}
