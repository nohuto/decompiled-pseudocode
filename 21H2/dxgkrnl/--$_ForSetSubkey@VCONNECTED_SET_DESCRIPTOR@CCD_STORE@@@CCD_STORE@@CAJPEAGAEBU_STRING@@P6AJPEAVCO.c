/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01B6FEC
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01B6FB4 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C01AECD8 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C01B7168 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01B7240 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01B78F8 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C01B7960 (_CcdOpenRegistrySubkey_0.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C01BB408 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // [rsp+30h] [rbp-B1h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-A9h] BYREF
  HANDLE v20; // [rsp+40h] [rbp-A1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-99h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v23[112]; // [rsp+70h] [rbp-71h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-1h] BYREF
  int v25; // [rsp+E8h] [rbp+7h]

  v20 = 0LL;
  v18 = 0;
  v7 = CcdOpenRegistrySubkey(
         &v20,
         983103LL,
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
         &v18);
  LODWORD(v10) = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v7,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
      a2,
      a3,
      a4);
    return (unsigned int)v10;
  }
  Handle = 0LL;
  DestinationString = 0LL;
  v11 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&DestinationString, a2, v8, v9);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_9;
  v18 = 2;
  v10 = (int)CcdOpenRegistrySubkey_0(
               (unsigned int)&Handle,
               983103,
               (_DWORD)v20,
               (unsigned int)&DestinationString,
               (__int64)&v18);
  operator delete[](DestinationString.Buffer);
  DestinationString = 0LL;
  if ( (int)v10 < 0 )
  {
    v16 = 3LL;
    goto LABEL_11;
  }
  if ( v18 == 1 )
  {
    v25 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v24;
    v24 = *(_QWORD *)L"SetId";
    *(_QWORD *)&ValueName.Length = 786442LL;
    v17 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v10 = v17;
    if ( v17 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v16 = 2LL;
LABEL_11:
      WdLogSingleEntry5(
        v16,
        v10,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
        a2,
        a3,
        a4);
      goto LABEL_6;
    }
  }
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v23, Handle, a2);
  v10 = a3(v23, a4);
  ZwClose(Handle);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
  v14[3] = v10;
  v14[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
  v14[5] = a2;
  v14[6] = a3;
  v14[7] = a4;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v23);
LABEL_6:
  ZwClose(v20);
  return (unsigned int)v10;
}
