/*
 * XREFs of RtlpInheritAcl2 @ 0x18003A094
 * Callers:
 *     RtlpInheritAcl @ 0x180039EA0 (RtlpInheritAcl.c)
 * Callees:
 *     RtlpGenerateInheritAcl @ 0x180036DA8 (RtlpGenerateInheritAcl.c)
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlpCopyAces @ 0x18003D288 (RtlpCopyAces.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int16 a3,
        char a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        _DWORD *a15,
        __int64 a16,
        _BYTE *a17,
        int *a18)
{
  __int64 v18; // rsi
  int v20; // ebx
  int v21; // edi
  unsigned int v22; // r14d
  char v23; // r12
  char v24; // r13
  _BYTE *v25; // r9
  char v26; // r8
  int *v27; // rax
  int v28; // ecx
  int v29; // edx
  char v30; // cl
  __int64 result; // rax
  __int64 v32; // rax
  int v33; // r8d
  char v34; // al
  int v35; // eax
  int v36; // edx
  int v37; // eax
  char v38; // [rsp+88h] [rbp-19h]
  char v39; // [rsp+89h] [rbp-18h]
  __int16 v40; // [rsp+8Ah] [rbp-17h]
  int v41; // [rsp+8Ch] [rbp-15h] BYREF
  int v42; // [rsp+90h] [rbp-11h] BYREF
  void *Src; // [rsp+98h] [rbp-9h] BYREF

  v18 = a16;
  v41 = 0;
  v20 = 0;
  v42 = 0;
  v21 = 0;
  v40 = 0;
  Src = 0LL;
  v22 = 2;
  v38 = 0;
  v39 = 1;
  v23 = 0;
  RtlCreateAcl(a16, (unsigned int)*a15, 2LL);
  v24 = a5;
  v25 = a17;
  v26 = a3;
  v27 = a18;
  v28 = (_BYTE)a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  v29 = a3 & 8;
  a5 = v29;
  *v27 = v28;
  if ( (a3 & 8) == 0 )
  {
    if ( (a3 & 0x1000) != 0 )
    {
      v38 = 1;
      *v27 = v28 | 0x1000;
    }
    if ( (a3 & 0x1004) == 0 )
      goto LABEL_5;
    if ( !a2 )
    {
      v35 = 0;
      if ( v24 )
      {
        v36 = a12;
        if ( a12 == 1 )
        {
          if ( (a3 & 0x1004) == 4 )
            return 3221225591LL;
          goto LABEL_42;
        }
LABEL_47:
        v30 = v38;
        if ( v36 == 2 && (v35 || v38 || a2 && !*((_WORD *)a2 + 2)) )
          *v25 = 1;
        goto LABEL_6;
      }
LABEL_41:
      v36 = a12;
      if ( a12 == 1 )
      {
LABEL_42:
        *v25 = 1;
LABEL_5:
        v30 = v38;
LABEL_6:
        v29 = a5;
        goto LABEL_7;
      }
      goto LABEL_47;
    }
    v39 = 0;
    if ( *a2 >= 2u )
      v22 = *a2;
    if ( v24 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        v33 = 2;
        LOBYTE(v25) = 16;
        v34 = 1;
        goto LABEL_36;
      }
      v33 = 1;
      v34 = 1;
    }
    else
    {
      v33 = 2;
      v34 = 0;
    }
    LOBYTE(v25) = 0;
LABEL_36:
    result = RtlpCopyAces((_DWORD)a2, a11, v33, (_DWORD)v25, v34, a7, a8, a9, a10, a4, 0, a12, (__int64)&v41, v18);
    v20 = v41;
    if ( (_DWORD)result == -1073741789 )
    {
      v23 = 1;
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
    if ( a6 )
    {
      if ( v41 )
      {
        v40 = *(_WORD *)(v18 + 4);
        if ( !RtlFirstFreeAce(v18, &Src) )
          return 3221225597LL;
      }
    }
    v26 = a3;
    v35 = v20;
    v25 = a17;
    goto LABEL_41;
  }
  v30 = 0;
LABEL_7:
  if ( (v24 || (v26 & 4) != 0) && !v29 && (!v24 || v30) || !a1 )
    goto LABEL_21;
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  if ( v22 <= (unsigned __int8)*a1 )
    LOBYTE(v22) = *a1;
  result = RtlpGenerateInheritAcl((__int64)a1, a4, v24, a7, a8, a9, a10, a11, a13, a14, a12, v23, &v42, v18, &a5);
  if ( (_DWORD)result == -1073741789 )
  {
    v23 = 1;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a6 && v41 && (_BYTE)a5 && !v23 )
    {
      if ( !RtlFirstFreeAce(v18, &a18) )
        return 3221225597LL;
      v37 = (int)a18;
      if ( !a18 )
        v37 = v18 + *(unsigned __int16 *)(v18 + 2);
      memmove((void *)(v18 + 8), Src, (unsigned int)(v37 - (_DWORD)Src));
      *(_WORD *)(v18 + 4) -= v40;
      v20 = 0;
    }
    v21 = v42;
LABEL_21:
    v32 = (unsigned int)(v21 + v20);
    if ( !(_DWORD)v32 )
    {
      if ( !*a17 )
      {
        result = 2147483659LL;
LABEL_24:
        *a15 = 0;
        return result;
      }
      if ( v39 )
      {
        result = 0LL;
        goto LABEL_24;
      }
    }
    if ( (unsigned __int64)(v32 + 8) <= 0xFFFF )
    {
      *a15 = v21 + v41 + 8;
      if ( v23 )
        return 3221225507LL;
      *(_BYTE *)v18 = v22;
      *(_WORD *)(v18 + 2) = v21 + v20 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  return result;
}
