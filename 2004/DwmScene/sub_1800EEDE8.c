/*
 * XREFs of sub_1800EEDE8 @ 0x1800EEDE8
 * Callers:
 *     sub_18008C298 @ 0x18008C298 (sub_18008C298.c)
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_1800A3BE4 @ 0x1800A3BE4 (sub_1800A3BE4.c)
 * Callees:
 *     sub_180068888 @ 0x180068888 (sub_180068888.c)
 *     sub_1800688A4 @ 0x1800688A4 (sub_1800688A4.c)
 *     sub_1800688B4 @ 0x1800688B4 (sub_1800688B4.c)
 *     sub_180068AA4 @ 0x180068AA4 (sub_180068AA4.c)
 *     sub_180099AB0 @ 0x180099AB0 (sub_180099AB0.c)
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     sub_18009B450 @ 0x18009B450 (sub_18009B450.c)
 *     sub_18009BA34 @ 0x18009BA34 (sub_18009BA34.c)
 *     sub_1800EE7E8 @ 0x1800EE7E8 (sub_1800EE7E8.c)
 *     sub_1800EF2A0 @ 0x1800EF2A0 (sub_1800EF2A0.c)
 *     ?getTemplateNonTypeArgument@UnDecorator@@CA?AVDName@@XZ @ 0x1800EF8FC (-getTemplateNonTypeArgument@UnDecorator@@CA-AVDName@@XZ.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800EEDE8(__int64 a1, __int64 *a2, int a3)
{
  int v3; // ebx
  __int64 *v4; // r15
  __int64 v6; // r8
  unsigned int v7; // r13d
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  unsigned int i; // r14d
  unsigned int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  volatile signed __int32 *v22; // rdi
  unsigned int v23; // r12d
  __int64 v24; // r15
  volatile signed __int32 *v25; // rdi
  __int64 v26; // r15
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  __int64 result; // rax
  volatile signed __int32 *v30; // rbx
  int v31; // [rsp+20h] [rbp-A9h]
  __int128 v34; // [rsp+40h] [rbp-89h] BYREF
  __int64 v35; // [rsp+58h] [rbp-71h] BYREF
  __int64 v36; // [rsp+68h] [rbp-61h] BYREF
  __int64 v37; // [rsp+78h] [rbp-51h] BYREF
  volatile signed __int32 *v38; // [rsp+80h] [rbp-49h]
  __int64 v39; // [rsp+88h] [rbp-41h] BYREF
  volatile signed __int32 *v40; // [rsp+90h] [rbp-39h]
  __int128 v41; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-19h] BYREF
  unsigned int v43; // [rsp+C0h] [rbp-9h] BYREF
  unsigned int v44; // [rsp+C8h] [rbp-1h] BYREF
  int v45; // [rsp+D0h] [rbp+7h] BYREF
  __int128 v46; // [rsp+D8h] [rbp+Fh] BYREF

  v3 = a3;
  v4 = a2;
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 88);
  v41 = 0LL;
  v8 = *(_QWORD *)(v6 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v41 = *(_OWORD *)(v6 + 72);
        break;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 40) )
  {
    v10 = *(_QWORD *)(a1 + 128);
    if ( !v10 )
      goto LABEL_18;
    v11 = *(__int64 **)(v10 + 112);
    v12 = v11;
    v13 = (__int64 *)v11[1];
    if ( *((_BYTE *)v13 + 25) )
      goto LABEL_16;
    do
    {
      if ( *((_DWORD *)v13 + 8) >= v7 )
      {
        v12 = v13;
        v13 = (__int64 *)*v13;
      }
      else
      {
        v13 = (__int64 *)v13[2];
      }
    }
    while ( !*((_BYTE *)v13 + 25) );
    if ( v12 == v11 || v7 < *((_DWORD *)v12 + 8) )
LABEL_16:
      v12 = v11;
    if ( v12 == v11 )
    {
LABEL_18:
      v34 = 0LL;
      if ( *((_QWORD *)&v41 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
      v34 = v41;
      sub_1800EF2A0(a1, &v34);
    }
    if ( *(_QWORD *)(a1 + 112) )
      UnDecorator::getTemplateNonTypeArgument(a1);
    v43 = v7;
    sub_1800EE7E8((__int64 **)(a1 + 88), (__int64)&v35, &v43);
    if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(v35 + 32) )
    {
      sub_180068AA4(
        (_QWORD **)*v4,
        a1 + 128,
        *(_QWORD *)(a1 + 32),
        (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFC);
      v44 = v7;
      sub_1800EE7E8((__int64 **)(a1 + 88), (__int64)&v36, &v44);
      *(_DWORD *)(v36 + 32) = *(_DWORD *)(a1 + 80);
    }
  }
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)v41 + 200LL))(v41, &v45);
  for ( i = 0; i < 6; ++i )
  {
    if ( ((1 << i) & v3) != 0 )
    {
      if ( *(_QWORD *)(a1 + 128) )
        sub_180068888(*v4, i, (_QWORD *)(a1 + 128), *(_DWORD *)(a1 + 144));
      if ( ((1 << i) & v45) != 0 )
      {
        v15 = 0;
        v31 = 0;
        v16 = *(_QWORD *)(a1 + 56);
        if ( (*(_QWORD *)(a1 + 64) - v16) / 40 )
        {
          v17 = 0LL;
          do
          {
            v18 = 5 * v17;
            v46 = 0LL;
            v19 = *(_QWORD *)(v16 + 40 * v17 + 8);
            if ( v19 )
              _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
            v20 = *(_QWORD *)(v16 + 8 * v18);
            v46 = *(_OWORD *)(v16 + 8 * v18);
            v42 = 0LL;
            v21 = *(_QWORD *)(v16 + 8 * v18 + 24);
            if ( v21 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
              v20 = v46;
            }
            *(_QWORD *)&v42 = *(_QWORD *)(v16 + 8 * v18 + 16);
            v22 = *(volatile signed __int32 **)(v16 + 8 * v18 + 24);
            *((_QWORD *)&v42 + 1) = v22;
            v23 = *(_DWORD *)(v16 + 8 * v18 + 32);
            if ( v20 )
            {
              v24 = *sub_18009ADA4(v20, &v37, v7);
              v25 = v38;
              if ( v38 )
              {
                if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
                  if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
                }
              }
              if ( !v24 )
                sub_180099AB0(v46, (__int64 *)&v41);
              sub_1800688B4(*a2, i, (__int64)&v46, v23);
              if ( (_QWORD)v42 )
              {
                v26 = *sub_18009BA34(v42, &v39, v7);
                v27 = v40;
                if ( v40 )
                {
                  if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
                    if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
                  }
                }
                if ( !v26 )
                  sub_18009B450((_QWORD *)v42, (__int64 *)&v41);
                sub_1800688A4(*a2, i, (__int64)&v42, v23);
              }
              v15 = v31;
              v22 = (volatile signed __int32 *)*((_QWORD *)&v42 + 1);
            }
            if ( v22 )
            {
              if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
                if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
              }
            }
            v28 = (volatile signed __int32 *)*((_QWORD *)&v46 + 1);
            if ( *((_QWORD *)&v46 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
                if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
              }
            }
            v31 = ++v15;
            v16 = *(_QWORD *)(a1 + 56);
            v17 = v15;
          }
          while ( v15 < (unsigned __int64)((*(_QWORD *)(a1 + 64) - v16) / 40) );
          v3 = a3;
        }
        v4 = a2;
      }
    }
    result = 0x6666666666666667LL;
  }
  v30 = (volatile signed __int32 *)*((_QWORD *)&v41 + 1);
  if ( *((_QWORD *)&v41 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      result = (unsigned int)_InterlockedDecrement(v30 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  return result;
}
