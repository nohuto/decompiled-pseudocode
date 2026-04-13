/*
 * XREFs of ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x180028210
 * Callers:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180028300 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800170A8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
std::ios_base::failure *__fastcall std::ios_base::failure::failure(
        std::ios_base::failure *this,
        char *a2,
        const struct std::error_code *a3)
{
  size_t v5; // r8
  __int64 v6; // rax
  __int128 v7; // xmm6
  const char *v8; // rax
  const char *v10[2]; // [rsp+20h] [rbp-58h] BYREF
  void *v11[3]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v10[1] = (const char *)-2LL;
  v10[0] = (const char *)this;
  v12 = 15LL;
  v5 = 0LL;
  v11[2] = 0LL;
  LOBYTE(v11[0]) = 0;
  if ( *a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v5 = v6;
  }
  std::string::assign(v11, a2, v5);
  v7 = *(_OWORD *)a3;
  v8 = (const char *)v11;
  if ( v12 >= 0x10 )
    v8 = (const char *)v11[0];
  v10[0] = v8;
  exception::exception(this, v10);
  *(_QWORD *)this = &std::range_error::`vftable';
  *(_OWORD *)((char *)this + 24) = v7;
  if ( v12 >= 0x10 )
    operator delete(v11[0]);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
