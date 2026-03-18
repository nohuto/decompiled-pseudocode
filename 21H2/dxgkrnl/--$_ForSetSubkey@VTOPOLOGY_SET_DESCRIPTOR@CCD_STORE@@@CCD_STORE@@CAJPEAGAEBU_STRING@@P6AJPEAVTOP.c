/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01AF3E8
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01B6F34 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01ADD3C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C01AECD8 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01B71EC (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01B78F8 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C01B7960 (_CcdOpenRegistrySubkey_0.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C01BB408 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // [rsp+30h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  HANDLE v21; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v24[80]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-1h] BYREF
  int v26; // [rsp+C8h] [rbp+7h]

  v21 = 0LL;
  v19 = 0;
  v8 = CcdOpenRegistrySubkey(
         &v21,
         983103LL,
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v19);
  LODWORD(v11) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v8,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      a2,
      a3,
      a4);
    return (unsigned int)v11;
  }
  Handle = 0LL;
  DestinationString = 0LL;
  v12 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&DestinationString, a2, v9, v10);
  v11 = v12;
  if ( v12 < 0 )
    goto LABEL_9;
  v19 = 2;
  v11 = (int)CcdOpenRegistrySubkey_0(
               (unsigned int)&Handle,
               983103,
               (_DWORD)v21,
               (unsigned int)&DestinationString,
               (unsigned __int64)&v19 & -(__int64)(a5 != 0));
  operator delete[](DestinationString.Buffer);
  DestinationString = 0LL;
  if ( (int)v11 < 0 )
  {
    v17 = 3LL;
    goto LABEL_11;
  }
  if ( v19 == 1 )
  {
    v26 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v25;
    v25 = *(_QWORD *)L"SetId";
    *(_QWORD *)&ValueName.Length = 786442LL;
    v18 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v11 = v18;
    if ( v18 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v17 = 2LL;
LABEL_11:
      WdLogSingleEntry5(
        v17,
        v11,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
        a2,
        a3,
        a4);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v24, Handle, a2);
  v11 = a3(v24, a4);
  ZwClose(Handle);
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
  v15[3] = v11;
  v15[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v15[5] = a2;
  v15[6] = a3;
  v15[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v24);
LABEL_6:
  ZwClose(v21);
  return (unsigned int)v11;
}
