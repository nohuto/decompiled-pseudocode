/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180034CF0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006B61E (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_WORD *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  _WORD *v1; // rbx
  size_t v3; // rsi
  _WORD *v4; // rax
  DWORD LengthSid; // eax
  size_t v6; // r14
  size_t v7; // rsi
  void *v8; // rcx

  v1 = (_WORD *)*((_QWORD *)this + 17);
  if ( !v1 )
  {
    v3 = (*(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 16LL))(this);
    v4 = malloc(v3);
    v1 = v4;
    if ( !v4 )
      ATL::AtlThrowImpl(-2147024882);
    memset_0(v4, 0, (unsigned int)v3);
    v1[1] = v3;
    *((_BYTE *)v1 + 1) = *((_BYTE *)this + 132);
    *(_BYTE *)v1 = (*(__int64 (__fastcall **)(ATL::CDacl::CAccessAce *))(*(_QWORD *)this + 24LL))(this);
    *((_DWORD *)v1 + 1) = *((_DWORD *)this + 32);
    LengthSid = GetLengthSid((char *)this + 16);
    v6 = v3 - 8;
    v7 = LengthSid;
    v8 = v1 + 4;
    if ( !LengthSid )
      goto LABEL_8;
    if ( v1 == (_WORD *)-8LL )
      goto LABEL_11;
    if ( this != (ATL::CDacl::CAccessAce *)-16LL && v6 >= LengthSid )
    {
      memcpy_0(v8, (char *)this + 16, LengthSid);
LABEL_8:
      *((_QWORD *)this + 17) = v1;
      return v1;
    }
    memset_0(v8, 0, v6);
    if ( this == (ATL::CDacl::CAccessAce *)-16LL )
    {
LABEL_11:
      *(_DWORD *)_o__errno(v8) = 22;
    }
    else
    {
      if ( v6 >= v7 )
        goto LABEL_16;
      *(_DWORD *)_o__errno(v8) = 34;
    }
    invalid_parameter_noinfo();
LABEL_16:
    ATL::AtlThrowImpl(-2147024809);
  }
  return v1;
}
