/*
 * XREFs of sub_18011AB70 @ 0x18011AB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011A390 @ 0x18011A390 (sub_18011A390.c)
 *     sub_18011A980 @ 0x18011A980 (sub_18011A980.c)
 *     sub_18011BA28 @ 0x18011BA28 (sub_18011BA28.c)
 *     sub_18011CAFC @ 0x18011CAFC (sub_18011CAFC.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=4
int __fastcall sub_18011AB70(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  char **v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  int result; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v9[128]; // [rsp+30h] [rbp-88h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v3 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v3 )
  {
LABEL_4:
    std::_Throw_C_error(v3);
    JUMPOUT(0x18011AC58LL);
  }
  v4 = (char **)(a1 + 144);
  sub_18011BA28(v4);
  v5 = sub_18011CAFC(v9);
  sub_18011A390(v4, (__int64)v8, byte_18020DE20);
  sub_18011A980(v8[0] + 64LL, v5);
  sub_18011CB50(v9);
  v6 = sub_18011CAFC(v9);
  sub_18011A390(v4, (__int64)v8, byte_18020DE40);
  sub_18011A980(v8[0] + 64LL, v6);
  sub_18011CB50(v9);
  result = Mtx_unlock(v2);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
