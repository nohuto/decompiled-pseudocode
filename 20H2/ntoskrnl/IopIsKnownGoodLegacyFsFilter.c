/*
 * XREFs of IopIsKnownGoodLegacyFsFilter @ 0x140504F98
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140361624 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C5980 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     memcmp @ 0x1403D2070 (memcmp.c)
 */

bool __fastcall IopIsKnownGoodLegacyFsFilter(const void **a1)
{
  __int16 v1; // bp
  const void **v2; // rdi
  unsigned int i; // ebx

  v1 = *(_WORD *)a1;
  v2 = (const void **)&off_1400094F8;
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_WORD *)v2 - 4) == v1 && !memcmp(*v2, a1[1], *((unsigned __int16 *)v2 - 4)) )
      break;
    v2 += 2;
  }
  return i < 3;
}
