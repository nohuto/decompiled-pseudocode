/*
 * XREFs of MiValidateExistingImage @ 0x1406FF0A4
 * Callers:
 *     MiShareExistingControlArea @ 0x1406FE8F4 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x1406FF378 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x1406FF49C (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1407010C8 (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r12
  char v2; // r15
  __int64 v3; // r13
  int v4; // edi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // r9d
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // ecx
  __int64 v12; // r14
  int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // ebp
  int Blink; // ebp
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  unsigned __int8 v21; // r8
  int v22; // eax
  int v23; // ecx
  char v24; // [rsp+80h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 7);
  v4 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x100000) != 0 )
  {
    dword_140C4F3D0 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v6 = 2LL;
  else
    v6 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(*((_QWORD *)a1 + 8), v6);
  if ( (int)result < 0 )
  {
    dword_140C4F3D0 = 13;
    return result;
  }
  v9 = *a1;
  v10 = 6;
  if ( (v9 & 0x100) != 0 )
  {
    v11 = 4;
  }
  else if ( (v9 & 0x20) != 0 )
  {
    v11 = 1;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    v11 = (*a1 & 0x1000) != 0 ? 8 : 2;
  }
  else
  {
    v11 = 0;
  }
  v12 = *v1;
  v13 = v11 | 0x10;
  if ( (v9 & 0x800) == 0 )
    v13 = v11;
  v14 = (unsigned int)v9;
  if ( (v9 & 0x400) != 0 && (v9 & 0x10) == 0 )
  {
    Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    LOBYTE(v10) = *((_BYTE *)a1 + 24);
    LOBYTE(v8) = *(_BYTE *)(v12 + 15) >> 4;
    v24 = 0;
    result = SeGetImageRequiredSigningLevel(v3, v13, v10, v8, (__int64)&v24);
    if ( (int)result < 0 )
    {
      dword_140C4F3D0 = 14;
      return result;
    }
    v14 = *a1;
    if ( (v14 & 0x800) == 0 )
    {
      if ( *((_BYTE *)a1 + 24) && (Blink & 0x800000) != 0 )
        v4 = 1;
      if ( (Blink & 0x1000000) != 0 )
      {
        v2 = 8;
      }
      else
      {
        v2 = 0;
        if ( (Blink & 0x2000000) != 0 )
          v2 = 6;
      }
    }
    *((_BYTE *)a1 + 24) = v24;
  }
  if ( (v14 & 0x100000) != 0 )
  {
    v13 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v15 = v13 | 0x20000000;
  if ( (v14 & 0x800000) == 0 )
    v15 = v13;
  if ( (v14 & 0x400) != 0 )
  {
    if ( (v14 & 0x10) != 0 )
      goto LABEL_41;
    v17 = *(unsigned __int8 *)(v12 + 15);
    LOBYTE(v9) = *((_BYTE *)a1 + 24);
    if ( qword_140C1B940 )
    {
      v18 = ((unsigned int)v17 >> 1) & 7;
      LOBYTE(v17) = (unsigned __int8)v17 >> 4;
      v19 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, _QWORD))qword_140C1B940)(
              v15,
              v9,
              v17,
              v18,
              *((_QWORD *)a1 + 20));
      LOBYTE(v9) = *((_BYTE *)a1 + 24);
      LOBYTE(v17) = *(_BYTE *)(v12 + 15);
      if ( v19 )
        goto LABEL_41;
    }
    if ( !qword_140C1B8E0
      || (LOBYTE(v14) = (unsigned __int8)v17 >> 4, v20 = qword_140C1B8E0(v14, v9), v21 = *(_BYTE *)(v12 + 15), !v20)
      || (v15 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (v21 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v12 + 56) + 46LL) < 0 )
    {
LABEL_41:
      v21 = *(_BYTE *)(v12 + 15);
      v4 |= 2u;
    }
    v22 = (int)qword_140C1B8E0;
    if ( qword_140C1B8E0 )
    {
      LOBYTE(v9) = v2;
      LOBYTE(v14) = v21 >> 4;
      v22 = qword_140C1B8E0(v14, v9);
    }
    v23 = v4 | 4;
    if ( v22 )
      v23 = v4;
    v4 = v23;
    if ( (*a1 & 0x10000000) != 0 )
      v4 = v23 | 8;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             v3,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v15,
             v4,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140C4F3D0 = 15;
  return result;
}
