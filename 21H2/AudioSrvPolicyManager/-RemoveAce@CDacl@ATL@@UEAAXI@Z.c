/*
 * XREFs of ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x180033AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800361E8 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     _invalid_parameter_noinfo @ 0x18003A752 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18003AE1B (memmove_0.c)
 */

void __fastcall ATL::CDacl::RemoveAce(ATL::CDacl *this, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  const void *v8; // rdx
  void *v9; // rcx

  v2 = a2;
  v4 = a2 + 1LL;
  if ( v4 < a2 || a2 == -1LL || (v5 = *((_QWORD *)this + 4), v4 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
    *((_QWORD *)this + 3) + 8LL * a2,
    1LL);
  v6 = v5 - v4;
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 3);
    v8 = (const void *)(v7 + 8 * v4);
    v9 = (void *)(v7 + 8 * v2);
    if ( 8 * v6 )
    {
      if ( !v9 || !v8 )
      {
        *(_DWORD *)_o__errno(v9, v8) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v9, v8, 8 * v6);
    }
  }
  --*((_QWORD *)this + 4);
}
