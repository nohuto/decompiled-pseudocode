/*
 * XREFs of ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800613C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::GetAt(
        AgileRegistrationList::AgileCallbackArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // r10
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 7) - v4) >> 3) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
      (const char *)0x8000000BLL,
      v7);
    return 2147483659LL;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, void **))(**(_QWORD **)(v4 + 8LL * a2) + 24LL))(
           *(_QWORD *)(v4 + 8LL * a2),
           a3,
           a4);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4EE,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v5,
        v7);
      JUMPOUT(0x180128F2CLL);
    }
    return 0LL;
  }
}
