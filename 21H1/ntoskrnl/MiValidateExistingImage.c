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
  __int64 v16; // rcx
  int v17; // ebp
  unsigned int v18; // ebp
  int v19; // eax
  int v20; // eax
  unsigned __int8 v21; // r8
  int v22; // eax
  int v23; // [rsp+60h] [rbp-48h] BYREF
  PVOID Object; // [rsp+68h] [rbp-40h]
  char v25; // [rsp+B0h] [rbp+8h]
  __int64 v26; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+18h] BYREF
  char v28; // [rsp+C8h] [rbp+20h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  Object = (PVOID)*((_QWORD *)a1 + 7);
  v3 = 0;
  v4 = 0;
  v25 = 0;
  v28 = 0;
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
  v23 = 0;
  v11 = v8 | 0x10;
  if ( !(_DWORD)v10 )
    v11 = v8;
  if ( (int)MiRegQueryDWORD(v10, 6LL, &v23) >= 0 && v23 )
  {
    v14 = *a1;
    if ( (*a1 & 0x400) != 0 && (v14 & 0x10) == 0 && (v14 & 0x800) == 0 )
    {
      Blink = (int)PsGetCurrentProcess()[2].ReadyListHead.Blink;
      if ( *((_BYTE *)a1 + 24) )
      {
        LOBYTE(v26) = 0;
        result = SeGetImageRequiredSigningLevel(Object, (__int64)&v26);
        if ( (int)result < 0 )
        {
LABEL_25:
          dword_140C4CB58 = 14;
          return result;
        }
        *((_BYTE *)a1 + 24) = v26;
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
    v16 = *a1;
  }
  else
  {
    v16 = *a1;
    if ( (*a1 & 0x400) != 0 && (*a1 & 0x10) == 0 )
    {
      v17 = (int)PsGetCurrentProcess()[2].ReadyListHead.Blink;
      LOBYTE(v27) = 0;
      result = SeGetImageRequiredSigningLevel(Object, (__int64)&v27);
      if ( (int)result < 0 )
        goto LABEL_25;
      v16 = *a1;
      if ( (v16 & 0x800) == 0 )
      {
        if ( *((_BYTE *)a1 + 24) && (v17 & 0x800000) != 0 )
          v4 = 1;
        if ( (v17 & 0x1000000) != 0 )
        {
          v3 = 8;
        }
        else
        {
          v12 = 6LL;
          if ( (v17 & 0x2000000) != 0 )
            v3 = 6;
        }
      }
      *((_BYTE *)a1 + 24) = v27;
    }
  }
  if ( (v16 & 0x80000) != 0 )
  {
    v11 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v18 = v11 | 0x20000000;
  if ( (v16 & 0x400000) == 0 )
    v18 = v11;
  if ( (v16 & 0x400) != 0 )
  {
    if ( (v16 & 0x10) != 0 )
      goto LABEL_61;
    v16 = *(unsigned __int8 *)(v9 + 15);
    LOBYTE(v12) = *((_BYTE *)a1 + 24);
    if ( qword_140C1DB00 )
    {
      LOBYTE(v13) = (unsigned __int8)v16 >> 4;
      v19 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_140C1DB00)(
              v18,
              v12,
              v13,
              ((unsigned int)v16 >> 1) & 7);
      LOBYTE(v12) = *((_BYTE *)a1 + 24);
      LOBYTE(v16) = *(_BYTE *)(v9 + 15);
      if ( v19 )
        goto LABEL_61;
    }
    if ( !qword_140C1DAA0
      || (LOBYTE(v16) = (unsigned __int8)v16 >> 4, v20 = qword_140C1DAA0(v16, v12), v21 = *(_BYTE *)(v9 + 15), !v20)
      || (v18 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (v21 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v9 + 56) + 46LL) < 0 )
    {
LABEL_61:
      v21 = *(_BYTE *)(v9 + 15);
      v25 = 1;
    }
    else
    {
      v25 = 0;
    }
    v22 = (int)qword_140C1DAA0;
    if ( qword_140C1DAA0 )
    {
      LOBYTE(v12) = v3;
      LOBYTE(v16) = v21 >> 4;
      v22 = qword_140C1DAA0(v16, v12);
    }
    LODWORD(v16) = *a1;
    v28 = v22 == 0;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             (_DWORD)Object,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             ((unsigned int)v16 >> 11) & 1,
             v18,
             v25,
             v28,
             v4,
             *((_BYTE *)a1 + 24),
             v3);
  if ( (int)result < 0 )
    dword_140C4CB58 = 15;
  return result;
}
