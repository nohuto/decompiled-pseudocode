/*
 * XREFs of CreateSecurityDescriptor @ 0x1C0091FF0
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C008C5C0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C0299470 (InitSecurity.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v3; // ebx
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  NTSTATUS v11; // ebx

  v3 = AceListLength + 8;
  if ( AceListLength + 8 >= AceListLength && AceListLength + 48 >= AceListLength + 8 )
  {
    v7 = (struct _ACL *)Win32AllocPoolWithQuota(AceListLength + 48, 0x65737355u);
    v8 = v7;
    if ( v7 )
    {
      RtlCreateSecurityDescriptor(v7, 1u);
      if ( RtlCreateAcl(v8 + 5, v3, 2u) >= 0 && RtlAddAce(v8 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
      {
        v11 = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, DaclDefaulted);
        RtlSetSaclSecurityDescriptor(v8, 0, 0LL, 0);
        RtlSetOwnerSecurityDescriptor(v8, 0LL, 0);
        RtlSetGroupSecurityDescriptor(v8, 0LL, 0);
        if ( v11 >= 0 )
          return v8;
      }
      Win32FreePool((__int64)v8, v9, v10);
    }
  }
  return 0LL;
}
