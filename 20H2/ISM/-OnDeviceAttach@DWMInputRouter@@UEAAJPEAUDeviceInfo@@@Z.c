/*
 * XREFs of ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180036DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrincipal@@@Z @ 0x1800146EC (--R-$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x180036E58 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceAttach(__int64 **this, struct DeviceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  unsigned __int64 v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = DWMInputRouter::OnDeviceChange((DWMInputRouter *)this, a2, 1);
  v5 = 0LL;
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
  else
  {
    v7 = this[82];
    v8 = (unsigned __int64)((char *)this[83] - (char *)v7 + 7) >> 3;
    if ( v7 > this[83] )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        std::_Func_class<bool,ActivatableEntityBamoPrincipal *>::operator()(*v7, (__int64)a2);
        ++v5;
        ++v7;
      }
      while ( v5 != v8 );
    }
    return 0LL;
  }
}
