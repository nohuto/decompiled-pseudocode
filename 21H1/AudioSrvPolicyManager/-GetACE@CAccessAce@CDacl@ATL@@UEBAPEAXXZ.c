/*
 * XREFs of ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180039CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18003BB04 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     memset_0 @ 0x180040098 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

_WORD *__fastcall ATL::CDacl::CAccessAce::GetACE(ATL::CDacl::CAccessAce *this)
{
  _WORD *v1; // rdi
  size_t v3; // rbx
  _WORD *v4; // rax
  DWORD LengthSid; // eax
  unsigned __int64 v7; // [rsp+20h] [rbp-8h]

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
    ATL::Checked::memcpy_s(
      (ATL::Checked *)(v1 + 4),
      (void *)(v3 - 8),
      (unsigned __int64)this + 16,
      (const void *)LengthSid,
      v7);
    *((_QWORD *)this + 17) = v1;
  }
  return v1;
}
