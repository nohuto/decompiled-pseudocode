/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x18013C990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800F0360 (_alloca_probe.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1801397B0 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18013BA58 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18013C7F0 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
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
  char Source[1024]; // [rsp+20h] [rbp-1418h] BYREF
  char v9[4096]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (volatile signed __int32 **)((char *)this + 184);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 23);
  if ( !v5 )
  {
    wil::GetFailureLogString((wil *)v9, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)Source, (char *)0x400, "%ws", v9);
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    wil::details::shared_buffer::create(v4, Source, (volatile signed __int32 *)(v6 + 1));
    v5 = *v4;
  }
  return (const char *)((unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL));
}
