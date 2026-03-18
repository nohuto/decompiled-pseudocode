/*
 * XREFs of MiValidateExistingImage @ 0x14060620C
 * Callers:
 *     MiShareExistingControlArea @ 0x1405FAA68 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x1406064F4 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x14060666C (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406FC3C8 (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r15
  char v2; // r14
  char v3; // r12
  char v4; // r13
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rbp
  int v13; // edi
  __int64 v14; // rcx
  int Blink; // esi
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char v21; // [rsp+A0h] [rbp+8h] BYREF
  int v22; // [rsp+A8h] [rbp+10h]
  __int64 v23; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v22 = 0;
  v3 = 0;
  v4 = 0;
  v23 = *((_QWORD *)a1 + 7);
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x80000) != 0 )
  {
    dword_140C4CA18 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v7 = 2LL;
  else
    v7 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(v1, v7);
  if ( (int)result < 0 )
  {
    dword_140C4CA18 = 13;
    return result;
  }
  v9 = *a1;
  v10 = 6LL;
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
    v21 = 0;
    result = SeGetImageRequiredSigningLevel(v23, v13, v10, v8, (__int64)&v21);
    if ( (int)result < 0 )
    {
      dword_140C4CA18 = 14;
      return result;
    }
    v14 = *a1;
    if ( (v14 & 0x800) == 0 )
    {
      if ( *((_BYTE *)a1 + 24) )
      {
        v16 = v22;
        v9 = 1LL;
        if ( (Blink & 0x800000) != 0 )
          v16 = 1;
        v22 = v16;
      }
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
    *((_BYTE *)a1 + 24) = v21;
  }
  if ( (v14 & 0x80000) != 0 )
  {
    v13 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v17 = v13 | 0x20000000;
  if ( (v14 & 0x400000) == 0 )
    v17 = v13;
  if ( (v14 & 0x400) != 0 )
  {
    if ( (v14 & 0x10) != 0 )
      goto LABEL_47;
    v14 = *(unsigned __int8 *)(v12 + 15);
    LOBYTE(v9) = *((_BYTE *)a1 + 24);
    if ( qword_140C1D940 )
    {
      LOBYTE(v10) = (unsigned __int8)v14 >> 4;
      v18 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_140C1D940)(
              v17,
              v9,
              v10,
              ((unsigned int)v14 >> 1) & 7);
      LOBYTE(v9) = *((_BYTE *)a1 + 24);
      LOBYTE(v14) = *(_BYTE *)(v12 + 15);
      if ( v18 )
        goto LABEL_47;
    }
    if ( !qword_140C1D8E0
      || (LOBYTE(v14) = (unsigned __int8)v14 >> 4,
          v19 = qword_140C1D8E0(v14, v9, v10),
          LOBYTE(v10) = *(_BYTE *)(v12 + 15),
          !v19)
      || (v17 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (v10 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v12 + 56) + 46LL) < 0 )
    {
LABEL_47:
      LOBYTE(v10) = *(_BYTE *)(v12 + 15);
      v3 = 1;
    }
    v20 = (int)qword_140C1D8E0;
    if ( qword_140C1D8E0 )
    {
      LOBYTE(v10) = (unsigned __int8)v10 >> 4;
      LOBYTE(v9) = v2;
      LOBYTE(v14) = v10;
      v20 = qword_140C1D8E0(v14, v9, v10);
    }
    v4 = v20 == 0;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             v23,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v17,
             v3,
             v4,
             v22,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140C4CA18 = 15;
  return result;
}
