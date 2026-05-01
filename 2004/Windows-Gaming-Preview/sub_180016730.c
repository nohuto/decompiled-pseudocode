/*
 * XREFs of sub_180016730 @ 0x180016730
 * Callers:
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 *     sub_180028228 @ 0x180028228 (sub_180028228.c)
 *     sub_180028818 @ 0x180028818 (sub_180028818.c)
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_180029FB8 @ 0x180029FB8 (sub_180029FB8.c)
 *     sub_18002BB40 @ 0x18002BB40 (sub_18002BB40.c)
 *     sub_18002BD00 @ 0x18002BD00 (sub_18002BD00.c)
 *     sub_180038A8C @ 0x180038A8C (sub_180038A8C.c)
 *     sub_1800392D8 @ 0x1800392D8 (sub_1800392D8.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001A674 @ 0x18001A674 (sub_18001A674.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180016730(__int64 a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  unsigned int v5; // r14d
  int v8; // edx
  HRESULT String; // ebx
  PCNZWCH v11; // r9
  int v12; // edx
  PCNZWCH v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  PCNZWCH sourceString; // [rsp+50h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF

  v5 = a3;
  if ( !a1 )
  {
    v8 = 203;
LABEL_3:
    String = -2147467261;
LABEL_4:
    sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", String);
    return (unsigned int)String;
  }
  if ( !a4 )
  {
    v8 = 204;
    goto LABEL_3;
  }
  v20 = 0;
  v16 = *a2;
  String = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, unsigned int *))(*(_QWORD *)a1 + 64LL))(
             a1,
             &v16,
             a3,
             0LL,
             &v20);
  if ( (_WORD)String == 2 )
    return 0LL;
  if ( String < 0 )
  {
    v8 = 218;
    goto LABEL_4;
  }
  sourceString = 0LL;
  v18 = 0LL;
  if ( v20 )
  {
    try
    {
      sub_18001A674(&sourceString);
      v11 = sourceString;
    }
    catch ( ... )
    {
      v15 = sub_180012238(
              retaddr,
              227,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
              (__int64)v11);
      v13 = sourceString;
      if ( !sourceString )
        return v15;
      v14 = *((_QWORD *)&v18 + 1) - (_QWORD)sourceString;
      if ( *((_QWORD *)&v18 + 1) - (_QWORD)sourceString >= 0x1000uLL )
      {
        v14 += 39LL;
        v13 = (PCNZWCH)*((_QWORD *)sourceString - 1);
        if ( (unsigned __int64)((char *)sourceString - (char *)v13 - 8) > 0x1F )
          goto LABEL_28;
      }
LABEL_29:
      j_j__o_free(v13, v14);
      return v15;
    }
  }
  v16 = *a2;
  String = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, &v16, v5);
  if ( String >= 0 )
  {
    String = WindowsCreateString(sourceString, v20 >> 1, a4);
    if ( String >= 0 )
    {
      v13 = sourceString;
      if ( sourceString )
      {
        v14 = *((_QWORD *)&v18 + 1) - (_QWORD)sourceString;
        if ( *((_QWORD *)&v18 + 1) - (_QWORD)sourceString >= 0x1000uLL )
        {
          v14 += 39LL;
          v13 = (PCNZWCH)*((_QWORD *)sourceString - 1);
          if ( (unsigned __int64)((char *)sourceString - (char *)v13 - 8) > 0x1F )
          {
LABEL_28:
            o__invalid_parameter_noinfo_noreturn(v13, v14);
            __debugbreak();
            goto LABEL_29;
          }
        }
        j_j__o_free(v13, v14);
      }
      return 0LL;
    }
    v12 = 232;
  }
  else
  {
    v12 = 229;
  }
  sub_180003268(retaddr, v12, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", String);
  v13 = sourceString;
  if ( !sourceString )
    return (unsigned int)String;
  v14 = *((_QWORD *)&v18 + 1) - (_QWORD)sourceString;
  if ( *((_QWORD *)&v18 + 1) - (_QWORD)sourceString < 0x1000uLL
    || (v14 += 39LL,
        v13 = (PCNZWCH)*((_QWORD *)sourceString - 1),
        (unsigned __int64)((char *)sourceString - (char *)v13 - 8) <= 0x1F) )
  {
    j_j__o_free(v13, v14);
    return (unsigned int)String;
  }
  goto LABEL_28;
}
