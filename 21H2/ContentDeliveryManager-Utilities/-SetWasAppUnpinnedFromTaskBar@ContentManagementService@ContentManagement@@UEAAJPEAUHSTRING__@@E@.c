/*
 * XREFs of ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x1800332B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180032D84 (-GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementService::SetWasAppUnpinnedFromTaskBar(
        RTL_SRWLOCK *this,
        HSTRING a2,
        char a3)
{
  __int64 v4; // rdx
  int LocalTilePropertiesForApp; // ebx
  int v6; // eax
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  LocalTilePropertiesForApp = ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
                                this - 12,
                                a2,
                                &v10);
  if ( LocalTilePropertiesForApp >= 0 )
  {
    LOBYTE(v4) = a3;
    v6 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *, __int64))(*(_QWORD *)v10 + 88LL))(
           v10,
           v4);
    LocalTilePropertiesForApp = v6;
    if ( v6 >= 0 )
      LocalTilePropertiesForApp = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)LocalTilePropertiesForApp;
}
