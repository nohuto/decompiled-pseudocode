/*
 * XREFs of sub_18001ACD0 @ 0x18001ACD0
 * Callers:
 *     sub_18001E3F0 @ 0x18001E3F0 (sub_18001E3F0.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001ACD0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)(a1 + 8);
  sub_180011A50((_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 80) = 0LL;
  v3 = qword_18005ADB0;
  *(_QWORD *)a1 = off_18004B008;
  *v1 = off_18004AFC0;
  *(_QWORD *)(a1 + 40) = off_18004AF50;
  *(_QWORD *)(a1 + 56) = off_18004AF10;
  *(_DWORD *)(a1 + 68) = 1;
  *(_DWORD *)(a1 + 88) = 4;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = off_18004B218;
  *(_QWORD *)(a1 + 96) = 0LL;
  *v1 = off_18004B1D0;
  *(_QWORD *)(a1 + 40) = off_18004B160;
  *(_QWORD *)(a1 + 56) = off_18004B120;
  v4 = CoIncrementMTAUsage();
  if ( v4 < 0 )
    sub_180012300(retaddr, 17, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v4);
  return a1;
}
