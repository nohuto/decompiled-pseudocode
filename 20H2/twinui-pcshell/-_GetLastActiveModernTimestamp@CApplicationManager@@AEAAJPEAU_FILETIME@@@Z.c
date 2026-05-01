/*
 * XREFs of ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x18007E9B0
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x18007E860 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18007EA14 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetLastActiveModernTimestamp(CApplicationManager *this, struct _FILETIME *a2)
{
  struct _FILETIME v4; // rbx
  int LastActiveModernApp; // edi
  struct IImmersiveApplicationInternal *v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  LastActiveModernApp = CApplicationManager::_GetLastActiveModernApp(this, &v7);
  if ( LastActiveModernApp >= 0 )
    v4 = *(struct _FILETIME *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, char *))(*(_QWORD *)v7 + 288LL))(
                                v7,
                                &v8);
  *a2 = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)LastActiveModernApp;
}
