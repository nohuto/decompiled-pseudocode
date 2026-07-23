/*
 * XREFs of MiValidateExistingImage @ 0x1406C24AC
 * Callers:
 *     MiShareExistingControlArea @ 0x14071F1CC (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x1406C2794 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x1406C290C (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406C311C (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r15
  char v2; // r14
  char v3; // r12
  char v4; // r13
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rbp
  int v12; // edi
  __int64 v13; // rcx
  int Blink; // esi
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+A0h] [rbp+8h] BYREF
  int v21; // [rsp+A8h] [rbp+10h]
  PVOID Object; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v21 = 0;
  v3 = 0;
  v4 = 0;
  Object = (PVOID)*((_QWORD *)a1 + 7);
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x80000) != 0 )
  {
    dword_140C4CC58 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v7 = 2LL;
  else
    v7 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(v1, v7);
  if ( (int)result < 0 )
  {
    dword_140C4CC58 = 13;
    return result;
  }
  v8 = *a1;
  v9 = 6LL;
  if ( (v8 & 0x100) != 0 )
  {
    v10 = 4;
  }
  else if ( (v8 & 0x20) != 0 )
  {
    v10 = 1;
  }
  else if ( (v8 & 0x10) != 0 )
  {
    v10 = (*a1 & 0x1000) != 0 ? 8 : 2;
  }
  else
  {
    v10 = 0;
  }
  v11 = *v1;
  v12 = v10 | 0x10;
  if ( (v8 & 0x800) == 0 )
    v12 = v10;
  v13 = (unsigned int)v8;
  if ( (v8 & 0x400) != 0 && (v8 & 0x10) == 0 )
  {
    Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    LOBYTE(v20) = 0;
    result = SeGetImageRequiredSigningLevel(Object, (__int64)&v20);
    if ( (int)result < 0 )
    {
      dword_140C4CC58 = 14;
      return result;
    }
    v13 = *a1;
    if ( (v13 & 0x800) == 0 )
    {
      if ( *((_BYTE *)a1 + 24) )
      {
        v15 = v21;
        v8 = 1LL;
        if ( (Blink & 0x800000) != 0 )
          v15 = 1;
        v21 = v15;
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
    *((_BYTE *)a1 + 24) = v20;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    v12 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v16 = v12 | 0x20000000;
  if ( (v13 & 0x400000) == 0 )
    v16 = v12;
  if ( (v13 & 0x400) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
      goto LABEL_47;
    v13 = *(unsigned __int8 *)(v11 + 15);
    LOBYTE(v8) = *((_BYTE *)a1 + 24);
    if ( qword_140C1DB80 )
    {
      LOBYTE(v9) = (unsigned __int8)v13 >> 4;
      v17 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_140C1DB80)(
              v16,
              v8,
              v9,
              ((unsigned int)v13 >> 1) & 7);
      LOBYTE(v8) = *((_BYTE *)a1 + 24);
      LOBYTE(v13) = *(_BYTE *)(v11 + 15);
      if ( v17 )
        goto LABEL_47;
    }
    if ( !qword_140C1DB20
      || (LOBYTE(v13) = (unsigned __int8)v13 >> 4,
          v18 = qword_140C1DB20(v13, v8, v9),
          LOBYTE(v9) = *(_BYTE *)(v11 + 15),
          !v18)
      || (v16 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (v9 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v11 + 56) + 46LL) < 0 )
    {
LABEL_47:
      LOBYTE(v9) = *(_BYTE *)(v11 + 15);
      v3 = 1;
    }
    v19 = (int)qword_140C1DB20;
    if ( qword_140C1DB20 )
    {
      LOBYTE(v9) = (unsigned __int8)v9 >> 4;
      LOBYTE(v8) = v2;
      LOBYTE(v13) = v9;
      v19 = qword_140C1DB20(v13, v8, v9);
    }
    v4 = v19 == 0;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             (_DWORD)Object,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v16,
             v3,
             v4,
             v21,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140C4CC58 = 15;
  return result;
}
