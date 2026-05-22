/*
 * XREFs of ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180135A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     _lambda_cc14c4b3090cc7c63243ed8c77095553_::operator() @ 0x18013577C (_lambda_cc14c4b3090cc7c63243ed8c77095553_--operator().c)
 */

__int64 __fastcall MouseProcessor::OnInputReport(MouseProcessor *this, struct InputInfo *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  _DWORD *v5; // rbx
  int v6; // eax
  char v7; // al
  __int64 v8; // r11
  int v9; // r9d
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r11
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct InputInfo *v16; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)a2 != 4096 )
  {
    v2 = -2147024809;
    v3 = 164LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v16 = a2;
  v14[0] = &v16;
  v5 = (_DWORD *)((char *)this + 72);
  v14[1] = (char *)this - 16;
  v6 = *((_DWORD *)a2 + 25);
  if ( (*((_BYTE *)a2 + 90) & 1) != 0 )
  {
    *v5 = v6;
    *((_DWORD *)this + 19) = *((_DWORD *)a2 + 26);
  }
  else
  {
    *((_DWORD *)this + 20) = v6;
    *((_DWORD *)this + 21) = *((_DWORD *)a2 + 26);
  }
  v7 = *((_BYTE *)a2 + 112);
  *((_BYTE *)this + 92) = v7;
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v14, v7 != 0 ? 32 : 16, 1, 2);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v14, *(_BYTE *)(v8 + 92) != 0 ? 16 : 32, 4, 8);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v14, v9 + 56, v9 + 8, v10 + 28);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v14, v11 + 112, v11 + 48, v11 + 112);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::operator()(v14, 256, 256, 512);
  v13 = *(_QWORD *)(v12 + 1688);
  if ( v13 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, v5, v16);
    if ( v2 < 0 )
    {
      v3 = 207LL;
      goto LABEL_3;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct InputInfo *))(*(_QWORD *)(v12 - 8) + 24LL))(
           v12 - 8,
           v5,
           v16);
    if ( v2 < 0 )
    {
      v3 = 211LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
