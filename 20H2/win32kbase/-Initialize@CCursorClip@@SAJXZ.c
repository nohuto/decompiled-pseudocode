/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x1C00083C4
 * Callers:
 *     InitializeInputComponents @ 0x1C009C80C (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C000853C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 */

__int64 CCursorClip::Initialize(void)
{
  __int64 v0; // rax
  void **v1; // rcx
  unsigned int v2; // ebx

  v0 = Win32AllocPoolZInit(0x60uLL);
  v2 = 0;
  if ( v0 )
  {
    v1 = &CPushLock::`vftable';
    *(_OWORD *)v0 = 0LL;
    *(_OWORD *)(v0 + 16) = 0LL;
    *(_QWORD *)(v0 + 32) = &CPushLock::`vftable';
    *(_QWORD *)(v0 + 40) = 0LL;
    *(_QWORD *)(v0 + 48) = 0LL;
    *(_OWORD *)(v0 + 56) = 0LL;
    *(_DWORD *)(v0 + 72) = 0;
    *(_QWORD *)(v0 + 80) = 0LL;
    *(_DWORD *)(v0 + 88) = 0;
    *(_WORD *)(v0 + 92) = 0;
  }
  else
  {
    v0 = 0LL;
  }
  gpCursorClip = (CCursorClip *)v0;
  if ( v0 )
    InputExtensibilityCallout::RegisterCoreMsgProvider(v1, 1LL, 0LL);
  else
    return (unsigned int)-1073741801;
  return v2;
}
