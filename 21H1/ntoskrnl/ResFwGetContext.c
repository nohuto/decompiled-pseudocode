/*
 * XREFs of ResFwGetContext @ 0x1409EE298
 * Callers:
 *     BgGetContext @ 0x1409EE248 (BgGetContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x140342670 (MmAllocatePagesForMdlEx.c)
 */

__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  char *v1; // rbx
  char v3; // al
  int v4; // ecx
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  PMDL PagesForMdl; // rax
  PMDL v8; // rdi
  char *MappedSystemVa; // rdx
  __int64 v10; // r8
  __int64 result; // rax

  v1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v3 = dword_140C132D0;
  *a1 = 0LL;
  if ( (v3 & 1) == 0 )
    return 3221225473LL;
  v4 = dword_140C132EC;
  if ( dword_140C132F0 >= (unsigned int)dword_140C132EC )
    v4 = dword_140C132F0;
  v5 = (dword_140C132FC + v4 + dword_140C132F8 + 20479) & 0xFFFFF000;
  v6 = ((v5 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v5 + v6, MmCached, 5u);
  v8 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  }
  else
  {
    MappedSystemVa = 0LL;
  }
  v10 = qword_140C13300;
  *(_QWORD *)(qword_140C13300 + 8) = v8;
  *(_QWORD *)(v10 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
    v1 = &MappedSystemVa[v6];
  *(_DWORD *)(v10 + 24) = MappedSystemVa != 0LL ? v5 + v6 : 0;
  *(_DWORD *)(v10 + 248) = MappedSystemVa != 0LL ? v5 : 0;
  *(_QWORD *)(v10 + 240) = v1;
  BgpAnimationRegionSave = qword_140C13390;
  BgpTextRegionSave = qword_140C13398;
  result = 0LL;
  *a1 = v10;
  return result;
}
