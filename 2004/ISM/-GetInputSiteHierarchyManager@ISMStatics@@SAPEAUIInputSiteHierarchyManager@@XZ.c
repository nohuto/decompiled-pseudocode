/*
 * XREFs of ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18001EF54
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18001F228 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18001EF9C (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

struct IInputSiteHierarchyManager *ISMStatics::GetInputSiteHierarchyManager(void)
{
  struct IInputSiteHierarchyManager *v0; // rcx
  struct IInputSiteHierarchyManager **v1; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v1 = (struct IInputSiteHierarchyManager **)InputSiteHierarchyManager::Create(&v4);
    v0 = *v1;
    *v1 = 0LL;
    v2 = v4;
    ISMStatics::s_inputSiteHierarchyManager = v0;
    if ( v4 )
    {
      v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      return ISMStatics::s_inputSiteHierarchyManager;
    }
  }
  return v0;
}
