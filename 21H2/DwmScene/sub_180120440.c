/*
 * XREFs of sub_180120440 @ 0x180120440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011FC60 @ 0x18011FC60 (sub_18011FC60.c)
 *     sub_180120250 @ 0x180120250 (sub_180120250.c)
 *     sub_1801212F8 @ 0x1801212F8 (sub_1801212F8.c)
 *     sub_1801223CC @ 0x1801223CC (sub_1801223CC.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=4
int __fastcall sub_180120440(__int64 a1)
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
    JUMPOUT(0x180120528LL);
  }
  v4 = (char **)(a1 + 144);
  sub_1801212F8(v4);
  v5 = sub_1801223CC(v9);
  sub_18011FC60(v4, (__int64)v8, byte_180214E90);
  sub_180120250(v8[0] + 64LL, v5);
  sub_180122420(v9);
  v6 = sub_1801223CC(v9);
  sub_18011FC60(v4, (__int64)v8, byte_180214EB0);
  sub_180120250(v8[0] + 64LL, v6);
  sub_180122420(v9);
  result = Mtx_unlock(v2);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
