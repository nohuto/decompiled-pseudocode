/*
 * XREFs of ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x140014180
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140014B64 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z @ 0x1400142B4 (-ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400142F0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

char __fastcall CAudioDGModule::ParseCommandLine(void **this, const unsigned __int16 *a2, int *a3)
{
  char v3; // di
  const unsigned __int16 *v5; // rcx
  const unsigned __int16 *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  CAudioDGModule *v9; // rcx
  CAudioDGModule *v10; // rcx

  v3 = 0;
  v5 = a2;
  if ( !*a2 )
    return 0;
  do
    ++v5;
  while ( *v5 );
  if ( v5 <= a2 )
    return 0;
  do
    --v5;
  while ( v5 != a2 && *v5 == 32 );
  if ( v5 <= a2 )
    return 0;
  do
  {
    if ( *v5 == 32 )
      break;
    --v5;
  }
  while ( v5 != a2 );
  if ( v5 <= a2 )
    return 0;
  v6 = v5 + 1;
  do
  {
    if ( *v5 != 32 )
      break;
    *v5-- = 0;
  }
  while ( v5 != a2 );
  if ( v5 <= a2 )
    return 0;
  do
  {
    if ( *v5 == 32 )
      break;
    --v5;
  }
  while ( v5 != a2 );
  if ( v5 <= a2 )
    return 0;
  v7 = _o__wcstoui64(v5 + 1, 0LL, 16LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    this + 19,
    v7);
  v8 = _o__wcstoui64(v6, 0LL, 16LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    this + 15,
    v8);
  if ( CAudioDGModule::ValidateInheritedHandle(v9, this[19]) && CAudioDGModule::ValidateInheritedHandle(v10, this[15]) )
    return 1;
  return v3;
}
