/*
 * XREFs of MiCreateSpecialPurposeMemoryPageFile @ 0x14096E2E0
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 * Callees:
 *     MiInsertPageFileInList @ 0x14084B418 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 *     MiCreatePagefileMemoryExtents @ 0x14096E06C (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePagefile @ 0x14096F074 (MiDeletePagefile.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateSpecialPurposeMemoryPageFile(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        UNICODE_STRING *a4)
{
  UNICODE_STRING *v5; // rsi
  int PagefileMemoryExtents; // ebx
  _BYTE *Pagefile; // rax
  __int64 v8; // rdx
  void *v9; // rdi

  v5 = a4;
  if ( (((unsigned __int16)a3 | (unsigned __int16)a2) & 0x1FF) != 0 )
  {
    PagefileMemoryExtents = -1073741811;
  }
  else if ( a2 == a3 )
  {
    Pagefile = MiCreatePagefile(a1, 0LL, 0LL, a2, a3, a4, 0, 4);
    v5 = 0LL;
    v9 = Pagefile;
    if ( !Pagefile )
      return (unsigned int)-1073741670;
    PagefileMemoryExtents = MiCreatePagefileMemoryExtents((__int64)Pagefile, v8, a2);
    if ( PagefileMemoryExtents >= 0 )
    {
      PagefileMemoryExtents = MiInsertPageFileInList((__int64)v9);
      if ( PagefileMemoryExtents >= 0 )
        return 0;
    }
    MiDeletePagefile(v9);
  }
  else
  {
    PagefileMemoryExtents = -1073741637;
  }
  if ( v5 )
    ExFreePoolWithTag(v5->Buffer, 0);
  return (unsigned int)PagefileMemoryExtents;
}
