/*
 * XREFs of sub_18001CEC4 @ 0x18001CEC4
 * Callers:
 *     sub_18001C464 @ 0x18001C464 (sub_18001C464.c)
 * Callees:
 *     sub_18001BBB4 @ 0x18001BBB4 (sub_18001BBB4.c)
 *     sub_18001C3CC @ 0x18001C3CC (sub_18001C3CC.c)
 *     sub_180020440 @ 0x180020440 (sub_180020440.c)
 *     _alloca_probe @ 0x180123F50 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18001CEC4(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  char v7; // r8
  unsigned int v8; // r9d
  char v9; // dl
  __int16 v10; // cx
  __int64 v11; // rax
  char result; // al
  char v13; // r15
  void *v14; // rsi
  HANDLE ProcessHeap; // rax
  void *v16; // rbx
  HANDLE v17; // rax
  __int128 v18; // [rsp+30h] [rbp-D0h]
  _BYTE v19[8]; // [rsp+50h] [rbp-B0h] BYREF
  void **v20; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h]
  _WORD *v22; // [rsp+70h] [rbp-90h]
  void ***v23; // [rsp+C0h] [rbp-40h]
  unsigned int v24; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-28h] BYREF
  _WORD v27[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v28; // [rsp+E4h] [rbp-1Ch]
  __int16 v29; // [rsp+E6h] [rbp-1Ah]
  char v30; // [rsp+E8h] [rbp-18h]
  __int64 v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int128 v33; // [rsp+100h] [rbp+0h]
  LPVOID lpMem; // [rsp+110h] [rbp+10h]
  __int16 v35; // [rsp+118h] [rbp+18h]
  char v36; // [rsp+11Ah] [rbp+1Ah]
  _BYTE v37[4096]; // [rsp+120h] [rbp+20h] BYREF

  v4 = a1;
  v5 = a1 + 8 * a2;
  v6 = 0LL;
  v26 = 0LL;
  while ( 1 )
  {
    v7 = *(_BYTE *)(a3 + 8);
    v8 = *(unsigned __int16 *)(a3 + 6);
    v9 = *(_BYTE *)(a3 + 4);
    v10 = *(_WORD *)(a3 + 2);
    v27[0] = *(_WORD *)a3;
    v27[1] = v10;
    v28 = v9;
    v29 = v8;
    v30 = v7;
    if ( (_WORD)v8 )
    {
      v11 = v8;
      if ( v7 == 1 )
      {
        v11 = v8 + 2LL;
      }
      else if ( v7 == 2 )
      {
        v11 = v8 + 4LL;
      }
      v31 = v11;
    }
    else
    {
      v31 = 0LL;
    }
    v32 = 0LL;
    v33 = 0LL;
    lpMem = 0LL;
    v35 = 0;
    v36 = 0;
    result = sub_18001C3CC(v4, (__int64)v37, 4096LL, (__int64)v27, &v24);
    if ( !result )
      break;
    v25 = 0LL;
    *(_QWORD *)&v18 = &v25;
    *((_QWORD *)&v18 + 1) = &v26;
    v20 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v21 = v18;
    v22 = v27;
    v23 = &v20;
    v13 = sub_18001BBB4(a3, (__int64)v19);
    result = sub_180020440(v4, v24, v27);
    if ( result )
    {
      v4 += 8LL;
      v26 = v25;
    }
    else
    {
      ++v6;
      v13 = 0;
    }
    v14 = lpMem;
    lpMem = 0LL;
    if ( v14 )
    {
      ProcessHeap = GetProcessHeap();
      result = HeapFree(ProcessHeap, 0, v14);
    }
    if ( v13 || v4 >= v5 || v6 >= 0x32 )
      return result;
  }
  v16 = lpMem;
  lpMem = 0LL;
  if ( v16 )
  {
    v17 = GetProcessHeap();
    return HeapFree(v17, 0, v16);
  }
  return result;
}
