/*
 * XREFs of sub_18001B4B8 @ 0x18001B4B8
 * Callers:
 *     sub_18001CC40 @ 0x18001CC40 (sub_18001CC40.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     sub_18001A684 @ 0x18001A684 (sub_18001A684.c)
 *     sub_18001BCF4 @ 0x18001BCF4 (sub_18001BCF4.c)
 *     sub_18001C2F4 @ 0x18001C2F4 (sub_18001C2F4.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_18001B4B8(__int64 a1, __int64 a2, unsigned __int64 a3, void *a4, size_t Size, int a6)
{
  char v6; // di
  int v7; // esi
  unsigned __int64 v9; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int16 *v15; // r8
  char v16; // al
  _WORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  int v23; // r14d
  __int64 v24; // r8
  bool v25; // zf
  _DWORD *v26; // r8
  char v27; // al
  _WORD *v28; // rax
  unsigned __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  void *Buf1; // [rsp+38h] [rbp-40h]
  __int16 v32; // [rsp+40h] [rbp-38h] BYREF
  char v33; // [rsp+42h] [rbp-36h]
  int v34; // [rsp+44h] [rbp-34h]
  unsigned __int16 v35; // [rsp+48h] [rbp-30h]
  void *Buf2[2]; // [rsp+50h] [rbp-28h]

  v6 = 0;
  v7 = -1;
  v32 = *(_WORD *)(a1 + 6);
  v9 = a3;
  v33 = *(_BYTE *)(a1 + 8);
  Buf1 = a4;
  v34 = 0;
  v35 = 0;
  *(_OWORD *)Buf2 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = (*(_QWORD *)(a1 + 32) - a3) / *(_QWORD *)(a1 + 16);
    v13 = (*(_QWORD *)(a1 + 32) - a3) % *(_QWORD *)(a1 + 16);
    v14 = *(unsigned int *)(a2 + 4);
    if ( v14 > v12 && (_DWORD)v14 != (_DWORD)v12 )
    {
      v15 = (unsigned __int16 *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v12;
      v16 = *(_BYTE *)(a2 + 2);
      if ( v16 == 1 )
      {
        v17 = *(_WORD **)(a2 + 16);
        v18 = *v15;
        if ( v17 )
        {
          *v17 = v18;
        }
        else
        {
          *(_DWORD *)o__errno(v18, v13) = 22;
          o__invalid_parameter_noinfo();
        }
      }
      else if ( v16 == 2 )
      {
        sub_18000F088(*(void **)(a2 + 16), 4uLL, v15, 4uLL);
      }
    }
    v19 = *(unsigned int *)(a2 + 4);
    v20 = v9 + v19 * *(_QWORD *)(a1 + 16);
    v21 = sub_18001BCF4(a1, v9, v19, a4, Size);
    v9 = v21;
    if ( v21 < v20 )
    {
      v22 = *(_QWORD *)(a1 + 32);
      v30 = v21;
      sub_18001C2F4(&v32, &v30, v22);
      if ( Size == v35 )
        v7 = memcmp(a4, Buf2[1], Size);
      else
        v7 = Size - v35;
      goto LABEL_29;
    }
    return v9;
  }
  v23 = 0;
  if ( !*(_DWORD *)(a2 + 4) )
    return v9;
  while ( 1 )
  {
    v24 = *(_QWORD *)(a1 + 32);
    v30 = v9;
    if ( !(unsigned __int8)sub_18001C2F4(&v32, &v30, v24) )
      break;
    if ( Size == v35 )
      v7 = memcmp(Buf1, Buf2[1], Size);
    else
      v7 = Size - v35;
    v25 = v7 == 0;
    if ( v7 <= 0 )
      goto LABEL_30;
    v9 = v30;
    if ( (unsigned int)++v23 >= *(_DWORD *)(a2 + 4) )
      goto LABEL_29;
  }
  v26 = (_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 4) != v23 )
  {
    v27 = *(_BYTE *)(a2 + 2);
    *v26 = v23;
    if ( v27 == 1 )
    {
      v28 = *(_WORD **)(a2 + 16);
      if ( v28 )
      {
        *v28 = v23;
      }
      else
      {
        *(_DWORD *)((__int64 (*)(void))o__errno)() = 22;
        o__invalid_parameter_noinfo();
      }
    }
    else if ( v27 == 2 )
    {
      sub_18000F088(*(void **)(a2 + 16), 4uLL, v26, 4uLL);
    }
  }
LABEL_29:
  v25 = v7 == 0;
LABEL_30:
  if ( !v25 )
    return v9;
  if ( sub_18001A684((__int64)&v32, a6) || *(_BYTE *)(a1 + 56) )
    v6 = 1;
  *(_BYTE *)(a1 + 56) = v6;
  return 0LL;
}
