/*
 * XREFs of ObCleanupSecurityDescriptor @ 0x140796748
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140796470 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140796624 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140244CE0 (RtlGetDaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ObCleanupSecurityDescriptor(void *a1)
{
  BOOLEAN v1; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN v2; // [rsp+40h] [rbp+18h] BYREF
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  v1 = 0;
  if ( RtlGetDaclSecurityDescriptor(a1, &v1, (PACL *)&P, &v2) >= 0 )
  {
    if ( v1 )
      ExFreePoolWithTag(P, 0);
  }
}
