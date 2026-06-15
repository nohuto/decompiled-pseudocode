/*
 * XREFs of sub_18002D9A0 @ 0x18002D9A0
 * Callers:
 *     sub_18002DC30 @ 0x18002DC30 (sub_18002DC30.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002D9A0(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // eax
  __int64 *v7; // [rsp+20h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h] BYREF
  __int128 v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+80h] [rbp+10h] BYREF
  int v13; // [rsp+98h] [rbp+28h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  result = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 496) == 1 )
  {
    *(_DWORD *)(a1 + 496) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        LOBYTE(result) = *a2 == 1;
        v13 = result;
        v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1 + 12, &v8);
        if ( v6 < 0 )
          goto LABEL_9;
        v7 = &v9;
        v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 24LL))(v8, &unk_1800451B8, 1LL);
        if ( v6 < 0
          || (HIDWORD(v11) = 0,
              v10 = xmmword_1800451A8,
              *(_QWORD *)&v11 = 0x200000039LL,
              DWORD2(v11) = *(unsigned __int16 *)(a1 + 492),
              LODWORD(v7) = 4,
              v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, __int64 *, int *))(*(_QWORD *)v9 + 24LL))(
                     v9,
                     &v10,
                     32LL,
                     &v13,
                     v7,
                     &v12),
              v6 < 0) )
        {
LABEL_9:
          if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
            && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
            && *((_BYTE *)off_18004F000 + 25) >= 5u )
          {
            sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xBu, &stru_1800451C8, v6);
          }
        }
        result = v9;
        v4 = v8;
      }
    }
  }
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    v4 = v8;
  }
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
