/*
 * XREFs of sub_180016160 @ 0x180016160
 * Callers:
 *     sub_180010800 @ 0x180010800 (sub_180010800.c)
 *     sub_180012518 @ 0x180012518 (sub_180012518.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_1800302A0 @ 0x1800302A0 (sub_1800302A0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180016160(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  int v7; // [rsp+20h] [rbp-40h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-20h] BYREF
  char v9; // [rsp+48h] [rbp-18h]
  LPCRITICAL_SECTION v10; // [rsp+50h] [rbp-10h] BYREF
  char v11; // [rsp+58h] [rbp-8h]
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF

  v10 = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  sub_18001A330(&v10);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 144);
  v9 = 0;
  sub_18001A330(&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 72);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) != 2 )
    {
      v12 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))v5)(v5, &unk_180042A80, &v12) >= 0 )
      {
        LOBYTE(v7) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v12 + 24LL))(
          v12,
          a2,
          0LL,
          0xFFFFFFFFLL,
          v7,
          0LL);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( *(_QWORD *)(a1 + 736) )
    sub_1800302A0();
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 )
    LeaveCriticalSection(v10);
  return 0LL;
}
