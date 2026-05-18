/*
 * XREFs of sub_1800C8214 @ 0x1800C8214
 * Callers:
 *     sub_1800BEEB0 @ 0x1800BEEB0 (sub_1800BEEB0.c)
 *     sub_1800C4F74 @ 0x1800C4F74 (sub_1800C4F74.c)
 * Callees:
 *     sub_180013F08 @ 0x180013F08 (sub_180013F08.c)
 *     sub_180014044 @ 0x180014044 (sub_180014044.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_1800C27F0 @ 0x1800C27F0 (sub_1800C27F0.c)
 *     sub_1800FDE60 @ 0x1800FDE60 (sub_1800FDE60.c)
 *     sub_1800FDE7C @ 0x1800FDE7C (sub_1800FDE7C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C8214(__int64 a1, _QWORD *a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  signed __int32 v13; // eax
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rdi
  float v17; // xmm6_4
  __int64 v18; // rbx
  float v19; // xmm2_4
  int v20; // xmm1_4
  __int64 v21; // rbx
  __int64 v22; // rbx
  float v23; // xmm0_4
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 *v26; // [rsp+28h] [rbp-79h] BYREF
  __int128 v27; // [rsp+30h] [rbp-71h] BYREF
  __int128 v28; // [rsp+40h] [rbp-61h] BYREF
  _DWORD v29[4]; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-39h]
  __int64 *v31; // [rsp+70h] [rbp-31h]
  __int64 v32; // [rsp+78h] [rbp-29h]
  int v33; // [rsp+80h] [rbp-21h]
  __int128 v34; // [rsp+88h] [rbp-19h] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  result = (__int64)&retaddr;
  v9 = *a2;
  if ( *a2 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = *(_QWORD *)(v9 + 64);
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        if ( !v13 )
          break;
        if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13) )
        {
          v10 = *(_QWORD *)(v9 + 56);
          v11 = *(volatile signed __int32 **)(v9 + 64);
          break;
        }
      }
    }
    v34 = 0LL;
    v14 = *(_QWORD *)(v10 + 80);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
        {
          v34 = *(_OWORD *)(v10 + 72);
          break;
        }
      }
    }
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    v16 = sub_18007AB84(a1, *(_DWORD *)(v34 + 112));
    v32 = qword_180214C08;
    v33 = dword_180214C10;
    v17 = 0.0;
    v28 = 0LL;
    result = (__int64)sub_1800C27F0(a1, &v28, (__int64 *)&v34);
    v18 = v28;
    if ( (_QWORD)v28 )
    {
      v27 = 0LL;
      sub_180089274(v28);
      v26 = 0LL;
      v30 = *(__int64 **)(v18 + 384);
      v31 = *(__int64 **)(v18 + 376);
      sub_180014044(&v26, v31, v30, 0);
      if ( v26 != *(__int64 **)(v18 + 384) )
        sub_180013F08((__int64 *)&v27, v26);
      result = v27;
      if ( (_QWORD)v27 )
      {
        v19 = *(float *)(v27 + 104);
        v17 = v19 + v19;
        v20 = *(_DWORD *)(v27 + 108);
        LODWORD(v32) = *(_DWORD *)(v27 + 100);
        *((float *)&v32 + 1) = v19;
        v33 = v20;
      }
      if ( *((_QWORD *)&v27 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          v21 = *((_QWORD *)&v27 + 1);
          (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
          result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
        }
      }
    }
    if ( *((_QWORD *)&v28 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v22 = *((_QWORD *)&v28 + 1);
        (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
      }
    }
    if ( a3 )
    {
      v23 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v16 + 88LL))(v16, &unk_180211F88);
      v29[0] = 0;
      *(float *)&v29[1] = v23 * v17;
      v29[2] = 0;
      result = sub_1800FDE60(*a2, v29);
    }
    if ( a4 )
    {
      v24 = *a2;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v16 + 88LL))(v16, &unk_180211D88);
      result = sub_1800FDE7C(v24);
    }
    if ( *((_QWORD *)&v34 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v25 = *((_QWORD *)&v34 + 1);
        (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
      }
    }
  }
  return result;
}
