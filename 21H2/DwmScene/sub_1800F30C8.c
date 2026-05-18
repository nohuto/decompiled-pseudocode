/*
 * XREFs of sub_1800F30C8 @ 0x1800F30C8
 * Callers:
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180018D48 @ 0x180018D48 (sub_180018D48.c)
 *     sub_180019258 @ 0x180019258 (sub_180019258.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800F1A40 @ 0x1800F1A40 (sub_1800F1A40.c)
 *     sub_1800F2A24 @ 0x1800F2A24 (sub_1800F2A24.c)
 *     sub_1800F3438 @ 0x1800F3438 (sub_1800F3438.c)
 *     sub_1800F3468 @ 0x1800F3468 (sub_1800F3468.c)
 *     sub_1800F34A8 @ 0x1800F34A8 (sub_1800F34A8.c)
 *     sub_1800F34D4 @ 0x1800F34D4 (sub_1800F34D4.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
_DWORD *__fastcall sub_1800F30C8(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  char v6; // di
  _QWORD *v7; // rax
  int v8; // ebx
  _DWORD *result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm2_4
  int v26; // xmm6_4
  int v27; // xmm7_4
  int v28; // xmm6_4
  int v29; // ebx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 *v33; // rax
  __int128 v34; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v36[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h]
  _QWORD v38[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v39[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v41[3]; // [rsp+F8h] [rbp-10h] BYREF

  LODWORD(v34) = 0;
  v6 = 1;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a3 + 48) )
  {
    v7 = sub_1800F2A24(&v35, *(_DWORD *)(a3 + 32));
    v8 = 2;
  }
  else
  {
    v7 = sub_180018D48(&v36[1], a3 + 40);
    v8 = 1;
  }
  LODWORD(v34) = v8;
  result = sub_180018D48(v41, (__int64)v7);
  if ( (v8 & 2) != 0 )
  {
    LOBYTE(v8) = v8 & 0xFD;
    v10 = v35;
    if ( (_QWORD)v35 )
    {
      v11 = (v36[0] - v35) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v11 >= 0x1000 )
      {
        v12 = v11 + 39;
        v10 = *(_QWORD *)(v35 - 8);
        if ( (unsigned __int64)(v35 - v10 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v10, v12);
          __debugbreak();
        }
      }
      result = (_DWORD *)j_j__o_free(v10);
      v35 = 0LL;
      v36[0] = 0LL;
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v13 = v36[1];
    if ( v36[1] )
    {
      v14 = (v37 - v36[1]) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v14 >= 0x1000 )
      {
        v15 = v14 + 39;
        v13 = *(_QWORD *)(v36[1] - 8LL);
        if ( (unsigned __int64)(v36[1] - v13 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v13, v15);
          __debugbreak();
        }
      }
      result = (_DWORD *)j_j__o_free(v13);
      *(_OWORD *)&v36[1] = 0LL;
      v37 = 0LL;
    }
  }
  v16 = *(_DWORD *)(a3 + 32);
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 != 1 )
                  {
                    sub_18000FE28(v39);
                    v33 = sub_18000FE28(v38);
                    sub_18002D8C4(pExceptionObject, v33, 395, (__int64)v39, 0);
                    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
                  }
                }
                else
                {
                  sub_180019258(pExceptionObject, v41[0]);
                  result = (_DWORD *)sub_1800F3468(a1, a2, pExceptionObject);
                }
              }
              else
              {
                v34 = *(_OWORD *)v41[0];
                result = (_DWORD *)sub_1800F3438(a1, a2, &v34);
              }
            }
            else
            {
              v34 = *(_OWORD *)v41[0];
              result = (_DWORD *)sub_1800F34D4(a1, a2, &v34);
            }
          }
          else
          {
            v24 = *(_DWORD *)(v41[0] + 4);
            v25 = *(_DWORD *)(v41[0] + 8);
            LODWORD(v34) = *(_DWORD *)v41[0];
            *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(v25, v24);
            result = (_DWORD *)sub_1800F34A8(a1, a2, &v34);
          }
        }
        else
        {
          v26 = *(_DWORD *)v41[0];
          v27 = *(_DWORD *)(v41[0] + 4);
          result = (_DWORD *)sub_1800F1A40(a1, a2);
          *result = v26;
          result[1] = v27;
        }
      }
      else
      {
        v28 = *(_DWORD *)v41[0];
        result = (_DWORD *)sub_1800F1A40(a1, a2);
        *result = v28;
      }
    }
    else
    {
      v29 = (int)*(float *)v41[0];
      result = (_DWORD *)sub_1800F1A40(a1, a2);
      *result = v29;
    }
  }
  else
  {
    if ( *(float *)v41[0] == 0.0 )
      v6 = 0;
    result = (_DWORD *)sub_1800F1A40(a1, a2);
    *result = -(v6 != 0);
  }
  v30 = v41[0];
  if ( v41[0] )
  {
    v31 = (v41[2] - v41[0]) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v31 >= 0x1000 )
    {
      v32 = v31 + 39;
      v30 = *(_QWORD *)(v41[0] - 8);
      if ( (unsigned __int64)(v41[0] - v30 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v30, v32);
        __debugbreak();
      }
    }
    return (_DWORD *)j_j__o_free(v30);
  }
  return result;
}
