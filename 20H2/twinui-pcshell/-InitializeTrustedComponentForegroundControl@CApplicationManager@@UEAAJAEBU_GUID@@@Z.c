/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x180084980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18008276C (-s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::InitializeTrustedComponentForegroundControl(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  HRESULT Instance; // ebx
  unsigned int v5; // r8d
  struct CApplicationManager::TRUSTED_COMPONENT_REGISTRATION near **i; // r9
  __int64 v7; // rax
  LPVOID *ppv; // rdi
  LPVOID v9; // rcx
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  Instance = -2147024891;
  v5 = 0;
  for ( i = &CApplicationManager::s_rgTrustedComponentRegMap; ; i += 2 )
  {
    v7 = *(_QWORD *)*i - *(_QWORD *)&a2->Data1;
    if ( !v7 )
      v7 = *((_QWORD *)*i + 1) - *(_QWORD *)a2->Data4;
    if ( !v7 )
      break;
    if ( ++v5 >= 0xB )
      return (unsigned int)Instance;
  }
  ppv = (LPVOID *)(&CApplicationManager::s_rgTrustedComponentRegMap + 2 * v5 + 1);
  v9 = *ppv;
  if ( *ppv )
  {
    *ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Instance = CoCreateInstance(a2, 0LL, 0x401u, &GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd, ppv);
  if ( Instance >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    Instance = CTrustedComponentForegroundControl::s_CreateInstance(
                 (struct IImmersiveApplicationManager *)((unsigned __int64)&this[-8] & -(__int64)(this != (const struct _GUID *)280)),
                 this - 8,
                 &v11);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(LPVOID, void *))(*(_QWORD *)*ppv + 24LL))(*ppv, v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
  return (unsigned int)Instance;
}
