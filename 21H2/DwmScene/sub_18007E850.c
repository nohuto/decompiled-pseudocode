/*
 * XREFs of sub_18007E850 @ 0x18007E850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180076B50 @ 0x180076B50 (sub_180076B50.c)
 *     sub_18007E75C @ 0x18007E75C (sub_18007E75C.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_18007E850(__int64 a1)
{
  int v2; // eax
  int result; // eax
  _Mtx_t v4[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+10h] BYREF

  v4[1] = 0LL;
  v4[0] = (_Mtx_t)(a1 + 1280);
  v2 = Mtx_lock((_Mtx_t)(a1 + 1280));
  if ( v2 )
  {
LABEL_9:
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  LOBYTE(v4[1]) = 1;
  while ( 1 )
  {
    v5 = *(int *)(a1 + 1200);
    result = sub_180076B50((_Cnd_t)(a1 + 1208), v4, &v5);
    if ( *(_BYTE *)(a1 + 1360) )
      break;
    sub_18007E75C(a1);
  }
  if ( LOBYTE(v4[1]) )
  {
    result = Mtx_unlock(v4[0]);
    if ( result )
    {
      std::_Throw_C_error(result);
      goto LABEL_9;
    }
  }
  return result;
}
