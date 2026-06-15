/*
 * XREFs of sub_18012C318 @ 0x18012C318
 * Callers:
 *     sub_18012923C @ 0x18012923C (sub_18012923C.c)
 *     sub_18012952C @ 0x18012952C (sub_18012952C.c)
 *     sub_18012979C @ 0x18012979C (sub_18012979C.c)
 *     sub_180129A0C @ 0x180129A0C (sub_180129A0C.c)
 *     sub_180129C00 @ 0x180129C00 (sub_180129C00.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012BCD4 @ 0x18012BCD4 (sub_18012BCD4.c)
 */

__int64 __fastcall sub_18012C318(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, _DWORD *, _QWORD *); // [rsp+98h] [rbp+38h] BYREF

  LOWORD(v15) = a3;
  LODWORD(v14) = a1;
  v11 = 0;
  v12 = 0;
  v16 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    sub_1800461B8((__int64 *)&v16);
    v7 = sub_18012BCD4((__int64 *)&v16, &v12, a2, &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = (**v16)(v16, dword_180174478, a4);
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v15) = v7;
      LODWORD(v14) = 92;
      v13[0] = (__int64)"Create_MetadataDictionaryData";
      sub_180109778((__int64)&dword_18019C480, byte_18016C0FA, v8, v9, (const CHAR **)v13, (__int64)&v14, (__int64)&v15);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v15) = -2147024809;
      v13[0] = (__int64)"Create_MetadataDictionaryData";
      LODWORD(v14) = 87;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        a3,
        0LL,
        (const CHAR **)v13,
        (__int64)&v14,
        (__int64)&v15);
    }
    v6 = -2147024809;
  }
  sub_1800461B8((__int64 *)&v16);
  return v6;
}
