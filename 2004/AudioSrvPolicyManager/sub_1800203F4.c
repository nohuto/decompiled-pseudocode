/*
 * XREFs of sub_1800203F4 @ 0x1800203F4
 * Callers:
 *     sub_180025140 @ 0x180025140 (sub_180025140.c)
 *     sub_180025490 @ 0x180025490 (sub_180025490.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_18001A700 @ 0x18001A700 (sub_18001A700.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800203F4(__int64 a1, const wchar_t *a2, int a3, float a4, int a5, unsigned int a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v13; // edx
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-48h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = a1;
  v8 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v18 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)qword_18004FE48 + 48LL))(
         qword_18004FE48,
         a2,
         &v18);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = 3130;
LABEL_17:
    sub_180003AB0(
      retaddr,
      v13,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      v9);
    goto LABEL_19;
  }
  if ( a5 )
  {
    v14 = a6;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      v16 = a6;
      sub_18000FBC8(*((_QWORD *)off_18004F000 + 2), 0x38u, &stru_1800445C8, a2, v16);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v18 + 144LL))(
           v18,
           v14,
           &qword_180045680,
           0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v13 = 3137;
      goto LABEL_17;
    }
  }
  if ( a3 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18001A700(*((_QWORD *)off_18004F000 + 2), v10, v11, a2, a4);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v18 + 56LL))(
           v18,
           v10,
           &qword_180045680,
           0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v13 = 3145;
      goto LABEL_17;
    }
  }
  v12 = 0;
LABEL_19:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v8 )
    LeaveCriticalSection(v8);
  return v12;
}
