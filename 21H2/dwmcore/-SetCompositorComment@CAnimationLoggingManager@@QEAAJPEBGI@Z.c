/*
 * XREFs of ?SetCompositorComment@CAnimationLoggingManager@@QEAAJPEBGI@Z @ 0x1801B174C
 * Callers:
 *     ?SetBufferProperty@CAnimationLoggingManager@@UEAAJIV?$span@E$0?0@gsl@@@Z @ 0x1801B16F0 (-SetBufferProperty@CAnimationLoggingManager@@UEAAJIV-$span@E$0-0@gsl@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035198 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1800351DC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimationLoggingManager::SetCompositorComment(
        CAnimationLoggingManager *this,
        const unsigned __int16 *a2)
{
  char *v2; // rbx
  char *v3; // rdi
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (char *)this + 152;
  v3 = (char *)std::wstring::wstring(v5);
  if ( v2 != v3 )
  {
    std::wstring::_Tidy_deallocate(v2);
    *(_OWORD *)v2 = *(_OWORD *)v3;
    *((_OWORD *)v2 + 1) = *((_OWORD *)v3 + 1);
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 7LL;
    *(_WORD *)v3 = 0;
  }
  std::wstring::_Tidy_deallocate(v5);
  return 0LL;
}
