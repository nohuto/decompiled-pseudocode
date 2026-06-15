/*
 * XREFs of ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180044C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StartStream(CProcessSubmixProxy *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // ecx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v2,
      v6);
    return v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 30);
    *((_DWORD *)this + 30) = v4 + 1;
    if ( !v4 )
      (*(void (__fastcall **)(_QWORD, CProcessSubmixProxy *))(**((_QWORD **)this + 24) + 328LL))(
        *((_QWORD *)this + 24),
        this);
    return 0LL;
  }
}
