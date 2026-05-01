/*
 * XREFs of sub_180016688 @ 0x180016688
 * Callers:
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_180038EAC @ 0x180038EAC (sub_180038EAC.c)
 *     sub_1800391C0 @ 0x1800391C0 (sub_1800391C0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180016688(__int64 *a1, __int128 *a2, unsigned int a3, HSTRING *a4)
{
  HSTRING v6; // rcx
  UINT32 v7; // edx
  PCWSTR v8; // r10
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  UINT32 v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = *a4;
  v7 = 0;
  v8 = 0LL;
  v17 = 0;
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, &v17);
    v7 = v17;
    v8 = StringRawBuffer;
  }
  v11 = *a1;
  v15 = *a2;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, PCWSTR, UINT32))(v11 + 72))(a1, &v15, a3, v8, 2 * v7);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  sub_180003268(retaddr, 192, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v12);
  return v13;
}
