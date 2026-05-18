/*
 * XREFs of sub_18001CC40 @ 0x18001CC40
 * Callers:
 *     sub_18001CAEC @ 0x18001CAEC (sub_18001CAEC.c)
 * Callees:
 *     sub_18001A684 @ 0x18001A684 (sub_18001A684.c)
 *     sub_18001B4B8 @ 0x18001B4B8 (sub_18001B4B8.c)
 *     sub_18001C2F4 @ 0x18001C2F4 (sub_18001C2F4.c)
 *     sub_18001FBE4 @ 0x18001FBE4 (sub_18001FBE4.c)
 *     sub_180020350 @ 0x180020350 (sub_180020350.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

char __fastcall sub_18001CC40(__int64 a1, const void *a2, size_t a3, void *a4, size_t a5, int a6)
{
  __int64 v6; // rdi
  char *v11; // rdi
  int v12; // ecx
  __int64 v13; // r9
  char v14; // al
  char v15; // r14
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v19; // rax
  char v20; // dl
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // r8
  char *v24; // rcx
  size_t v25; // rdx
  size_t v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // [rsp+30h] [rbp-49h]
  void *Src; // [rsp+38h] [rbp-41h] BYREF
  int v31; // [rsp+40h] [rbp-39h]
  __int16 v32; // [rsp+48h] [rbp-31h] BYREF
  char v33; // [rsp+4Ah] [rbp-2Fh]
  int v34; // [rsp+4Ch] [rbp-2Dh]
  __int16 v35; // [rsp+50h] [rbp-29h]
  __int64 v36; // [rsp+58h] [rbp-21h]
  void *v37; // [rsp+60h] [rbp-19h]
  unsigned __int16 v38; // [rsp+68h] [rbp-11h] BYREF
  char v39; // [rsp+6Ah] [rbp-Fh]
  int v40; // [rsp+6Ch] [rbp-Dh]
  unsigned __int16 v41; // [rsp+70h] [rbp-9h]
  void *Buf2[2]; // [rsp+78h] [rbp-1h]

  v6 = *(_QWORD *)(a1 + 24);
  v31 = a6;
  if ( v6 )
  {
    v11 = (char *)(v6 + 10);
    v38 = *(_WORD *)(a1 + 2);
    v39 = *(_BYTE *)(a1 + 4);
    Src = v11;
    v40 = 0;
    v41 = 0;
    *(_OWORD *)Buf2 = 0LL;
    v29 = 0;
    while ( 1 )
    {
      v14 = sub_18001C2F4((__int16 *)&v38, (unsigned __int16 **)&Src, *(_QWORD *)(a1 + 32));
      v13 = 0LL;
      v15 = v14;
      if ( !v14 )
      {
        v11 = (char *)Src;
        goto LABEL_11;
      }
      if ( a3 == v41 )
      {
        v12 = memcmp(a2, Buf2[1], a3);
        v13 = 0LL;
      }
      else
      {
        v12 = a3 - v41;
      }
      if ( v12 < 0 )
        break;
      if ( !v12 )
      {
        v17 = (char *)sub_18001B4B8(a1, (__int64)&v38, (unsigned __int64)Src, a4, a5, v31);
        v13 = 0LL;
        Src = v17;
        v11 = v17;
        if ( v17 )
        {
          v29 = 1;
          goto LABEL_19;
        }
        return 1;
      }
      v11 = (char *)sub_18001FBE4(a1, &v38, Src, 0LL);
      Src = v11;
    }
    Src = v11;
LABEL_19:
    if ( !v15 )
LABEL_11:
      *(_QWORD *)(a1 + 32) = v11;
    v16 = 0LL;
    if ( !v29 )
    {
      v40 = 1;
      v41 = a3;
      Buf2[0] = 0LL;
      Buf2[1] = (void *)a2;
      if ( v38 )
        v16 = v38;
      else
        v16 = (unsigned __int16)a3 + 2LL;
      if ( v39 == 1 )
      {
        v16 += 2LL;
      }
      else if ( v39 == 2 )
      {
        v16 += 4LL;
      }
    }
    v19 = *(unsigned __int16 *)(a1 + 6);
    v20 = *(_BYTE *)(a1 + 8);
    v32 = v19;
    v33 = v20;
    v34 = v31;
    v35 = a5;
    v36 = 0LL;
    v37 = a4;
    if ( !(_WORD)v19 )
      v19 = (unsigned __int16)a5 + 2LL;
    if ( v20 == 1 )
    {
      v19 += 2LL;
    }
    else if ( v20 == 2 )
    {
      v19 += 4LL;
    }
    v21 = *(_QWORD *)(a1 + 40);
    v22 = v19 + v16;
    v23 = *(_QWORD *)(a1 + 32);
    if ( ((v21 - v23) & -(__int64)(v23 < v21)) >= v19 + v16 )
    {
      v24 = &v11[v22];
      v25 = v21 - v22 - (_QWORD)v11;
      v26 = v23 - (_QWORD)v11;
      if ( v26 )
      {
        if ( v24 && v11 )
        {
          if ( v25 >= v26 )
          {
            memmove(v24, v11, v26);
            goto LABEL_41;
          }
          *(_DWORD *)o__errno(v24, v25) = 34;
        }
        else
        {
          *(_DWORD *)o__errno(v24, v25) = 22;
        }
        o__invalid_parameter_noinfo();
      }
LABEL_41:
      v27 = v22 + *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v27;
      if ( v29 )
        sub_18001A684((__int64)&v38, 1);
      else
        sub_180020350(&v38, &Src, v27, v13);
      sub_180020350(&v32, &Src, *(_QWORD *)(a1 + 32), v28);
      *(_BYTE *)(a1 + 56) = 1;
      return 1;
    }
  }
  return 0;
}
