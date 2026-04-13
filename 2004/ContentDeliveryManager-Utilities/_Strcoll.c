/*
 * XREFs of _Strcoll @ 0x1800CCD00
 * Callers:
 *     ?do_compare@?$collate@D@std@@MEBAHPEBD000@Z @ 0x1800CAAD0 (-do_compare@-$collate@D@std@@MEBAHPEBD000@Z.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x1800B9BBC (_GetLocaleHandleByColl.c)
 *     _GetLocaleHandleById @ 0x1800B9BC8 (_GetLocaleHandleById.c)
 *     __crtCompareStringA_Stub @ 0x1800B9C28 (__crtCompareStringA_Stub.c)
 *     memcmp_0 @ 0x1800CDE7D (memcmp_0.c)
 */

int __cdecl Strcoll(const char *a1, const char *a2, const char *a3, const char *a4, const _Collvec *a5)
{
  int v5; // edi
  int v6; // esi
  int v9; // ebx
  __int64 LocaleHandleByColl; // rbp
  int v11; // eax
  int v12; // eax
  int v13; // ebx

  v5 = (_DWORD)a4 - (_DWORD)a3;
  v6 = (_DWORD)a2 - (_DWORD)a1;
  v9 = 1;
  if ( a5 )
  {
    LocaleHandleByColl = GetLocaleHandleByColl(&a5->_Page);
  }
  else
  {
    LocaleHandleByColl = GetLocaleHandleById(1);
    ___lc_collate_cp_func();
  }
  if ( LocaleHandleByColl )
  {
    v13 = _crtCompareStringA_Stub();
    if ( v13 )
    {
      return v13 - 2;
    }
    else
    {
      v9 = 0x7FFFFFFF;
      *_errno() = 22;
    }
  }
  else
  {
    v11 = v5;
    if ( v6 < v5 )
      v11 = v6;
    v12 = memcmp_0(a1, a3, v11);
    if ( v12 || v6 == v5 )
    {
      return v12;
    }
    else if ( v6 < v5 )
    {
      return -1;
    }
  }
  return v9;
}
