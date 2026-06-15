/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180007A90
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180006ED0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x1800D5FF4 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  void *v7; // rsi
  void *v8; // rcx
  size_t v9; // r8
  void *v11; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v6 = calloc(a2, 8uLL);
    v7 = v6;
    if ( v6 )
    {
      v8 = *(void **)a1;
      v9 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        if ( !v8 )
        {
          *(_DWORD *)_o__errno() = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove_0(v6, *(const void **)a1, v9);
        v8 = *(void **)a1;
      }
      free(v8);
      *(_QWORD *)a1 = v7;
LABEL_13:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  else
  {
    if ( v5 > a2 )
      a2 = v5;
    v11 = calloc(a2, 8uLL);
    *(_QWORD *)a1 = v11;
    if ( v11 )
      goto LABEL_13;
  }
  return 0;
}
