/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180004DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18000428C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1800044F8 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800049A0 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CEB30 (_alloca_probe.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  volatile signed __int32 **v4; // rbx
  volatile signed __int32 *v5; // rax
  __int64 v6; // r8
  char v8[1024]; // [rsp+20h] [rbp-1418h] BYREF
  wchar_t v9[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (volatile signed __int32 **)((char *)this + 184);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 23);
  if ( !v5 )
  {
    wil::GetFailureLogString(v9, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)v8, (char *)0x400, "%ws", (const char *)v9);
    v6 = -1LL;
    do
      ++v6;
    while ( v8[v6] );
    wil::details::shared_buffer::create(v4, v8, v6 + 1);
    v5 = *v4;
  }
  return (const char *)((unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL));
}
