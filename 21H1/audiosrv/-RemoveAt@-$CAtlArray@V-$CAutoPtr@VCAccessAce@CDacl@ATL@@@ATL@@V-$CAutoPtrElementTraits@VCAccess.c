/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800D8764
 * Callers:
 *     ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x1800D8750 (-RemoveAce@CDacl@ATL@@UEAAXI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006B51E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180074B5B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800D615C (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // rdx
  void *v9; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  result = ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
             *a1 + 8 * a2,
             1LL);
  v7 = v5 - v2;
  if ( v7 )
  {
    result = *a1;
    v8 = (const void *)(*a1 + 8 * v2);
    v9 = (void *)(*a1 + 8 * a2);
    if ( 8 * v7 )
    {
      if ( !v9 || !v8 )
      {
        *(_DWORD *)_o__errno(v9) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      result = (__int64)memmove_0(v9, v8, 8 * v7);
    }
  }
  --a1[1];
  return result;
}
