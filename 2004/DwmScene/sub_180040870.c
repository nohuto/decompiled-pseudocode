/*
 * XREFs of sub_180040870 @ 0x180040870
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180040870(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  unsigned __int128 v5; // kr00_16
  unsigned int *v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rbx
  signed __int32 v16; // eax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  __m128i si128; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+30h] [rbp-D0h]
  __m128i v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+48h] [rbp-B8h]
  __m128i v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+60h] [rbp-A0h]
  _OWORD v25[2]; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  int v28; // [rsp+90h] [rbp-70h]
  __int64 *v29; // [rsp+98h] [rbp-68h]
  _DWORD v30[8]; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int128 v32; // [rsp+C8h] [rbp-38h]
  __int128 v33; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v34; // [rsp+E8h] [rbp-18h]
  __int128 v35; // [rsp+F8h] [rbp-8h]
  unsigned int v36; // [rsp+108h] [rbp+8h]

  v29 = a2;
  v32 = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v4 + 8);
      if ( !v16 )
        break;
      if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v16 + 1, v16) )
      {
        v17 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)&v32 = v17;
        v18 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v32 + 1) = v18;
        v5 = __PAIR128__(v18, v17);
        goto LABEL_3;
      }
    }
  }
  v5 = v32;
LABEL_3:
  v6 = (unsigned int *)*a2;
  v25[0] = _mm_load_si128((const __m128i *)&xmmword_18013E030);
  v25[1] = _mm_load_si128((const __m128i *)&xmmword_18013E010);
  v26 = 4;
  v27 = 5;
  v28 = 16;
  LODWORD(v33) = *((_DWORD *)v25 + *v6);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013E020);
  v20 = 5;
  DWORD1(v33) = si128.m128i_i32[v6[1]];
  v21 = si128;
  v22 = 5;
  DWORD2(v33) = v21.m128i_i32[v6[2]];
  v23 = si128;
  v24 = 5;
  HIDWORD(v33) = v23.m128i_i32[v6[3]];
  v7 = 0LL;
  v8 = 1;
  do
    v30[v7++] = v8++;
  while ( v7 < 8 );
  DWORD2(v34) = v30[v6[6]];
  DWORD1(v34) = v6[5];
  v36 = v6[12];
  HIDWORD(v35) = v6[11];
  LODWORD(v34) = v6[4];
  HIDWORD(v34) = v6[7];
  *(_QWORD *)&v35 = *((_QWORD *)v6 + 4);
  DWORD2(v35) = v6[10];
  v31 = 0LL;
  sub_180024694(v5, &v31);
  v9 = v31;
  v10 = *(_QWORD *)(a1 + 184);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 184) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v9 + 184LL))(v9, &v33, a1 + 184);
  sub_1800265A4(v5, v11);
  *(_OWORD *)(a1 + 128) = v33;
  *(_OWORD *)(a1 + 144) = v34;
  *(_OWORD *)(a1 + 160) = v35;
  *(_DWORD *)(a1 + 176) = v36;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), a2);
  v13 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( *((_QWORD *)&v5 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v14 = *((_QWORD *)&v32 + 1);
      (***((void (__fastcall ****)(_QWORD))&v32 + 1))(*((_QWORD *)&v32 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v32 + 1) + 8LL))(*((_QWORD *)&v32 + 1));
    }
  }
  v15 = (volatile signed __int32 *)a2[1];
  if ( v15 )
  {
    result = (unsigned int)_InterlockedDecrement(v15 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
