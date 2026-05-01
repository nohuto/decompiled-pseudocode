/*
 * XREFs of sub_18003BCD8 @ 0x18003BCD8
 * Callers:
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003BCD8(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)(a1 + 8);
  sub_180011A50((_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 80) = 0LL;
  v3 = qword_18005ADB0;
  *(_QWORD *)a1 = off_18004D938;
  *v1 = off_18004D8F0;
  *(_QWORD *)(a1 + 40) = off_18004D8B8;
  *(_DWORD *)(a1 + 68) = 1;
  *(_DWORD *)(a1 + 88) = 4;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)a1 = off_18004D9F8;
  *v1 = off_18004D9B0;
  *(_QWORD *)(a1 + 40) = off_18004D978;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 104), 0, 0);
  *(_QWORD *)(a1 + 144) = 0LL;
  v4 = CoIncrementMTAUsage(a1 + 96);
  if ( v4 < 0 )
    sub_180012300(
      retaddr,
      86,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      v4);
  return a1;
}
