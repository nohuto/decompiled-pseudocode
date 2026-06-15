/*
 * XREFs of sub_180030914 @ 0x180030914
 * Callers:
 *     sub_1800303E8 @ 0x1800303E8 (sub_1800303E8.c)
 * Callees:
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180030914(__int64 *a1, __int64 a2, __int64 a3, int *a4)
{
  float v7; // xmm8_4
  int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 *v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // eax
  float v17; // xmm0_4
  __int64 v18; // rdi
  unsigned int v19; // ebx
  __int64 v20; // rax
  float v21; // xmm0_4
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  float v27; // xmm0_4
  __int64 v28; // rbx
  unsigned int v29; // eax
  __int64 *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 result; // rax
  int v34; // xmm0_4
  __int64 *v35; // [rsp+28h] [rbp-49h] BYREF
  float v36; // [rsp+30h] [rbp-41h] BYREF
  __int64 v37; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v38[4]; // [rsp+40h] [rbp-31h] BYREF
  float v39; // [rsp+44h] [rbp-2Dh]
  __int64 retaddr; // [rsp+C0h] [rbp+4Fh]

  v7 = 1.0;
  v36 = 1.0;
  *a4 = 1065353216;
  v35 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v35);
  if ( v8 < 0 )
    sub_18000F8F4(
      retaddr,
      32,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      v8);
  v37 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v37);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 120))(v35) )
    v9 = 0.0;
  else
    v9 = 1.0;
  v10 = v9 * *(float *)a4;
  *(float *)a4 = v10;
  if ( v10 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
      v11 = 1.0;
    else
      v11 = (*(float (__fastcall **)(__int64 *))(*v35 + 200))(v35);
    *(float *)a4 = v11 * *(float *)a4;
    if ( v37
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v37 + 88LL))(v37, &v36, 0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 464))(v35)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 472))(v35) )
    {
      *(float *)a4 = *(float *)a4 * 0.0;
    }
  }
  if ( *(float *)a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    v12 = (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 280))(a1)
       && dword_180045450[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)]
        ? 0.0
        : 1.0;
    v13 = v12 * *(float *)a4;
    *(float *)a4 = v13;
    v14 = v35;
    v15 = *a1;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v15 + 72))(a1, v14, v16) )
      (*(void (__fastcall **)(__int64 *))(*v35 + 208))(v35);
    else
      v13 = 1.0;
    *(float *)a4 = v13 * *(float *)a4;
    v17 = (*(float (__fastcall **)(__int64 *, __int64))(*a1 + 288))(a1, a2) * *(float *)a4;
    *(float *)a4 = v17;
    if ( v17 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v18 = *a1;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
        v21 = (*(float (__fastcall **)(__int64 *, __int64, _QWORD))(v18 + 360))(a1, v20, v19) * *(float *)a4;
        *(float *)a4 = v21;
        v22 = *a1;
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v22 + 80))(a1, v23) )
        {
          v21 = 1.0;
        }
        else
        {
          v24 = v35;
          v25 = *v35;
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v25 + 216))(v24, v26);
        }
        v27 = v21 * *(float *)a4;
        *(float *)a4 = v27;
        v28 = *a1;
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v28 + 96))(a1, v29) )
        {
          v30 = v35;
          v31 = *v35;
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v31 + 224))(v30, v32);
        }
        else
        {
          v27 = 1.0;
        }
        *(float *)a4 = v27 * *(float *)a4;
        (*(void (__fastcall **)(__int64 *, __int64, _BYTE *))(*a1 + 64))(a1, a2, v38);
        if ( ((*(unsigned int (__fastcall **)(__int64 *))(*v35 + 88))(v35)
           || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2))
          && ((*(unsigned int (__fastcall **)(__int64 *))(*v35 + 184))(v35)
           || v37 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v37 + 128LL))(v37)) )
        {
          if ( v38[0] )
            v7 = 0.0;
          else
            v7 = v39;
        }
        *(float *)a4 = fminf(v7, v36) * *(float *)a4;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)result )
  {
    v34 = *a4;
    if ( *(float *)a4 != 0.0 )
      v34 = 1065353216;
    *a4 = v34;
  }
  if ( v37 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v35 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v35 + 16))(v35);
  return result;
}
