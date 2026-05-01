/*
 * XREFs of ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x18045F91C
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x18045F89C (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x18024BC54 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall TryGetProcessCommandLine(__int64 a1, DWORD a2)
{
  char *v3; // rsi
  const void **v4; // rax
  const void **v5; // rdi
  ULONG ProcessInformationLength; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch]
  const void **v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-40h]
  char *v11; // [rsp+48h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  v10 = a1;
  v8 = 0;
  v3 = (char *)OpenProcess(0x1000u, 0, a2);
  v11 = v3;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    ProcessInformationLength = 0;
    if ( NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, 0LL, 0, &ProcessInformationLength) == -1073741820 )
    {
      v4 = (const void **)LocalAlloc(0x40u, ProcessInformationLength);
      v5 = v4;
      v9 = v4;
      if ( v4 )
      {
        if ( !NtQueryInformationProcess(
                v3,
                ProcessImageFileMapping|ProcessUserModeIOPL,
                v4,
                ProcessInformationLength,
                0LL) )
        {
          std::wstring::wstring((__int64)&v12, v5[1], (unsigned __int64)*(unsigned __int16 *)v5 >> 1);
          *(_QWORD *)(a1 + 16) = 0LL;
          *(_QWORD *)(a1 + 24) = 0LL;
          *(_OWORD *)a1 = v12;
          *(__m128i *)(a1 + 16) = si128;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          LOWORD(v12) = 0;
          v8 = 1;
          std::wstring::_Tidy_deallocate(&v12);
          v9 = 0LL;
          LocalFree(v5);
          CloseHandle(v3);
          return a1;
        }
      }
      else
      {
        v5 = 0LL;
      }
      v9 = 0LL;
      if ( v5 )
        LocalFree(v5);
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v8 = 1;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  return a1;
}
