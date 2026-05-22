/*
 * XREFs of ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180035700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035F00 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180036050 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputConfigContextProvider::RegisterSystemContextObserver(
        InputConfigContextProvider *this,
        struct ISystemContextObserver *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // ebx
  __int64 v9; // rdx
  int v10[16]; // [rsp+20h] [rbp-58h] BYREF
  char v11; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = 0;
  v4 = SystemContextProvider::RegisterSystemContextObserver(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 70LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v4,
      v10[0]);
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(InputConfigContextProvider *, int *))(*(_QWORD *)this + 40LL))(this, v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -2147023728 )
      v7 = 0;
    goto LABEL_5;
  }
  v4 = (*(__int64 (__fastcall **)(struct ISystemContextObserver *, int *))(*(_QWORD *)a2 + 24LL))(a2, v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 76LL;
    goto LABEL_11;
  }
LABEL_5:
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v7,
      v10[0]);
    v5 = v7;
  }
  else
  {
    v5 = 0;
  }
LABEL_7:
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy(v10);
  return v5;
}
