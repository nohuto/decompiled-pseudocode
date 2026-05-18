/*
 * XREFs of sub_1800C2B80 @ 0x1800C2B80
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180024850 @ 0x180024850 (sub_180024850.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B244 @ 0x18007B244 (sub_18007B244.c)
 *     sub_18007B2A0 @ 0x18007B2A0 (sub_18007B2A0.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 *     sub_1801042DC @ 0x1801042DC (sub_1801042DC.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C2B80(__int64 a1, int a2)
{
  __int64 v4; // r14
  void **v5; // rdx
  void **v6; // rcx
  char *v7; // rbx
  size_t v8; // rdi
  int v9; // edi
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  char *v17; // rax
  char v19[16]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  char v22[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+78h] [rbp-88h] BYREF
  void *Buf1[2]; // [rsp+88h] [rbp-78h] BYREF
  size_t Size[2]; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v29[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+D0h] [rbp-30h]
  __int64 v31[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v32[4]; // [rsp+F8h] [rbp-8h] BYREF

  v4 = sub_18007AB84(a1, a2);
  v20 = 0LL;
  v21 = 7LL;
  *(_WORD *)v19 = 0;
  std::wstring::assign(v19, &unk_1801CB868, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, void *, char *))(*(_QWORD *)v4 + 96LL))(v4, v32, &unk_180211388, v19);
  sub_180024850(Buf1);
  v5 = &qword_180214688;
  if ( *((_QWORD *)&xmmword_180214698 + 1) >= 0x10uLL )
    v5 = (void **)qword_180214688;
  v6 = Buf1;
  v7 = (char *)Buf1[0];
  v8 = Size[1];
  if ( Size[1] >= 0x10 )
    v6 = (void **)Buf1[0];
  if ( Size[0] == (_QWORD)xmmword_180214698 && !memcmp(v6, v5, Size[0]) )
  {
    v28 = 0LL;
    sub_18007B244(a1, &v28, 0);
    v9 = 0;
    if ( (int)sub_18007B2A0(a1) > 0 )
    {
      while ( 1 )
      {
        v25 = 0LL;
        sub_18007B244(a1, &v25, v9);
        if ( *(_DWORD *)(v25 + 112) == a2 )
          break;
        v11 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
        if ( *((_QWORD *)&v25 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        if ( ++v9 >= (int)sub_18007B2A0(a1) )
          goto LABEL_19;
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v28, &v25);
      v12 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
      if ( *((_QWORD *)&v25 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
    }
LABEL_19:
    v13 = sub_1800BB82C(v28, v10);
    v23 = 0LL;
    v24 = 7LL;
    *(_WORD *)v22 = 0;
    std::wstring::assign(v22, &unk_1801CB868, 0LL);
    (*(void (__fastcall **)(__int64, __int64 *, void *, char *))(*(_QWORD *)v4 + 96LL))(v4, v31, &unk_180211368, v22);
    if ( v31[2] )
    {
      sub_180024850(v29);
      v14 = v29;
      if ( v30 >= 0x10 )
        v14 = (_QWORD *)v29[0];
      sub_1801042DC(*(_QWORD *)(v13 + 120), v14, v29[2], Buf1);
      if ( v30 >= 0x10 )
      {
        v15 = v29[0];
        if ( v30 + 1 >= 0x1000 )
        {
          v15 = *(_QWORD *)(v29[0] - 8LL);
          if ( (unsigned __int64)(v29[0] - v15 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v15, v30 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v15);
      }
    }
    unknown_libname_103(v31);
    v16 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
    if ( *((_QWORD *)&v28 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v7 = (char *)Buf1[0];
    v8 = Size[1];
  }
  if ( v8 >= 0x10 )
  {
    v17 = v7;
    if ( v8 + 1 >= 0x1000 )
    {
      v7 = (char *)*((_QWORD *)v7 - 1);
      if ( (unsigned __int64)(v17 - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v7);
  }
  *(__m128i *)Size = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(Buf1[0]) = 0;
  return unknown_libname_103(v32);
}
