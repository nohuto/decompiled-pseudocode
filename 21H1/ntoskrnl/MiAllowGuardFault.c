/*
 * XREFs of MiAllowGuardFault @ 0x1402F64E4
 * Callers:
 *     MiZeroFault @ 0x14020A440 (MiZeroFault.c)
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiAccessCheck @ 0x140311478 (MiAccessCheck.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1402F6560 (KeInvalidAccessAllowed.c)
 */

_BOOL8 __fastcall MiAllowGuardFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdi
  _BYTE *v3; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  v2 = a1 & 1;
  v3 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1 & 1) == 0 )
    goto LABEL_3;
  if ( *v3 == 1 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
LABEL_3:
    if ( (unsigned __int8)KeInvalidAccessAllowed(a1, 0LL) != 1 )
      return (CurrentThread->MiscFlags & 0x20) == 0;
LABEL_11:
    if ( !v2 || *v3 != 6 )
      return 0LL;
    return (CurrentThread->MiscFlags & 0x20) == 0;
  }
  if ( *v3 == 3 || *v3 == 6 )
    goto LABEL_11;
  return (CurrentThread->MiscFlags & 0x20) == 0;
}
