/*
 * XREFs of sub_18000B210 @ 0x18000B210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A754 @ 0x18000A754 (sub_18000A754.c)
 *     sub_18000B0FC @ 0x18000B0FC (sub_18000B0FC.c)
 *     sub_18000CB94 @ 0x18000CB94 (sub_18000CB94.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000B210(__int64 a1, const wchar_t *a2, int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  _UNKNOWN **v11; // rcx
  int v12; // edi
  _QWORD *v13; // rdx
  ATL::CAtlException *v15; // rbx
  char v16[4]; // [rsp+20h] [rbp-78h]
  int v18; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+68h] [rbp-30h]
  __int64 v26; // [rsp+78h] [rbp-20h]

  v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
  v10 = 0LL;
  v23 = 0LL;
  v11 = (_UNKNOWN **)off_18004F000;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_BYTE *)off_18004F000 + 28) & 0x40) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    *(_DWORD *)v16 = a3;
    sub_18000A754(*((_QWORD *)off_18004F000 + 2), v8, v9, a2, *(_DWORD *)v16, a4);
    v11 = (_UNKNOWN **)off_18004F000;
  }
  if ( *(_DWORD *)(a1 + 480) == 1 )
  {
    v12 = -2147467260;
    goto LABEL_16;
  }
  v12 = sub_18000B0FC((__int64)&v20, a3, (__int64)a2, a4);
  if ( v12 < 0 )
  {
    v10 = v23;
LABEL_15:
    v11 = (_UNKNOWN **)off_18004F000;
LABEL_16:
    if ( v11 != &off_18004F000 && (*((_DWORD *)v11 + 7) & 0x8000000) != 0 && *((_BYTE *)v11 + 25) >= 2u )
      sub_1800050FC((TRACEHANDLE)v11[2], 0xDu, &MessageGuid, v12);
    sub_180005724("CDuckingManager::AddDuckingNotification", 411, v12);
    goto LABEL_21;
  }
  v24 = v20;
  v25 = v21;
  try
  {
    sub_18000F150();
    v10 = v23;
    v26 = v23;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v12 = sub_18000CB94(a1 + 64, &v24);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      o__resetstkoflw();
    v18 = *(_DWORD *)v15;
    v10 = v23;
    v12 = v18;
  }
  if ( v12 < 0 )
    goto LABEL_15;
LABEL_21:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v13 = (_QWORD *)(v22 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 8LL))(*v13);
  return (unsigned int)v12;
}
