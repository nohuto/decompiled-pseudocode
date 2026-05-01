/*
 * XREFs of sub_18003E040 @ 0x18003E040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E040(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edx
  int v7; // r9d
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v3 = -2147467261;
    sub_180003268(
      retaddr,
      28,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      -2147467261);
    return v3;
  }
  v4 = *(_QWORD *)(a1 + 64);
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, &v11);
  v3 = v5;
  if ( v5 < 0 )
  {
    v6 = 31;
LABEL_9:
    v7 = v5;
    goto LABEL_10;
  }
  if ( v11 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, a2);
    v3 = v5;
    if ( v5 >= 0 )
      goto LABEL_11;
    v6 = 34;
    goto LABEL_9;
  }
  v3 = -2147467261;
  v6 = 32;
  v7 = -2147467261;
LABEL_10:
  sub_180003268(retaddr, v6, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp", v7);
LABEL_11:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v3;
}
