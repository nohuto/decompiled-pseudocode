/*
 * XREFs of MiValidateExistingImage @ 0x14063B24C
 * Callers:
 *     MiShareExistingControlArea @ 0x14062FAA8 (MiShareExistingControlArea.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MiRegQueryDWORD @ 0x1405C6D54 (MiRegQueryDWORD.c)
 *     MiValidateSectionSigningPolicy @ 0x14063B5E4 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x14063B7B0 (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406DED08 (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r13
  char v3; // si
  int v4; // r12d
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  int Blink; // ebp
  int v16; // r9d
  __int64 v17; // rcx
  int v18; // ebp
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // ebp
  int v22; // eax
  int v23; // eax
  unsigned __int8 v24; // r8
  int v25; // eax
  int v26; // [rsp+60h] [rbp-48h] BYREF
  __int64 v27; // [rsp+68h] [rbp-40h]
  char v28; // [rsp+B0h] [rbp+8h]
  char v29; // [rsp+B8h] [rbp+10h] BYREF
  char v30; // [rsp+C0h] [rbp+18h] BYREF
  char v31; // [rsp+C8h] [rbp+20h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v27 = *((_QWORD *)a1 + 7);
  v3 = 0;
  v4 = 0;
  v28 = 0;
  v31 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x80000) != 0 )
  {
    dword_140C4CB58 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v6 = 2LL;
  else
    v6 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(v1, v6);
  if ( (int)result < 0 )
  {
    dword_140C4CB58 = 13;
    return result;
  }
  v7 = *a1;
  if ( (*a1 & 0x100) != 0 )
  {
    v8 = 4;
  }
  else if ( (v7 & 0x20) != 0 )
  {
    v8 = 1;
  }
  else if ( (v7 & 0x10) != 0 )
  {
    v8 = (*a1 & 0x1000) != 0 ? 8 : 2;
  }
  else
  {
    v8 = 0;
  }
  v9 = *v1;
  v10 = v7 & 0x800;
  v26 = 0;
  v11 = v8 | 0x10;
  if ( !(_DWORD)v10 )
    v11 = v8;
  if ( (int)MiRegQueryDWORD(v10, 6LL, &v26) >= 0 && v26 )
  {
    v14 = *a1;
    if ( (*a1 & 0x400) != 0 && (v14 & 0x10) == 0 && (v14 & 0x800) == 0 )
    {
      Blink = (int)PsGetCurrentProcess()[2].ReadyListHead.Blink;
      LOBYTE(v13) = *((_BYTE *)a1 + 24);
      if ( (_BYTE)v13 )
      {
        LOBYTE(v16) = *(_BYTE *)(v9 + 15) >> 4;
        v29 = 0;
        result = SeGetImageRequiredSigningLevel(v27, v11, v13, v16, (__int64)&v29);
        if ( (int)result < 0 )
        {
LABEL_25:
          dword_140C4CB58 = 14;
          return result;
        }
        *((_BYTE *)a1 + 24) = v29;
        if ( (Blink & 0x800000) != 0 )
          v4 = 1;
      }
      if ( (Blink & 0x1000000) != 0 )
      {
        v3 = 8;
      }
      else
      {
        v12 = 6LL;
        if ( (Blink & 0x2000000) != 0 )
          v3 = 6;
      }
    }
    v17 = *a1;
  }
  else
  {
    v17 = *a1;
    if ( (*a1 & 0x400) != 0 && (*a1 & 0x10) == 0 )
    {
      v18 = (int)PsGetCurrentProcess()[2].ReadyListHead.Blink;
      LOBYTE(v19) = *((_BYTE *)a1 + 24);
      LOBYTE(v20) = *(_BYTE *)(v9 + 15) >> 4;
      v30 = 0;
      result = SeGetImageRequiredSigningLevel(v27, v11, v19, v20, (__int64)&v30);
      if ( (int)result < 0 )
        goto LABEL_25;
      v17 = *a1;
      if ( (v17 & 0x800) == 0 )
      {
        if ( *((_BYTE *)a1 + 24) && (v18 & 0x800000) != 0 )
          v4 = 1;
        if ( (v18 & 0x1000000) != 0 )
        {
          v3 = 8;
        }
        else
        {
          v12 = 6LL;
          if ( (v18 & 0x2000000) != 0 )
            v3 = 6;
        }
      }
      *((_BYTE *)a1 + 24) = v30;
    }
  }
  if ( (v17 & 0x80000) != 0 )
  {
    v11 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v21 = v11 | 0x20000000;
  if ( (v17 & 0x400000) == 0 )
    v21 = v11;
  if ( (v17 & 0x400) != 0 )
  {
    if ( (v17 & 0x10) != 0 )
      goto LABEL_61;
    v17 = *(unsigned __int8 *)(v9 + 15);
    LOBYTE(v12) = *((_BYTE *)a1 + 24);
    if ( qword_140C1DB00 )
    {
      LOBYTE(v13) = (unsigned __int8)v17 >> 4;
      v22 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_140C1DB00)(
              v21,
              v12,
              v13,
              ((unsigned int)v17 >> 1) & 7);
      LOBYTE(v12) = *((_BYTE *)a1 + 24);
      LOBYTE(v17) = *(_BYTE *)(v9 + 15);
      if ( v22 )
        goto LABEL_61;
    }
    if ( !qword_140C1DAA0
      || (LOBYTE(v17) = (unsigned __int8)v17 >> 4, v23 = qword_140C1DAA0(v17, v12), v24 = *(_BYTE *)(v9 + 15), !v23)
      || (v21 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (v24 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v9 + 56) + 46LL) < 0 )
    {
LABEL_61:
      v24 = *(_BYTE *)(v9 + 15);
      v28 = 1;
    }
    else
    {
      v28 = 0;
    }
    v25 = (int)qword_140C1DAA0;
    if ( qword_140C1DAA0 )
    {
      LOBYTE(v12) = v3;
      LOBYTE(v17) = v24 >> 4;
      v25 = qword_140C1DAA0(v17, v12);
    }
    LODWORD(v17) = *a1;
    v31 = v25 == 0;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             v27,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             ((unsigned int)v17 >> 11) & 1,
             v21,
             v28,
             v31,
             v4,
             *((_BYTE *)a1 + 24),
             v3);
  if ( (int)result < 0 )
    dword_140C4CB58 = 15;
  return result;
}
