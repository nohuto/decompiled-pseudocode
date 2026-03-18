/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x1C0007E00
 * Callers:
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0007EAC (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C0007F84 (--0CInputConfig@@AEAA@XZ.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 */

NTSTATUS CInputConfig::Initialize(void)
{
  struct _ERESOURCE *PoolWithTag; // rax
  NTSTATUS result; // eax
  CInputConfig *v2; // rax
  __int64 v3; // rcx

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  CInputConfig::slock = PoolWithTag;
  if ( PoolWithTag )
  {
    result = ExInitializeResourceLite(PoolWithTag);
    if ( result < 0 )
      return result;
    v2 = (CInputConfig *)Win32AllocPoolZInit(0x5C8uLL);
    if ( v2 )
      v2 = CInputConfig::CInputConfig(v2);
    gpInputConfig = v2;
    if ( v2 )
    {
      InputExtensibilityCallout::RegisterCoreMsgProvider(v3, 7LL, 0LL);
      return 0;
    }
  }
  return -1073741801;
}
