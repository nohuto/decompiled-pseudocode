/*
 * XREFs of PiAuCheckClientInteractive @ 0x140949890
 * Callers:
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     PiAuCheckTokenMembership @ 0x140949950 (PiAuCheckTokenMembership.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  void *Pool2; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Pool2 = (void *)ExAllocatePool2(256LL, 12LL, 538996816LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( v4 >= 0 )
    {
      *RtlSubAuthoritySid(v3, 0) = 4;
      if ( RtlValidSid(v3) )
      {
        v4 = PiAuCheckTokenMembership(v3);
        if ( v4 >= 0 )
          *a1 = 0;
      }
      else
      {
        v4 = -1073741595;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
