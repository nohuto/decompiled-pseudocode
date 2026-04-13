/*
 * XREFs of ?GetName@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800AD2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreativeFramework::CommonHelper::SettingsContainer::GetName(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // rbx
  PCWSTR StringRawBuffer; // rax
  char *v6; // rdx
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 8) + 48LL))(*(_QWORD *)(a1 + 8), &string);
  v4 = 0LL;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800AD346LL);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  *(_QWORD *)(a2 + 24) = 7LL;
  v6 = (char *)StringRawBuffer;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  if ( *StringRawBuffer )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v6[2 * v7] );
    v4 = v7;
  }
  std::wstring::assign((void **)a2, v6, v4);
  return a2;
}
