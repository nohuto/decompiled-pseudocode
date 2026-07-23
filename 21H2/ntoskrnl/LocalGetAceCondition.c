/*
 * XREFs of LocalGetAceCondition @ 0x140669250
 * Callers:
 *     LocalConvertAclToString @ 0x1406689C4 (LocalConvertAclToString.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     LocalpGetStringForCondition @ 0x140668028 (LocalpGetStringForCondition.c)
 *     LocalGetStringForRelativeAttribute @ 0x140929374 (LocalGetStringForRelativeAttribute.c)
 */

__int64 __fastcall LocalGetAceCondition(
        unsigned __int8 *a1,
        char *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int v9; // esi
  unsigned int v14; // ebp
  int v15; // ecx
  unsigned int v17; // edi
  PVOID *v18; // rcx
  __int64 v19; // r9
  unsigned int StringForRelativeAttribute; // eax
  __int64 v21; // rax
  int v22; // ebx

  v9 = *a1;
  *a3 = 0LL;
  *a4 = 0;
  v14 = 0;
  if ( (unsigned __int8)v9 > 0x12u || (v15 = 271872, !_bittest(&v15, v9)) )
  {
    if ( (_BYTE)v9 == 11 )
      goto LABEL_15;
    if ( (_BYTE)v9 != 21 )
      return v14;
  }
  if ( (_BYTE)v9 != 11 )
  {
    v17 = *((unsigned __int16 *)a1 + 1) - RtlLengthSid(a2) - 8;
    goto LABEL_8;
  }
LABEL_15:
  v22 = *((_DWORD *)a1 + 2);
  v17 = *((unsigned __int16 *)a1 + 1) - 16 * (v22 & 1) - 8 * (v22 & 2) - RtlLengthSid(a2) - 12;
LABEL_8:
  *a4 = v17;
  if ( v17 )
  {
    v18 = (PVOID *)&a2[RtlLengthSid(a2)];
    if ( (_BYTE)v9 == 18 )
      StringForRelativeAttribute = LocalGetStringForRelativeAttribute((_DWORD)v18, v17, a6, a7, a8, a9, (__int64)a3);
    else
      StringForRelativeAttribute = LocalpGetStringForCondition(v18, v17, a3, v19, a6, a7, a8, a9);
    v14 = StringForRelativeAttribute;
    if ( !StringForRelativeAttribute )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(*a3 + 2 * v21) );
      *a5 += 2 * v21 + 2;
    }
  }
  return v14;
}
