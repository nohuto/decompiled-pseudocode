/*
 * XREFs of ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W0_N111000@Z @ 0x180082FE0
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180083840 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
CreativeFramework::Actions::AppInstallService *__fastcall CreativeFramework::Actions::AppInstallService::AppInstallService(
        CreativeFramework::Actions::AppInstallService *this,
        wchar_t *a2,
        wchar_t *a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        wchar_t *Src,
        wchar_t *a9,
        wchar_t *a10)
{
  char *v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8

  *(_QWORD *)this = &CreativeFramework::Actions::AppInstallService::`vftable';
  v13 = (char *)this + 8;
  *((_QWORD *)v13 + 3) = 7LL;
  v14 = 0LL;
  *((_QWORD *)v13 + 2) = 0LL;
  *(_WORD *)v13 = 0;
  v15 = -1LL;
  if ( *a2 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a2[v16] );
  }
  else
  {
    v16 = 0LL;
  }
  std::wstring::assign((void **)v13, (char *)a2, v16);
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *a3 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a3[v17] );
  }
  else
  {
    v17 = 0LL;
  }
  std::wstring::assign((void **)this + 5, (char *)a3, v17);
  *((_BYTE *)this + 72) = a4;
  *((_BYTE *)this + 73) = a6;
  *((_BYTE *)this + 74) = a5;
  *((_BYTE *)this + 75) = a7;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( *Src )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( Src[v18] );
  }
  else
  {
    v18 = 0LL;
  }
  std::wstring::assign((void **)this + 14, (char *)Src, v18);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 25) = 7LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 88) = 0;
  *((_QWORD *)this + 29) = 7LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_WORD *)this + 104) = 0;
  if ( *a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a9[v19] );
  }
  else
  {
    v19 = 0LL;
  }
  std::wstring::assign((void **)this + 26, (char *)a9, v19);
  *((_QWORD *)this + 33) = 7LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_WORD *)this + 120) = 0;
  if ( *a10 )
  {
    do
      ++v15;
    while ( a10[v15] );
    v14 = v15;
  }
  std::wstring::assign((void **)this + 30, (char *)a10, v14);
  return this;
}
