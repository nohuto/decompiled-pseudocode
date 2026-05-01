/*
 * XREFs of sub_180041648 @ 0x180041648
 * Callers:
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041648(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  char *v6; // rbp
  int v7; // edx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // esi
  _WORD v12[8]; // [rsp+20h] [rbp-68h] BYREF
  char v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v6 = 0LL;
  if ( !a3 )
  {
    v7 = 1039;
LABEL_3:
    sub_180003268(
      retaddr,
      v7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    return 2147500035LL;
  }
  if ( !a2 )
  {
    v7 = 1040;
    goto LABEL_3;
  }
  v9 = 0;
  if ( !a1[200] )
    return 2147942402LL;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _WORD *))(*(_QWORD *)a1 + 88LL))(a1, v9, v12);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( !v12[0] || (int)o__wcsnicmp(v12, a2, 4LL) > 0 )
    {
      if ( !v6 )
        return 2147942402LL;
LABEL_13:
      *a3 = v9 - 1;
      return 0LL;
    }
    ++v9;
    v6 = &v13;
    if ( v9 >= a1[200] )
      goto LABEL_13;
  }
  sub_180003268(
    retaddr,
    1046,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    v10);
  return v11;
}
