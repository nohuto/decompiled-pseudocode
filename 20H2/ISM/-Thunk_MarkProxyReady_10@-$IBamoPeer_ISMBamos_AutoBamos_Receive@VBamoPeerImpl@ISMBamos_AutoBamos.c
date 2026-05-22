/*
 * XREFs of ?Thunk_MarkProxyReady_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000A9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_MarkProxyReady_10(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  const char *v10; // r9
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _BYTE *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h]

  v2 = **a2;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL);
  v4 = *(unsigned int *)(a1 + 36);
  v5 = 0LL;
  v14 = 0LL;
  if ( (_DWORD)v2 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _BYTE **))(**(_QWORD **)(v3 + 56) + 56LL))(
           *(_QWORD *)(v3 + 56),
           v4,
           v2,
           &v14);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x331,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v6,
        v12);
      __debugbreak();
    }
    v5 = v14;
  }
  v5[28] = 1;
  v7 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v4, v2, v3);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) + 16) + 24LL)
                 + 32LL);
  v9 = 0LL;
  v15 = 0LL;
  if ( !*(_DWORD *)(v8 + 172) )
  {
    v9 = v8;
    v15 = v8;
    if ( *(_DWORD *)(v8 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v10);
      JUMPOUT(0x180053740LL);
    }
    *(_DWORD *)(v8 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 128));
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 128));
    *(_DWORD *)(v9 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
