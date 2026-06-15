/*
 * XREFs of ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800D572C
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180007410 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800D5898 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ATL::CDacl::CAccessObjectAce *__fastcall ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
        ATL::CDacl::CAccessObjectAce *this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5,
        const struct _GUID *a6,
        const struct _GUID *a7)
{
  struct _GUID *v10; // rax
  struct _GUID *v11; // rax

  *(_QWORD *)this = &ATL::CAcl::CAce::`vftable';
  ATL::CSid::CSid((ATL::CDacl::CAccessObjectAce *)((char *)this + 8), a2);
  *((_DWORD *)this + 32) = a3;
  *((_BYTE *)this + 132) = a4;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = a5;
  *(_QWORD *)this = &ATL::CDacl::CAccessObjectAce::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  if ( a6 )
  {
    v10 = (struct _GUID *)operator new(0x10uLL);
    if ( v10 )
      *v10 = *a6;
    *((_QWORD *)this + 19) = v10;
    if ( !v10 )
      ATL::AtlThrowImpl(-2147024882);
  }
  if ( a7 )
  {
    v11 = (struct _GUID *)operator new(0x10uLL);
    if ( v11 )
      *v11 = *a7;
    *((_QWORD *)this + 20) = v11;
    if ( !v11 )
    {
      operator delete(*((void **)this + 19), (const struct std::nothrow_t *)0x10);
      *((_QWORD *)this + 19) = 0LL;
      ATL::AtlThrowImpl(-2147024882);
    }
  }
  return this;
}
