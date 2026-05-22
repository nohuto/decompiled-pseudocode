/*
 * XREFs of ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x1800356C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@QEAAXXZ @ 0x180035E30 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 */

__int64 __fastcall InputConfigContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  unsigned __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-18h]
  __int128 v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 256);
  v4 = *(_QWORD *)(a1 + 264);
  if ( v2 == v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)0x80070490LL,
      v7);
    return 2147943568LL;
  }
  else
  {
    *((_QWORD *)&v8 + 1) = *(_QWORD *)(a1 + 256);
    v6 = (__int64)((unsigned __int128)((v4 - v2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
    *(_QWORD *)&v8 = (v6 >> 63) + (unsigned int)v6;
    if ( *(_BYTE *)(a2 + 64) == 1 )
    {
      *(_OWORD *)a2 = v8;
    }
    else
    {
      std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage>::_Destroy(a2);
      *(_OWORD *)a2 = v8;
      *(_BYTE *)(a2 + 64) = 1;
    }
    return 0LL;
  }
}
