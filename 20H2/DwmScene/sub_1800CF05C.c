/*
 * XREFs of sub_1800CF05C @ 0x1800CF05C
 * Callers:
 *     sub_1800CEFDC @ 0x1800CEFDC (sub_1800CEFDC.c)
 *     sub_1800CF3A0 @ 0x1800CF3A0 (sub_1800CF3A0.c)
 * Callees:
 *     sub_1800CEC50 @ 0x1800CEC50 (sub_1800CEC50.c)
 *     sub_1801021D4 @ 0x1801021D4 (sub_1801021D4.c)
 *     atexit @ 0x18011E554 (atexit.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18011EDA8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800CF05C(_QWORD *a1, unsigned int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v12; // rax
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h]
  unsigned int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  v16 = HIDWORD(a1);
  v15 = a2;
  if ( dword_18021A368 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18021A368);
    if ( dword_18021A368 == -1 )
    {
      v12 = operator new(0x38uLL);
      *v12 = v12;
      v12[1] = v12;
      v12[2] = v12;
      *((_WORD *)v12 + 12) = 257;
      qword_18021A358 = (__int64)v12;
      atexit(sub_180131250);
      Init_thread_footer(&dword_18021A368);
    }
  }
  v4 = operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = std::_Ref_count_obj<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    sub_1801021D4(v4 + 2, a2);
    v5[2] = Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
    v14 = (__int64)(v5 + 4);
    v5[4] = 0LL;
    v5[5] = 0LL;
    v6 = operator new(0x60uLL);
    *v6 = v6;
    v6[1] = v6;
    v6[2] = v6;
    *((_WORD *)v6 + 12) = 257;
    v5[4] = v6;
  }
  else
  {
    v5 = 0LL;
  }
  v7 = qword_18021A358;
  v14 = qword_18021A358;
  v8 = operator new(0x38uLL);
  v8[8] = a2;
  *((_QWORD *)v8 + 5) = v5 + 2;
  *((_QWORD *)v8 + 6) = v5;
  *(_QWORD *)v8 = v7;
  *((_QWORD *)v8 + 1) = v7;
  *((_QWORD *)v8 + 2) = v7;
  *((_WORD *)v8 + 12) = 0;
  sub_1800CEC50(&qword_18021A358, (__int64)&v13, 0, v8 + 8, v8);
  v9 = v13;
  *a1 = 0LL;
  a1[1] = 0LL;
  v10 = *(_QWORD *)(v9 + 48);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *a1 = *(_QWORD *)(v9 + 40);
  a1[1] = *(_QWORD *)(v9 + 48);
  return a1;
}
