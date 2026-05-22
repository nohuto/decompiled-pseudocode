/*
 * XREFs of ?Thunk_RequestDisposeProxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800028A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_RequestDisposeProxy_10(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 *i; // rbx
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 56LL);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(
         v3,
         *(unsigned int *)(a1 + 36),
         **a2,
         &v10);
  if ( v4 != -2018375675 )
  {
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x447,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4,
        v8);
      __debugbreak();
    }
    for ( i = *(__int64 **)(v10 + 32); i && *(_DWORD *)(i[5] + 36) != *(_DWORD *)(a1 + 36); i = (__int64 *)i[6] )
      ;
    if ( *((int *)i + 4) <= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, *(unsigned int *)(v10 + 24));
      v6 = *i;
      *((_BYTE *)i + 32) = 0;
      (*(void (__fastcall **)(__int64 *))(v6 + 48))(i);
    }
  }
  return 0LL;
}
