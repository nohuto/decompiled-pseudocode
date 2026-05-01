/*
 * XREFs of ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x1801D7110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::Close(CJumpViewExperienceManager *this)
{
  __int64 v2; // rsi
  int (__fastcall *v3)(__int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 98) )
  {
    v2 = *((_QWORD *)this + 43);
    if ( v2 )
    {
      v5 = 0LL;
      v3 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
      if ( v3(v2, &IID_IActiveZBandNotificationForMonitorService, &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704, &v5) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *((unsigned int *)this + 98));
      *((_DWORD *)this + 98) = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    }
  }
  if ( *((_DWORD *)this + 96) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 32LL))(*((_QWORD *)this + 46));
    *((_DWORD *)this + 96) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  }
  if ( *((_DWORD *)this + 97) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 32LL))(*((_QWORD *)this + 47));
    *((_DWORD *)this + 97) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  return 0LL;
}
