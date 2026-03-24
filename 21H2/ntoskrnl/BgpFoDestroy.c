/*
 * XREFs of BgpFoDestroy @ 0x1409F41CC
 * Callers:
 *     BgpFwLibraryDestroy @ 0x1409F3F0C (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     FopFreeFontData @ 0x1409F4294 (FopFreeFontData.c)
 */

void __fastcall BgpFoDestroy(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *v5; // rbx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 **v10; // rdx
  __int64 v11; // rcx

  if ( FontLibraryInitialized )
  {
    v5 = (__int64 *)FopFontFileListHead;
    while ( v5 != &FopFontFileListHead )
    {
      if ( a1 && v5[2] != a1 )
      {
        v5 = (__int64 *)*v5;
      }
      else
      {
        v6 = (_QWORD **)(v5 + 5);
        while ( 1 )
        {
          v7 = *v6;
          if ( *v6 == v6 )
            break;
          if ( (_QWORD **)v7[1] != v6 )
            goto LABEL_16;
          v8 = (_QWORD *)*v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            goto LABEL_16;
          *v6 = v8;
          v8[1] = v6;
          FopFreeFontData();
        }
        v9 = *v5;
        if ( *(__int64 **)(*v5 + 8) != v5 || (v10 = (__int64 **)v5[1], *v10 != v5) )
LABEL_16:
          __fastfail(3u);
        *v10 = (__int64 *)v9;
        v11 = (__int64)v5;
        *(_QWORD *)(v9 + 8) = v10;
        v5 = (__int64 *)*v5;
        BgpFwFreeMemory(v11, (__int64)v10, a3, a4);
      }
    }
  }
}
