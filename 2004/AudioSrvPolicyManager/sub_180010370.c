/*
 * XREFs of sub_180010370 @ 0x180010370
 * Callers:
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_18001078C @ 0x18001078C (sub_18001078C.c)
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180017E30 @ 0x180017E30 (sub_180017E30.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180010370(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // eax
  volatile signed __int32 *v8; // r15
  __int64 result; // rax
  int *v10; // rbx
  ATL::CAtlException *v11; // [rsp+20h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]

  v16 = a2;
  v2 = a2;
  v3 = a1;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v13 = 0;
  sub_18001A330(&lpCriticalSection);
  *(_DWORD *)(v3 + 592) = *(_DWORD *)(v2 + 452);
  v4 = *(_DWORD *)(v2 + 456);
  *(_DWORD *)(v3 + 596) = v4;
  *(_BYTE *)(v3 + 664) = *(_BYTE *)(v2 + 818);
  *(_DWORD *)(v3 + 600) |= *(_DWORD *)(v2 + 476);
  v5 = *(_DWORD *)(v3 + 600);
  if ( !v4 )
  {
    *(_DWORD *)(v3 + 208) |= 1u;
    *(_DWORD *)(v3 + 216) = 2;
    *(_DWORD *)(v3 + 324) = 2;
    *(_DWORD *)(v3 + 328) = 2;
  }
  if ( v5 )
  {
    *(_DWORD *)(v3 + 208) |= 0x40u;
    *(_DWORD *)(v3 + 216) = 2;
    *(_DWORD *)(v3 + 324) = 2;
    *(_DWORD *)(v3 + 328) = 2;
    *(_DWORD *)(v3 + 564) = 0;
    *(_DWORD *)(v3 + 568) = 0;
    *(_DWORD *)(v3 + 572) = 0;
    *(_DWORD *)(v3 + 576) = 0;
    *(_DWORD *)(v3 + 580) = 0;
    *(_DWORD *)(v3 + 584) = 0;
    *(_DWORD *)(v3 + 588) = 1;
  }
  if ( !(unsigned int)sub_18001078C(v3) )
    *(_DWORD *)(v3 + 628) = 1;
  try
  {
    v6 = 0;
    sub_180017E30(v3 + 72, &v16);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = (int *)v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      o__resetstkoflw();
    v17 = *v10;
    v6 = v17;
    if ( v17 >= 0 )
    {
      v3 = a1;
      v2 = v16;
      goto LABEL_9;
    }
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xBu, &stru_180043390, v17);
    }
    sub_180005724("CApplication::LinkProcess", 339, v6);
LABEL_19:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    result = v6;
  }
LABEL_9:
  v7 = sub_1800133CC(v3, v2);
  if ( v7 < 0 )
    sub_18000F8F4(
      retaddr,
      331,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      v7);
  v8 = *(volatile signed __int32 **)(v2 + 256);
  *(_QWORD *)(v2 + 256) = v3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  }
  goto LABEL_19;
}
