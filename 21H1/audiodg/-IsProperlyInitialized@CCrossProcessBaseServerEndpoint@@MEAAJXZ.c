/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140054DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140013810 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::IsProperlyInitialized(CCrossProcessBaseServerEndpoint *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 408);
  if ( *((_QWORD *)this + 51) )
    return 0LL;
  v3 = *((_QWORD *)this + 53);
  if ( !v3 )
    return 0LL;
  _InterlockedExchange64((volatile __int64 *)this + 52, v3);
  v4 = *((_QWORD *)this + 52);
  if ( v4 )
  {
    v9 = v4;
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(v1);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v1, &v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC4,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
    *((_QWORD *)this + 53) = 0LL;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
