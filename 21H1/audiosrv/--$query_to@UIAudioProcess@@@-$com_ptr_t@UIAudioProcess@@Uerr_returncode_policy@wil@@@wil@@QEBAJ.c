/*
 * XREFs of ??$query_to@UIAudioProcess@@@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIAudioProcess@@@Z @ 0x1800D2360
 * Callers:
 *     ?GetProcess@CVirtualAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180072080 (-GetProcess@CVirtualAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetProcess@VirtualAudioSessionInfo@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180072570 (-GetProcess@VirtualAudioSessionInfo@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::query_to<IAudioProcess>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a2 = v2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
