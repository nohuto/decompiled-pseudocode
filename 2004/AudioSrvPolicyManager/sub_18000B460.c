/*
 * XREFs of sub_18000B460 @ 0x18000B460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A7FC @ 0x18000A7FC (sub_18000A7FC.c)
 *     sub_18000B0FC @ 0x18000B0FC (sub_18000B0FC.c)
 *     sub_18000C9D0 @ 0x18000C9D0 (sub_18000C9D0.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000B460(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  int v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  int v22; // [rsp+A8h] [rbp+20h]

  v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
  v17 = 0LL;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_BYTE *)off_18004F000 + 28) & 0x40) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A7FC(*((_QWORD *)off_18004F000 + 2), v6, v7, a2, a3);
  }
  v8 = sub_18000B0FC((__int64)&v14, a2, 0LL, a3);
  if ( v8 < 0 )
  {
    v9 = v17;
LABEL_13:
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xFu, &MessageGuid, v8);
    }
    sub_180005724("CDuckingManager::DeleteDuckingNotification", 483, v8);
    goto LABEL_18;
  }
  v18 = v14;
  v19 = v15;
  try
  {
    sub_18000F150();
    v9 = v17;
    v20 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v8 = sub_18000C9D0((LPCRITICAL_SECTION)(a1 + 64));
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      o__resetstkoflw();
    v22 = *(_DWORD *)v12;
    v9 = v17;
    v8 = v22;
  }
  if ( v8 < 0 )
    goto LABEL_13;
LABEL_18:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (_QWORD *)(v16 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
  return (unsigned int)v8;
}
