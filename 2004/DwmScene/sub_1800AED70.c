/*
 * XREFs of sub_1800AED70 @ 0x1800AED70
 * Callers:
 *     sub_18007B4F0 @ 0x18007B4F0 (sub_18007B4F0.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_1800AE534 @ 0x1800AE534 (sub_1800AE534.c)
 *     sub_1800AF578 @ 0x1800AF578 (sub_1800AF578.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x18011FAAA (_Cnd_destroy_in_situ.c)
 *     _Thrd_detach @ 0x18011FB56 (_Thrd_detach.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall sub_1800AED70(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rsi
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  char v5; // al
  int v6; // eax
  int v7; // eax
  __int64 result; // rax
  volatile signed __int32 *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  _Thrd_t v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v12 = a1;
  v10 = 0LL;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v11._Hnd = (void *)(a1 + 128);
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  *(_QWORD *)&v10 = a1 + 128;
  BYTE8(v10) = 0;
  v4 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
LABEL_16:
    std::_Throw_C_error(v6);
    goto LABEL_17;
  }
  v5 = 1;
  BYTE8(v10) = 1;
  if ( *(_DWORD *)(a1 + 36) == 1 )
  {
    sub_1800AF578(a1, &v10);
    v5 = BYTE8(v10);
    v3 = (struct _Mtx_internal_imp_t *)v10;
  }
  if ( v5 )
  {
    v6 = Mtx_unlock(v3);
    if ( v6 )
      goto LABEL_16;
  }
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_9;
  v11 = *(_Thrd_t *)(a1 + 104);
  v7 = Thrd_detach(&v11);
  if ( v7 )
  {
LABEL_17:
    std::_Throw_C_error(v7);
    JUMPOUT(0x1800AEEEELL);
  }
  v12 = 0LL;
  *(_OWORD *)(a1 + 104) = 0LL;
LABEL_9:
  Cnd_destroy_in_situ((_Cnd_t)(a1 + 352));
  Cnd_destroy_in_situ((_Cnd_t)(a1 + 280));
  Cnd_destroy_in_situ((_Cnd_t)(a1 + 208));
  Mtx_destroy_in_situ(v2);
  if ( *(_DWORD *)(a1 + 112) )
    _o_terminate();
  sub_1800AE534(a1 + 88, a1 + 88, *(__int64 **)(*(_QWORD *)(a1 + 88) + 8LL));
  j_j__o_free(*(_QWORD *)(a1 + 88));
  sub_1800618F0((__int64 *)(a1 + 64));
  result = sub_180012938((__int64 *)(a1 + 40));
  v9 = *(volatile signed __int32 **)(a1 + 8);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return result;
}
