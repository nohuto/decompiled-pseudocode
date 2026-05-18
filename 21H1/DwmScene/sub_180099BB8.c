/*
 * XREFs of sub_180099BB8 @ 0x180099BB8
 * Callers:
 *     sub_180062F8C @ 0x180062F8C (sub_180062F8C.c)
 *     sub_1800635A8 @ 0x1800635A8 (sub_1800635A8.c)
 *     sub_18009A09C @ 0x18009A09C (sub_18009A09C.c)
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180099920 @ 0x180099920 (sub_180099920.c)
 *     sub_180099E2C @ 0x180099E2C (sub_180099E2C.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180099BB8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  __int64 *v5; // rbx
  char v6; // r15
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  int v13; // xmm1_4
  volatile signed __int32 *v14; // rbx
  signed __int32 v15; // eax
  bool v16; // zf
  unsigned int v17; // eax
  unsigned int v18; // eax
  _QWORD *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h]
  _QWORD v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v26[5]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v27[64]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE pExceptionObject[96]; // [rsp+120h] [rbp+20h] BYREF

  v19 = a2;
  v4 = *a2;
  v5 = *(__int64 **)(*a2 + 112LL);
  if ( v5 )
    v5 = (__int64 *)*v5;
  if ( !v5 )
  {
    sub_18000FD48(v24);
    v18 = (unsigned int)sub_18000FD48(v23);
    sub_1800CB940((unsigned int)v27, v18, 961, (unsigned int)v24, 0);
    throw (Spectre::Engine::EngineException *)v27;
  }
  v6 = 1;
  if ( *(_QWORD *)(a1 + 120)
    && (*(_DWORD *)(a1 + 120) != 1 || *(_DWORD *)(**(_QWORD **)(a1 + 112) + 32LL) != *(_DWORD *)(v4 + 88)) )
  {
    v6 = 0;
    if ( !sub_180099920(*(_DWORD **)(a1 + 128), v5)
      || (v20 = *(_QWORD *)(v4 + 152),
          v22 = *(_QWORD *)(a1 + 144),
          v7 = 0LL,
          v7.m128_f32[0] = *(float *)&v22,
          v8 = 0LL,
          v8.m128_f32[0] = *(float *)&v20,
          (_mm_movemask_ps(_mm_cmpeq_ps(_mm_unpacklo_ps(v7, (__m128)HIDWORD(v22)), _mm_unpacklo_ps(v8, (__m128)HIDWORD(v20)))) & 3) != 3) )
    {
      sub_18000FD48(v26);
      v17 = (unsigned int)sub_18000FD48(v25);
      sub_1800CB940((unsigned int)pExceptionObject, v17, 977, (unsigned int)v26, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v21[0] = v4;
  v21[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  result = sub_180099E2C(a1, v21);
  if ( v6 )
  {
    result = (__int64)operator new(0x1CuLL);
    if ( result )
    {
      *(_OWORD *)result = *(_OWORD *)v5;
      *(_QWORD *)(result + 16) = v5[2];
      *(_DWORD *)(result + 24) = *((_DWORD *)v5 + 6);
    }
    v10 = result;
    v19 = (_QWORD *)result;
    v11 = (__int64 *)(a1 + 128);
    if ( (_QWORD **)(a1 + 128) != &v19 )
    {
      v10 = 0LL;
      v19 = 0LL;
      v12 = *v11;
      *v11 = result;
      if ( !v12 )
      {
LABEL_17:
        v13 = *(_DWORD *)(v4 + 156);
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(v4 + 152);
        *(_DWORD *)(a1 + 148) = v13;
        goto LABEL_18;
      }
      j__o_free(v12);
      result = 0LL;
    }
    if ( result )
      result = j__o_free(v10);
    goto LABEL_17;
  }
LABEL_18:
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 )
  {
    v15 = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
    v16 = v15 == 1;
    result = (unsigned int)(v15 - 1);
    if ( v16 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
