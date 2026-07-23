/*
 * XREFs of PiAuCheckClientInteractive @ 0x1408A3C08
 * Callers:
 *     PiCMQueryRemove @ 0x14072EEE8 (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14026D6C0 (RtlSubAuthoritySid.c)
 *     RtlValidSid @ 0x140651540 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x1406BC580 (RtlInitializeSid.c)
 *     PiAuCheckTokenMembership @ 0x1408A3CC8 (PiAuCheckTokenMembership.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  PVOID PoolWithTag; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20207050u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( v4 >= 0 )
    {
      *RtlSubAuthoritySid(v3, 0) = 4;
      if ( !RtlValidSid(v3) )
        v4 = -1073741595;
      if ( v4 >= 0 )
      {
        v4 = PiAuCheckTokenMembership(v3);
        if ( v4 >= 0 )
          *a1 = 0;
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
