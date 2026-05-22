/*
 * XREFs of ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800C6514
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_4f2ec4d072da510feb5622880d58a28d___ @ 0x18014F3B4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_4f2ec4d072da510.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_50bd02ca6402c71620c7421f2ab232fc___ @ 0x18014F468 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_50bd02ca6402c71.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_81a1f3a0b0089925dbb8abbd9e8c6b20___ @ 0x18014F51C (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_81a1f3a0b008992.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___ @ 0x18014F5D0 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ae4609f332701fb.c)
 *     ??$LockExclusive@V_lambda_ed6a7cdcc708de0d2bf982d91253a679_@@@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAX$$QEAV_lambda_ed6a7cdcc708de0d2bf982d91253a679_@@@Z @ 0x18014F684 (--$LockExclusive@V_lambda_ed6a7cdcc708de0d2bf982d91253a679_@@@HolographicDeviceSnapshot@Holograp.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285___ @ 0x180151328 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic-.c)
 *     ?AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180159C48 (-AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@A.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x18016939C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18016939C.c)
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18016ABB4 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A750 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     atexit @ 0x18003BEFC (atexit.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x18003C868 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C8D0 (_Init_thread_header.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ??0HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800C5794 (--0HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800C5BEC (--1HolographicDeviceSnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
struct Windows::Internal::Holographic::HolographicDeviceSnapshot *Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance(
        void)
{
  __int64 v0; // rbx
  Windows::Internal::Holographic::HolographicDeviceSnapshot *v1; // rbx
  RegistryHelpers *v2; // rcx
  bool v3; // di
  Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rax
  Windows::Internal::Holographic::HolographicDeviceSnapshot *v5; // rbx
  void *v7; // [rsp+48h] [rbp+10h]

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( __TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA > *(_DWORD *)(v0 + 16) )
  {
    Init_thread_header(&__TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA);
    if ( __TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA == -1 )
    {
      InitializeCriticalSectionEx(
        &`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_Lock,
        0,
        0);
      atexit(`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::`dynamic atexit destructor for 's_Lock'');
      Init_thread_footer(&__TSS0__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA);
    }
  }
  if ( __TSS1__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA > *(_DWORD *)(v0 + 16) )
  {
    Init_thread_header(&__TSS1__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA);
    if ( __TSS1__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA == -1 )
    {
      `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot = 0LL;
      atexit(`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::`dynamic atexit destructor for 's_spDeviceSnapshot'');
      Init_thread_footer(&__TSS1__1__Instance_HolographicDeviceSnapshot_Holographic_Internal_Windows__KAAEAV2345_XZ_4HA);
    }
  }
  v1 = (Windows::Internal::Holographic::HolographicDeviceSnapshot *)`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot;
  if ( !`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot )
  {
    EnterCriticalSection(&`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_Lock);
    v1 = (Windows::Internal::Holographic::HolographicDeviceSnapshot *)`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot;
    if ( !`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot )
    {
      v3 = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                           v2,
                           (const WCHAR *)&stru_1801C42D0,
                           L"HolographicSnapshotEnabled",
                           0LL) != 0;
      v7 = operator new(0x80uLL);
      memset_0(v7, 0, 0x80uLL);
      v4 = Windows::Internal::Holographic::HolographicDeviceSnapshot::HolographicDeviceSnapshot((Windows::Internal::Holographic::HolographicDeviceSnapshot *)v7);
      v5 = `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot;
      `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot = v4;
      if ( v5 )
      {
        Windows::Internal::Holographic::HolographicDeviceSnapshot::~HolographicDeviceSnapshot(v5);
        operator delete(v5, (const struct std::nothrow_t *)0x80);
        v4 = `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot;
      }
      *((_BYTE *)v4 + 120) = v3;
      v1 = `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot;
      _InterlockedExchange64(
        &`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_pDeviceSnapshot,
        (__int64)`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_spDeviceSnapshot);
    }
    LeaveCriticalSection(&`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_Lock);
  }
  return v1;
}
