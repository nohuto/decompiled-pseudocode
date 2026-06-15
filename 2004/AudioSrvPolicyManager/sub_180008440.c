/*
 * XREFs of sub_180008440 @ 0x180008440
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180006770 @ 0x180006770 (sub_180006770.c)
 *     sub_1800071E0 @ 0x1800071E0 (sub_1800071E0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008440(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  int v9; // edx
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  sub_1800071E0(a1, (__int64 *)lpCriticalSection);
  v13 = 0LL;
  v6 = sub_180006770(a1, a2, (__int64)&v13);
  v7 = v13;
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 769;
LABEL_5:
    sub_180003AB0(
      retaddr,
      v9,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v6);
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 416LL))(v13, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 770;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_7:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v8;
}
