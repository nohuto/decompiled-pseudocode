/*
 * XREFs of ?ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z @ 0x1C0109730
 * Callers:
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C01462BC (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x1C003616C (-ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z.c)
 */

__int64 __fastcall ndisCreateSecurityDescriptorEx(ACL *a1)
{
  __int64 result; // rax
  NTSTATUS v2; // ebx
  PACL Dacl; // [rsp+30h] [rbp+8h] BYREF

  Dacl = a1;
  RtlCreateSecurityDescriptor(&unk_1C00E5D18, 1u);
  Dacl = 0LL;
  result = ndisBuildDeviceAcl(&Dacl, 128);
  if ( (int)result >= 0 )
  {
    v2 = RtlSetDaclSecurityDescriptor(&unk_1C00E5D18, 1u, Dacl, 0);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(Dacl, 0);
      return (unsigned int)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
