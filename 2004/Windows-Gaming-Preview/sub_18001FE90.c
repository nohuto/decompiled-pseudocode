/*
 * XREFs of sub_18001FE90 @ 0x18001FE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001602C @ 0x18001602C (sub_18001602C.c)
 *     sub_18001BB18 @ 0x18001BB18 (sub_18001BB18.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001FE90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ebx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    goto LABEL_11;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &xmmword_180051000, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 267;
    goto LABEL_4;
  }
  if ( !v13 )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v6 = sub_18001BB18(*(_QWORD *)(a1 + 72), a3, *(_BYTE *)(a1 + 80));
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_11;
  }
  v8 = 272;
LABEL_4:
  sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v6);
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_12:
  if ( v7 < 0 )
    sub_18001602C((unsigned int)v7);
  return (unsigned int)v7;
}
