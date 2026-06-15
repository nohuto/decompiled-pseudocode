/*
 * XREFs of AudioServerCreateStreamConnection @ 0x1800DE530
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800604D0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerCreateStreamConnection(__int64 a1, _WORD *a2, _WORD *a3, unsigned int a4, _QWORD *a5)
{
  int v8; // edi
  std::_Ref_count_base *v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // r15
  std::_Ref_count_base *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  void *v16[2]; // [rsp+30h] [rbp-88h] BYREF
  __m128i si128; // [rsp+40h] [rbp-78h]
  void *v18[3]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-50h]

  v8 = -2147467261;
  if ( a5 )
  {
    *a5 = 0LL;
    v9 = qword_18019FF20;
    if ( qword_18019FF20 )
    {
      while ( 1 )
      {
        v10 = *((_DWORD *)v9 + 2);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)v9 + 2, v10 + 1, v10) )
        {
          v11 = g_weakStreamMonitorManager;
          v12 = qword_18019FF20;
          if ( g_weakStreamMonitorManager )
          {
            v13 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
            v14 = v13;
            if ( v13 )
            {
              *v13 = 0LL;
              v13[1] = 0LL;
            }
            else
            {
              v14 = 0LL;
            }
            if ( v14 )
            {
              std::wstring::wstring((__int64)v18, a3);
              std::wstring::wstring((__int64)v16, a2);
              v8 = (*(__int64 (__fastcall **)(__int64, void **, void **, _QWORD, _QWORD *))(*(_QWORD *)v11 + 24LL))(
                     v11,
                     v16,
                     v18,
                     a4,
                     v14);
              if ( si128.m128i_i64[1] >= 8uLL )
                std::_Deallocate<16,0>(v16[0], (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
              LOWORD(v16[0]) = 0;
              si128 = _mm_load_si128((const __m128i *)&_xmm);
              if ( v19 >= 8 )
                std::_Deallocate<16,0>(v18[0], (const struct std::nothrow_t *)(2 * v19 + 2));
              if ( v8 >= 0 )
                *a5 = v14;
            }
            else
            {
              v8 = -2147024882;
            }
          }
          if ( v12 )
            std::_Ref_count_base::_Decref(v12);
          return (unsigned int)v8;
        }
      }
    }
  }
  return (unsigned int)v8;
}
