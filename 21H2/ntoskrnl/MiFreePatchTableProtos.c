/*
 * XREFs of MiFreePatchTableProtos @ 0x140973418
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x14025D494 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePatchTableProtos(PVOID P)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rdi

  v1 = 0LL;
  v3 = 8LL * (((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0));
  if ( v3 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)P + v1);
      v1 += 4096LL;
    }
    while ( v1 < v3 );
  }
  ExFreePoolWithTag(P, 0);
}
