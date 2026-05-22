/*
 * XREFs of ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180037B74
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800274D4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180026424 (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180037C0C (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Create(struct ISystemInputRouter *a1, struct ICursorBroker **a2)
{
  DWMCursorBroker *v4; // rbx
  DWMCursorBroker *v5; // rax
  DWMCursorBroker *v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v5 = (DWMCursorBroker *)RefCountedObject::operator new(0x200uLL);
    if ( v5 )
      v6 = DWMCursorBroker::DWMCursorBroker(v5, a1);
    else
      v6 = 0LL;
    v4 = v6;
    if ( v6 )
    {
      v7 = DWMCursorBroker::Initialize(v6);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v4 = 0LL;
        *a2 = v6;
        v8 = 0;
        goto LABEL_7;
      }
      v10 = (unsigned int)v7;
      v11 = 115LL;
    }
    else
    {
      v8 = -2147024882;
      v10 = 2147942414LL;
      v11 = 112LL;
    }
  }
  else
  {
    v8 = -2147024809;
    v10 = 2147942487LL;
    v11 = 103LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)v10);
LABEL_7:
  if ( v4 )
    (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
