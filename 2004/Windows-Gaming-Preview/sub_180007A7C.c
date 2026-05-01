/*
 * XREFs of sub_180007A7C @ 0x180007A7C
 * Callers:
 *     sub_180007FE0 @ 0x180007FE0 (sub_180007FE0.c)
 *     sub_180008BE0 @ 0x180008BE0 (sub_180008BE0.c)
 *     sub_180009300 @ 0x180009300 (sub_180009300.c)
 *     sub_1800471E0 @ 0x1800471E0 (sub_1800471E0.c)
 * Callees:
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007A7C(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int *v3; // rbx
  __int64 result; // rax
  void *v5; // rdx
  unsigned __int32 v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 (__fastcall *v9)(_QWORD, __int64, __int64, _QWORD); // r11
  unsigned int *v10; // rsi
  __int64 (__fastcall *v11)(_QWORD, __int64, __int64, _QWORD); // r10
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // [rsp+38h] [rbp-49h]
  __int64 v18; // [rsp+40h] [rbp-41h]
  __int64 v19; // [rsp+48h] [rbp-39h]
  __int64 v20; // [rsp+50h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  _QWORD v25[8]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+37h] BYREF

  v1 = *(unsigned int **)(a1 + 56);
  v3 = *(unsigned int **)(a1 + 48);
  result = (char *)v1 - (char *)v3;
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    if ( v3 != v1 )
    {
      LODWORD(v17) = 2;
      LODWORD(v18) = 6;
      LODWORD(v19) = 3;
      LODWORD(v20) = 7;
      LODWORD(v21) = 0;
      LODWORD(v22) = 4;
      LODWORD(v23) = 1;
      LODWORD(v24) = 5;
      while ( 1 )
      {
        v5 = (void *)*((_QWORD *)v3 + 1);
        _m_prefetchw(v5);
        v6 = _InterlockedAnd((volatile signed __int32 *)v5, 0xFFC0401E);
        v7 = (v6 >> 1) & 0xF;
        if ( v7 )
        {
          v8 = *((_QWORD *)v3 + 1);
          _m_prefetchw((const void *)(v8 + 4));
          v7 &= ~_InterlockedOr((volatile signed __int32 *)(v8 + 4), v7);
        }
        v9 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_18005AC50;
        v10 = (unsigned int *)v25;
        v11 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_18005ACA0;
        HIDWORD(v17) = v7 & 1;
        v25[0] = v17;
        HIDWORD(v18) = (v7 >> 1) & 1;
        v25[1] = v18;
        HIDWORD(v19) = (v7 >> 2) & 1;
        v25[2] = v19;
        HIDWORD(v20) = v7 >> 3;
        v25[3] = v20;
        v12 = (v6 >> 5) & 0x1FF;
        if ( (v6 & 0x4000) != 0 )
          v12 = 0;
        HIDWORD(v21) = v12;
        v25[4] = v21;
        HIDWORD(v22) = (v6 & 0x4000) != 0 ? (v6 >> 5) & 0x1FF : 0;
        v13 = (v6 >> 15) & 0x7F;
        v14 = v6 & 0x400000;
        v25[5] = v22;
        v15 = v13;
        if ( v14 )
          v15 = 0;
        HIDWORD(v23) = v15;
        v25[6] = v23;
        HIDWORD(v24) = v14 != 0 ? v13 : 0;
        v25[7] = v24;
        do
        {
          v16 = v10[1];
          if ( !(_DWORD)v16 )
            goto LABEL_17;
          if ( v9 )
          {
            v9(*v3, *v10, v16, 0LL);
          }
          else
          {
            if ( !v11 )
              goto LABEL_17;
            v11(*v3, *v10, v16, 0LL);
          }
          v11 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_18005ACA0;
          v9 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_18005AC50;
LABEL_17:
          v10 += 2;
        }
        while ( v10 != (unsigned int *)&v26 );
        v3 += 4;
        if ( v3 == v1 )
          goto LABEL_21;
      }
    }
    v9 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_18005AC50;
    v11 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_18005ACA0;
LABEL_21:
    result = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 56) = result;
    if ( v9 )
    {
      return v9(0LL, 254LL, 0LL, 0LL);
    }
    else if ( v11 )
    {
      return v11(0LL, 254LL, 0LL, 0LL);
    }
  }
  return result;
}
