/*
 * XREFs of sub_18001BBB4 @ 0x18001BBB4
 * Callers:
 *     sub_18001CEC4 @ 0x18001CEC4 (sub_18001CEC4.c)
 * Callees:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_18001C2F4 @ 0x18001C2F4 (sub_18001C2F4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18001BBB4(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // cl
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-21h]
  __int64 v11; // [rsp+30h] [rbp-19h] BYREF
  __int64 v12; // [rsp+38h] [rbp-11h]
  __int64 v13; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int16 v14; // [rsp+48h] [rbp-1h]
  __int128 v15; // [rsp+50h] [rbp+7h]
  __int16 v16; // [rsp+60h] [rbp+17h] BYREF
  char v17; // [rsp+62h] [rbp+19h]
  int v18; // [rsp+64h] [rbp+1Bh]
  unsigned __int16 v19; // [rsp+68h] [rbp+1Fh]
  __int128 v20; // [rsp+70h] [rbp+27h]

  v12 = a2;
  v11 = *(_QWORD *)(a1 + 24) + 10LL;
  v4 = *(_BYTE *)(a1 + 4);
  LOWORD(v13) = *(_WORD *)(a1 + 2);
  BYTE2(v13) = v4;
  HIDWORD(v13) = 0;
  v14 = 0;
  v15 = 0LL;
  v5 = *(_BYTE *)(a1 + 8);
  v16 = *(_WORD *)(a1 + 6);
  v17 = v5;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
LABEL_2:
  while ( (unsigned __int8)sub_18001C2F4(&v13, &v11, *(_QWORD *)(a1 + 32)) )
  {
    v6 = 0;
    if ( HIDWORD(v13) )
    {
      while ( (unsigned __int8)sub_18001C2F4(&v16, &v11, *(_QWORD *)(a1 + 32)) )
      {
        LODWORD(v10) = v18;
        if ( !(unsigned __int8)sub_18001A2B0(
                                 a2,
                                 *((__int64 *)&v15 + 1),
                                 v14,
                                 *((__int64 *)&v20 + 1),
                                 v19,
                                 v10,
                                 v11,
                                 v12,
                                 v13) )
        {
          v7 = *(_QWORD *)(a2 + 112);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
          return 0;
        }
        if ( (unsigned int)++v6 >= HIDWORD(v13) )
          goto LABEL_2;
      }
    }
  }
  v9 = *(_QWORD *)(a2 + 112);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
  return 1;
}
