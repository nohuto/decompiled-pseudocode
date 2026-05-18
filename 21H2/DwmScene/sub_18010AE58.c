/*
 * XREFs of sub_18010AE58 @ 0x18010AE58
 * Callers:
 *     sub_1800E1F54 @ 0x1800E1F54 (sub_1800E1F54.c)
 *     sub_1800E231C @ 0x1800E231C (sub_1800E231C.c)
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 * Callees:
 *     sub_1800BCC28 @ 0x1800BCC28 (sub_1800BCC28.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18010AE58(__int64 a1, __int64 a2)
{
  char *v4; // r8
  char *v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax

  v4 = *(char **)(a2 + 8);
  v5 = *(char **)a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_1800BCC28((_QWORD *)a1, v5, v4);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = *(_QWORD *)(a2 + 40);
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
  {
LABEL_7:
    std::_Throw_C_error(v7);
    __debugbreak();
  }
  v8 = Mtx_unlock((_Mtx_t)(a1 + 48));
  if ( v8 )
  {
    std::_Throw_C_error(v8);
    goto LABEL_7;
  }
  return a1;
}
