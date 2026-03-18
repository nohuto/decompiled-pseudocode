/*
 * XREFs of ?DNG_CopyMemory@@YGHPAU_DNGINTERNALDATA@@PAX1J@Z @ 0x1EBE92
 * Callers:
 *     RenderNineGridInternal @ 0x50CC0 (RenderNineGridInternal.c)
 *     DNG_StretchCol @ 0xB7EF6 (DNG_StretchCol.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge DNG_CopyMemory@<eax>(
        char *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _DNGINTERNALDATA *Src,
        char *MaxCount,
        void *a5,
        int a6)
{
  char *v7; // edi
  char *Srca; // [esp+18h] [ebp+8h]

  if ( (int)MaxCount <= 0 )
    return 0;
  if ( &MaxCount[(int)a1] <= a1 )
    return 0;
  v7 = &MaxCount[(_DWORD)Src];
  if ( &MaxCount[(int)Src] <= (char *)Src )
    return 0;
  Srca = (char *)a2[51];
  if ( Srca > a1 || (unsigned int)&MaxCount[(_DWORD)a1] > a2[52] )
    return 0;
  if ( (Srca > (char *)Src || (unsigned int)v7 > a2[52]) && (a2[53] > (unsigned int)Src || (unsigned int)v7 > a2[54]) )
    return 0;
  memcpy(a1, Src, (size_t)MaxCount);
  return 1;
}
