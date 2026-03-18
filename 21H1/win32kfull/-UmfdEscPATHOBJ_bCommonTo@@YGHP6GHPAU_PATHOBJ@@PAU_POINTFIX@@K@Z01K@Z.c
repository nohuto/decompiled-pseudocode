/*
 * XREFs of ?UmfdEscPATHOBJ_bCommonTo@@YGHP6GHPAU_PATHOBJ@@PAU_POINTFIX@@K@Z01K@Z @ 0x1FCE3C
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge UmfdEscPATHOBJ_bCommonTo@<eax>(
        int (__stdcall *a1)(int, PATHOBJ *, struct _PATHOBJ *)@<ecx>,
        int (__stdcall *Src)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int),
        struct _PATHOBJ *a3,
        struct _POINTFIX *a4,
        unsigned int a5)
{
  struct UmfdTls *v5; // eax
  int v6; // ebx
  PATHOBJ *v7; // edi
  int v8; // esi
  ULONG *v10; // [esp+0h] [ebp-34h]

  if ( ULongLongToULong(8LL * (unsigned int)a3, v10) < 0 )
    return 0;
  v5 = UmfdTls::EnsureTls();
  if ( !v5 )
    return 0;
  v6 = *((_DWORD *)v5 + 6);
  if ( !v6 )
    return 0;
  v7 = (PATHOBJ *)PALLOCMEM2(0, 1801733703, 0);
  if ( !v7 )
    return 0;
  v8 = a1(v6, v7, a3);
  Win32FreePool(v7);
  return v8;
}
