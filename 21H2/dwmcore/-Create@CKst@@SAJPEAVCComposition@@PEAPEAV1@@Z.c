/*
 * XREFs of ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18002E0FC
 * Callers:
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x18002E080 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCKst@@QEAAPEAXI@Z @ 0x18027231C (--_GCKst@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CKst::Create(struct CComposition *a1, struct CKst **a2)
{
  struct CKst *v4; // rax
  struct CKst *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = (struct CKst *)DefaultHeap::Alloc(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *(_QWORD *)v4 = &CKst::`vftable';
    *((_QWORD *)v4 + 5) = a1;
    v6 = ((__int64 (__fastcall *)(struct CKst *))CKst::`vftable')(v4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return 0;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)0x8007000ELL);
    v5 = 0LL;
  }
  if ( v5 )
    CKst::`scalar deleting destructor'(v5, v9);
  return v7;
}
