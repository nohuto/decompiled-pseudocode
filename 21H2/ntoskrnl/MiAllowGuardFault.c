/*
 * XREFs of MiAllowGuardFault @ 0x140230B44
 * Callers:
 *     MiAccessCheck @ 0x14023EE78 (MiAccessCheck.c)
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140230BA0 (KeInvalidAccessAllowed.c)
 */

_BOOL8 __fastcall MiAllowGuardFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _BYTE *v2; // rax
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  v2 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1 & 1) == 0 )
  {
    v3 = (unsigned __int8)KeInvalidAccessAllowed(a1, 0LL) == 0;
    goto LABEL_4;
  }
  if ( *v2 == 1 || *v2 == 3 || *v2 == 6 )
  {
    v3 = *v2 == 6;
LABEL_4:
    if ( !v3 )
      return 0LL;
  }
  return (CurrentThread->MiscFlags & 0x20) == 0;
}
