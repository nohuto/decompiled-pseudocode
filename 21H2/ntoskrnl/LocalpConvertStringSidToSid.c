/*
 * XREFs of LocalpConvertStringSidToSid @ 0x1407B80D0
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403C07B0 (SeConvertStringSidToSid.c)
 *     LocalGetSidForString @ 0x140788000 (LocalGetSidForString.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     wcstoul @ 0x1403D4670 (wcstoul.c)
 *     wcstoxq @ 0x1403D483C (wcstoxq.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalpConvertStringSidToSid(_WORD *a1, _QWORD *a2, wchar_t **a3)
{
  int v4; // ebx
  int v5; // r13d
  const wchar_t *v6; // rdi
  wchar_t *v7; // rdi
  wchar_t *v8; // rax
  int v9; // r9d
  unsigned __int64 v10; // rcx
  wchar_t *v11; // rsi
  unsigned __int8 v12; // di
  wchar_t *v13; // r14
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  wchar_t v16; // dx
  __int64 v17; // r8
  wchar_t *v18; // rax
  bool v19; // zf
  bool v20; // sf
  unsigned __int8 v21; // r14
  wchar_t *v22; // rsi
  PVOID v23; // rax
  unsigned int v24; // edi
  unsigned int *v25; // r15
  int v26; // r8d
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  char *v29; // rcx
  void *v30; // rdx
  wchar_t *v32; // r13
  __int64 v33; // rax
  size_t v34; // r15
  PVOID v35; // rax
  int v36; // eax
  int v37; // [rsp+30h] [rbp-D0h]
  __int16 v38; // [rsp+34h] [rbp-CCh]
  wchar_t *EndPtr; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v42; // [rsp+48h] [rbp-B8h]
  void *Src; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  _QWORD *v45; // [rsp+60h] [rbp-A0h]
  char v46; // [rsp+70h] [rbp-90h] BYREF

  v45 = a2;
  Src = 0LL;
  EndPtr = 0LL;
  P = 0LL;
  v4 = 0;
  v5 = 10;
  v40 = 10;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( ((*a1 - 83) & 0xFFDF) != 0 || a1[1] != 45 )
    return 3221225592LL;
  v6 = a1 + 2;
  if ( a1[2] == 48 )
  {
    if ( ((a1[3] - 88) & 0xFFDF) == 0 )
      v5 = 16;
    v40 = v5;
  }
  v42 = wcstoul(v6, &EndPtr, v5);
  if ( v42 > 0xFF )
    return 3221225592LL;
  if ( EndPtr == v6 )
    return 3221225592LL;
  if ( *EndPtr != 45 )
    return 3221225592LL;
  v7 = EndPtr + 1;
  if ( !EndPtr[1] )
    return 3221225592LL;
  v8 = wcschr(EndPtr + 1, 0x2Du);
  if ( !v8 || v8 == v7 )
    return 3221225592LL;
  if ( *v7 != 48 || (v9 = 16, ((v7[1] - 88) & 0xFFDF) != 0) )
    v9 = v5;
  v41 = 0;
  v10 = wcstoxq(0LL, v7, &EndPtr, v9, 1, &v41);
  if ( v10 > 0xFFFFFFFFFFFFLL )
    return 3221225592LL;
  v11 = EndPtr;
  if ( EndPtr == v7 || *EndPtr != 45 || !EndPtr[1] )
    return 3221225592LL;
  HIBYTE(v38) = v10;
  v12 = 0;
  LOBYTE(v38) = BYTE1(v10);
  v13 = EndPtr;
  HIBYTE(v37) = BYTE2(v10);
  BYTE2(v37) = BYTE3(v10);
  LOBYTE(v37) = BYTE5(v10);
  BYTE1(v37) = BYTE4(v10);
  while ( 1 )
  {
    if ( v12 == 0xFF )
    {
      v4 = -1073741675;
      goto LABEL_84;
    }
    v14 = *v13;
    if ( (_WORD)v14 != 45 )
      break;
    if ( *(v13 - 1) != 45 )
    {
      ++v12;
      if ( v13[1] == 48 && ((v13[2] - 88) & 0xFFDF) == 0 )
        v13 += 2;
      goto LABEL_28;
    }
LABEL_24:
    v16 = v13[1];
    if ( v16 == 58 && (((_WORD)v14 - 71) & 0xFFF3) == 0 && (_DWORD)v14 != 75 )
      goto LABEL_34;
    if ( (unsigned __int16)(v14 - 48) > 0x36u || (v17 = 0x7E0000007E03FFLL, !_bittest64(&v17, (unsigned int)(v14 - 48))) )
    {
      v4 = -1073741704;
LABEL_84:
      *a3 = v13;
      return (unsigned int)v4;
    }
    if ( (_DWORD)v14 == 68 && v16 == 58 )
    {
      v32 = EndPtr;
      v33 = v13 - EndPtr;
      v34 = 2 * v33;
      if ( v33 >= 256 )
      {
        v35 = SddlpAlloc(v34 + 2);
        P = v35;
        if ( !v35 )
          return (unsigned int)-1073741801;
        v11 = (wchar_t *)v35;
      }
      else
      {
        v11 = (wchar_t *)&v46;
      }
      memmove(v11, v32, v34);
      v5 = v40;
      v11[v34 / 2] = 0;
      ++v12;
      *a3 = v13;
      goto LABEL_39;
    }
LABEL_28:
    if ( !++v13 )
      goto LABEL_38;
  }
  if ( (unsigned int)v14 > 0x3B )
    goto LABEL_24;
  v15 = 0x800120100000001LL;
  if ( !_bittest64(&v15, v14) )
    goto LABEL_24;
LABEL_34:
  v18 = v13 - 1;
  v4 = -1073741704;
  v19 = *(v13 - 1) == 45;
  if ( *(v13 - 1) != 45 )
  {
    v18 = v13;
    v4 = 0;
  }
  *a3 = v18;
  if ( !v19 )
    ++v12;
LABEL_38:
  v20 = v4 < 0;
  if ( !v4 )
  {
LABEL_39:
    v21 = v12 - 1;
    if ( !v12 )
      v21 = 0;
    if ( !v21 )
      goto LABEL_80;
    v22 = v11 + 1;
    v23 = SddlpAlloc(4LL * v21);
    Src = v23;
    if ( v23 )
    {
      v24 = 0;
      v25 = (unsigned int *)v23;
      while ( 1 )
      {
        if ( *v22 != 48 || (v26 = 16, ((v22[1] - 88) & 0xFFDF) != 0) )
          v26 = v5;
        *v25 = wcstoul(v22, &EndPtr, v26);
        if ( EndPtr )
        {
          v27 = *EndPtr;
          if ( (unsigned int)v27 > 0x3B || (v28 = 0x800320000000001LL, !_bittest64(&v28, v27)) )
          {
            if ( EndPtr[1] != 58 )
              break;
            LOWORD(v27) = v27 - 68;
            if ( (unsigned __int16)v27 > 0xFu )
              break;
            v36 = 34825;
            if ( !_bittest(&v36, v27) )
              break;
          }
        }
        v22 = EndPtr + 1;
        ++v24;
        ++v25;
        if ( v24 >= v21 )
          goto LABEL_50;
      }
LABEL_80:
      v4 = -1073741704;
    }
    else
    {
      v4 = -1073741801;
    }
LABEL_50:
    v12 = v21;
    v20 = v4 < 0;
  }
  if ( !v20 )
  {
    v29 = (char *)SddlpAlloc(4LL * v12 + 12);
    *v45 = v29;
    if ( v29 )
    {
      v30 = Src;
      *v29 = v42;
      *(_DWORD *)(v29 + 2) = v37;
      *((_WORD *)v29 + 3) = v38;
      v29[1] = v12;
      memmove(v29 + 8, v30, 4LL * v12);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
