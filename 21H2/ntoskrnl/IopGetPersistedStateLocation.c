/*
 * XREFs of IopGetPersistedStateLocation @ 0x1407443F8
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x1407444A8 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // esi
  __int64 i; // rdx
  void *Pool2; // rbx
  int PersistedStateLocation; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v11) = 0;
  v4 = 256;
  for ( i = 256LL; ; i = v4 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, i, 1665560393LL);
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_5;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(L"SecureDeviceClass", Pool2, v4, (__int64)&v11);
    v9 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v11 <= v4 )
    {
      v9 = -1073741595;
      goto LABEL_10;
    }
    v4 = v11;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_10:
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
  }
LABEL_5:
  result = v9;
  *a4 = Pool2;
  return result;
}
