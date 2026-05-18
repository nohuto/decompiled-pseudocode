/*
 * XREFs of sub_180120DD8 @ 0x180120DD8
 * Callers:
 *     sub_18011CDEC @ 0x18011CDEC (sub_18011CDEC.c)
 *     sub_18011D134 @ 0x18011D134 (sub_18011D134.c)
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     sub_18011D984 @ 0x18011D984 (sub_18011D984.c)
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     sub_180120118 @ 0x180120118 (sub_180120118.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180120DD8(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // r14
  struct _Mtx_internal_imp_t *v4; // rsi
  int v5; // eax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  int v12; // eax
  volatile __int32 *v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF

  v2 = (const wchar_t *)a2;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 256), 0) )
  {
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      v2 = *(const wchar_t **)a2;
    sub_18011BCAC(
      &qword_180214E70,
      4,
      "A recursive call to TriggerHandlers() with property name '%ls' was ignored.",
      v2);
  }
  else
  {
    v14 = a1;
    v13[0] = (volatile __int32 *)&v14;
    v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
    v13[1] = (volatile __int32 *)(a1 + 160);
    v5 = Mtx_lock((_Mtx_t)(a1 + 160));
    if ( v5 )
      goto LABEL_20;
    v6 = *(_QWORD **)(a1 + 240);
    v7 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v8 = v7[12];
      if ( !v8 )
      {
        std::_Xbad_function_call();
LABEL_20:
        std::_Throw_C_error(v5);
LABEL_21:
        std::_Throw_C_error(v12);
        JUMPOUT(0x180120F11LL);
      }
      (*(void (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v8 + 16LL))(v8, v2);
      v9 = (__int64 **)v7[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
    v12 = Mtx_unlock(v4);
    if ( v12 )
      goto LABEL_21;
    sub_180120118(v13);
  }
}
