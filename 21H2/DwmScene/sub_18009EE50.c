/*
 * XREFs of sub_18009EE50 @ 0x18009EE50
 * Callers:
 *     sub_18003387C @ 0x18003387C (sub_18003387C.c)
 *     sub_1800A027C @ 0x1800A027C (sub_1800A027C.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18009EE50(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  _QWORD v19[4]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v20[5]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD *v22; // [rsp+C0h] [rbp+37h]

  v20[4] = a1;
  v22 = a2;
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = *a2;
  *(_QWORD *)(a1 + 32) = a2[1];
  *(_QWORD *)(a1 + 40) = a2[2];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *(_DWORD *)(a1 + 48) = -1;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v8 == v9 )
    goto LABEL_13;
  do
  {
    if ( *(_DWORD *)(v8 + 28) == v6 )
    {
      ++v6;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 28) )
        goto LABEL_21;
      if ( v7 )
      {
        if ( v6 != *(_DWORD *)(a1 + 48) )
        {
          sub_18000FE28(v19);
          v18 = (unsigned int)sub_18000FE28(v20);
          sub_1800D1210((unsigned int)pExceptionObject, v18, 241, (unsigned int)v19, 0);
          throw (Spectre::Engine::EngineException *)pExceptionObject;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v6;
      }
      ++v7;
      v6 = 1;
    }
    v8 += 32LL;
  }
  while ( v8 != v9 );
  if ( !v7 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 48) = v6;
  }
  else if ( v6 != *(_DWORD *)(a1 + 48) )
  {
    sub_18000FE28(v20);
    v17 = (unsigned int)sub_18000FE28(v19);
    sub_1800D1210((unsigned int)pExceptionObject, v17, 262, (unsigned int)v20, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v10 = *a2;
  if ( *a2 )
  {
    v11 = (a2[2] - v10) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v11 >= 0x1000 )
    {
      v12 = v11 + 39;
      v13 = *(_QWORD *)(v10 - 8);
      v14 = v10 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
LABEL_21:
        sub_18000FE28(v19);
        v16 = (unsigned int)sub_18000FE28(v20);
        sub_1800D1210((unsigned int)pExceptionObject, v16, 250, (unsigned int)v19, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v10 = v13;
    }
    j_j__o_free(v10);
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
