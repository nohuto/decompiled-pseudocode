/*
 * XREFs of sub_18001DBC4 @ 0x18001DBC4
 * Callers:
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 *     sub_18001EE38 @ 0x18001EE38 (sub_18001EE38.c)
 *     sub_18001EF44 @ 0x18001EF44 (sub_18001EF44.c)
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 *     sub_18001F850 @ 0x18001F850 (sub_18001F850.c)
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 *     sub_1800209A0 @ 0x1800209A0 (sub_1800209A0.c)
 *     sub_18002C770 @ 0x18002C770 (sub_18002C770.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18000FD74 @ 0x18000FD74 (sub_18000FD74.c)
 *     sub_1800212B4 @ 0x1800212B4 (sub_1800212B4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001DBC4(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 **a5,
        int a6,
        int *a7)
{
  const WCHAR *v8; // r15
  int *v10; // r13
  int v11; // edi
  volatile signed __int32 *v12; // r14
  struct _RTL_CRITICAL_SECTION *v13; // r12
  _QWORD *i; // rcx
  volatile signed __int32 *v15; // rcx
  int v16; // r14d
  volatile signed __int32 *v17; // rbx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  ATL::CAtlException *v21; // rbx
  volatile signed __int32 *v22; // [rsp+30h] [rbp-2E8h] BYREF
  int v23; // [rsp+38h] [rbp-2E0h]
  int v24; // [rsp+3Ch] [rbp-2DCh]
  UINT32 packageRelativeApplicationIdLength; // [rsp+40h] [rbp-2D8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+44h] [rbp-2D4h] BYREF
  UINT32 v27; // [rsp+48h] [rbp-2D0h] BYREF
  UINT32 v28; // [rsp+4Ch] [rbp-2CCh] BYREF
  volatile signed __int32 **v29; // [rsp+50h] [rbp-2C8h]
  __int64 v30; // [rsp+58h] [rbp-2C0h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+60h] [rbp-2B8h]
  int *v32; // [rsp+68h] [rbp-2B0h]
  _QWORD *v33; // [rsp+70h] [rbp-2A8h]
  const WCHAR *v34; // [rsp+78h] [rbp-2A0h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+80h] [rbp-298h]
  ATL::CAtlException *v36; // [rsp+88h] [rbp-290h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+90h] [rbp-288h] BYREF
  WCHAR v38[72]; // [rsp+120h] [rbp-1F8h] BYREF
  WCHAR v39[72]; // [rsp+1B0h] [rbp-168h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+240h] [rbp-D8h] BYREF

  v30 = a3;
  v8 = a2;
  v34 = a2;
  v29 = a5;
  v10 = a7;
  v32 = a7;
  v11 = -2147023728;
  v12 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  v13 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v31 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v35 = v13;
  memset(packageFamilyName, 0, 0x82uLL);
  memset(packageRelativeApplicationId, 0, 0x84uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a5 = 0LL;
  ParseApplicationUserModelId(
    v8,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  for ( i = *(_QWORD **)(a1 + 72); i; i = v33 )
  {
    v12 = (volatile signed __int32 *)i[2];
    v33 = (_QWORD *)*i;
    v22 = v12;
    memset(v38, 0, 0x82uLL);
    memset(v39, 0, 0x84uLL);
    v28 = 65;
    v27 = 66;
    ParseApplicationUserModelId(*((PCWSTR *)v12 + 3), &v28, v38, &v27, v39);
    if ( !(unsigned int)o__wcsicmp(*((_QWORD *)v12 + 3), v8)
      && *((_DWORD *)v12 + 53) == a4
      && *((_QWORD *)v12 + 80) == v30 )
    {
      v11 = 0;
LABEL_13:
      *v29 = v12;
      v15 = 0LL;
      v22 = 0LL;
      v16 = v23;
      goto LABEL_14;
    }
    if ( !(unsigned int)o__wcsicmp(v38, packageFamilyName)
      && (!(unsigned int)o__wcsicmp(v39, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *((_DWORD *)v12 + 53) == a4 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 4u )
      {
        sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Fu, &stru_1800445C8, v8);
      }
      v11 = 0;
      goto LABEL_13;
    }
  }
  if ( !a6 )
    goto LABEL_13;
  v11 = sub_18000FD74((__int64)v8, v30, a4, &v22);
  if ( v11 < 0 )
  {
    v15 = v22;
    v16 = 0;
    goto LABEL_14;
  }
  try
  {
    v11 = 0;
    v19 = sub_1800212B4(a1 + 72, &v22, 0LL, *(_QWORD *)(a1 + 72));
    v20 = *(_QWORD *)(a1 + 72);
    if ( v20 )
      *(_QWORD *)(v20 + 8) = v19;
    else
      *(_QWORD *)(a1 + 80) = v19;
    *(_QWORD *)(a1 + 72) = v19;
  }
  catch ( ATL::CAtlException *v36 )
  {
    v21 = v36;
    if ( *(_DWORD *)v36 == -1073741571 )
      o__resetstkoflw();
    v23 = *(_DWORD *)v21;
    v11 = v23;
    v13 = v31;
    v10 = v32;
    if ( v23 >= 0 )
    {
      v8 = v34;
      goto LABEL_42;
    }
    v15 = v22;
    v16 = v24;
LABEL_14:
    if ( v15 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v17 = v22;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1LL);
    }
    if ( v10 )
      *v10 = v16;
    if ( v11 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x21u, &stru_1800445C8, v11);
      }
      sub_180005724("CApplicationManager::GetApplication", 1559, v11);
    }
    if ( v13 )
      LeaveCriticalSection(v13);
    result = (unsigned int)v11;
  }
LABEL_42:
  v23 = 1;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x20u, &stru_1800445C8, v8);
  }
  v12 = v22;
  goto LABEL_13;
}
