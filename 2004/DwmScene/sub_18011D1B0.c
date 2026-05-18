/*
 * XREFs of sub_18011D1B0 @ 0x18011D1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011D1B0(__int64 a1)
{
  _QWORD *v2; // rax
  int v3; // eax
  char v4; // si
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 **v12; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF

  v16 = 0LL;
  v2 = operator new(0x68uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)&v16 = v2;
  v3 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    JUMPOUT(0x18011D320LL);
  }
  v4 = *(_BYTE *)(a1 + 112);
  *(_BYTE *)(a1 + 112) = 1;
  v5 = (_QWORD *)(a1 + 96);
  if ( &v16 != (__int128 *)(a1 + 96) )
  {
    v6 = v16;
    *(_QWORD *)&v16 = *v5;
    *v5 = v6;
    v7 = *((_QWORD *)&v16 + 1);
    *((_QWORD *)&v16 + 1) = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = v7;
  }
  v8 = Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( v8 )
  {
    std::_Throw_C_error(v8);
LABEL_20:
    std::_Xbad_function_call();
    __debugbreak();
  }
  v9 = v16;
  if ( !v4 )
  {
    v10 = *(_QWORD **)v16;
    if ( *(_QWORD *)v16 != (_QWORD)v16 )
    {
      do
      {
        v11 = v10[12];
        if ( !v11 )
          goto LABEL_20;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v12 = (__int64 **)v10[2];
        if ( *((_BYTE *)v12 + 25) )
        {
          for ( i = v10[1]; !*(_BYTE *)(i + 25) && v10 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v10 = (_QWORD *)i;
          v10 = (_QWORD *)i;
        }
        else
        {
          v10 = (_QWORD *)v10[2];
          for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v10 = j;
        }
      }
      while ( v10 != (_QWORD *)v9 );
      v9 = v16;
    }
  }
  sub_180068FF4((__int64)&v16, (__int64)&v16, *(__int64 **)(v9 + 8));
  return j_j__o_free(v16);
}
