/*
 * XREFs of sub_18010F6E0 @ 0x18010F6E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18010D204 @ 0x18010D204 (sub_18010D204.c)
 *     sub_180111048 @ 0x180111048 (sub_180111048.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     atexit @ 0x180123E24 (atexit.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180125270 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_18010F6E0(__int64 a1, __int64 a2)
{
  __m128i v4; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v6; // [rsp+40h] [rbp-C0h]
  char v7; // [rsp+50h] [rbp-B0h]
  _QWORD v8[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v9; // [rsp+78h] [rbp-88h]
  __int64 v10; // [rsp+80h] [rbp-80h] BYREF
  __int128 v11; // [rsp+90h] [rbp-70h]
  char v12; // [rsp+A0h] [rbp-60h]
  _QWORD v13[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v14; // [rsp+C8h] [rbp-38h]
  __int64 v15; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v16; // [rsp+E0h] [rbp-20h]
  char v17; // [rsp+F0h] [rbp-10h]
  _QWORD v18[4]; // [rsp+F8h] [rbp-8h] BYREF
  char v19; // [rsp+118h] [rbp+18h]
  __int64 v20; // [rsp+120h] [rbp+20h] BYREF
  __int128 v21; // [rsp+130h] [rbp+30h]
  char v22; // [rsp+140h] [rbp+40h]
  _QWORD v23[4]; // [rsp+148h] [rbp+48h] BYREF
  char v24; // [rsp+168h] [rbp+68h]
  __int64 v25; // [rsp+170h] [rbp+70h] BYREF
  __int128 v26; // [rsp+180h] [rbp+80h]
  char v27; // [rsp+190h] [rbp+90h]
  _QWORD v28[4]; // [rsp+198h] [rbp+98h] BYREF
  char v29; // [rsp+1B8h] [rbp+B8h]
  __int64 v30; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v31; // [rsp+1D0h] [rbp+D0h]
  char v32; // [rsp+1E0h] [rbp+E0h]
  char v33; // [rsp+1E8h] [rbp+E8h] BYREF

  if ( dword_180221850 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180221850);
    if ( dword_180221850 == -1 )
    {
      v6 = 0LL;
      sub_180020B7C(v5, (__int64)&qword_180212558);
      v7 = 0;
      v8[2] = 0LL;
      v8[3] = 0LL;
      sub_180020B7C(v8, (__int64)&qword_180212498);
      v9 = 0;
      v11 = 0LL;
      sub_180020B7C(&v10, (__int64)&qword_180212698);
      v12 = 0;
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_180020B7C(v13, (__int64)&qword_180212598);
      v14 = 2;
      v16 = 0LL;
      sub_180020B7C(&v15, (__int64)&qword_1802124B8);
      v17 = 2;
      v18[2] = 0LL;
      v18[3] = 0LL;
      sub_180020B7C(v18, (__int64)&qword_180212578);
      v19 = 3;
      v21 = 0LL;
      sub_180020B7C(&v20, (__int64)&qword_1802124F8);
      v22 = 3;
      v23[2] = 0LL;
      v23[3] = 0LL;
      sub_180020B7C(v23, (__int64)&qword_1802125B8);
      v24 = 1;
      v26 = 0LL;
      sub_180020B7C(&v25, (__int64)&qword_180212538);
      v27 = 1;
      v28[2] = 0LL;
      v28[3] = 0LL;
      sub_180020B7C(v28, (__int64)&qword_1802125F8);
      v29 = 5;
      v31 = 0LL;
      sub_180020B7C(&v30, (__int64)&qword_180212518);
      v32 = 5;
      v4.m128i_i64[0] = (__int64)v5;
      v4.m128i_i64[1] = (__int64)&v33;
      sub_18010D204(&qword_180221810, &v4);
      `eh vector destructor iterator'(v5, 0x28uLL, 0xBuLL, (void (*)(void *))std::string::_Tidy_deallocate);
      atexit(sub_180139110);
      Init_thread_footer(&dword_180221850);
    }
  }
  v4.m128i_i64[0] = 0LL;
  sub_180111048(&qword_180221810, &v4, a2);
  if ( v4.m128i_i64[0] == qword_180221818 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return *(_BYTE *)(v4.m128i_i64[0] + 48);
}
