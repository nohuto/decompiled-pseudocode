/*
 * XREFs of sub_180008350 @ 0x180008350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180006770 @ 0x180006770 (sub_180006770.c)
 *     sub_1800071E0 @ 0x1800071E0 (sub_1800071E0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008350(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // edi
  int v13; // edx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  sub_1800071E0(a1, (__int64 *)lpCriticalSection);
  v15 = 0LL;
  v10 = sub_180006770(a1, a2, (__int64)&v15);
  v11 = v15;
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = 758;
LABEL_5:
    sub_180003AB0(
      retaddr,
      v13,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v10);
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 408LL))(
          v15,
          a3,
          a4,
          a5,
          a6);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = 759;
    goto LABEL_5;
  }
  v12 = 0;
LABEL_7:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v12;
}
