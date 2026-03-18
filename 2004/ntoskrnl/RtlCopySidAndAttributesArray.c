/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x140680FC0
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x1406D7740 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x1406DD170 (CmpBuildAdminInformation.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall RtlCopySidAndAttributesArray(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char *a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int v8; // r15d
  _DWORD *v11; // rdi
  __int64 v12; // r14
  unsigned int v13; // ebp
  unsigned __int8 *v14; // rdx
  unsigned int v15; // eax

  v8 = 0;
  if ( a1 )
  {
    v11 = (_DWORD *)(a4 + 8);
    v12 = a2 - a4;
    while ( 1 )
    {
      v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v11 + v12 - 8) + 1LL) + 8;
      if ( v13 > a3 )
        return 3221225507LL;
      *((_QWORD *)v11 - 1) = a5;
      a3 -= v13;
      *v11 = *(_DWORD *)((char *)v11 + v12);
      v14 = *(unsigned __int8 **)((char *)v11 + v12 - 8);
      v15 = 4 * v14[1] + 8;
      if ( v15 <= v13 )
        memmove(a5, v14, v15);
      ++v8;
      a5 += v13;
      v11 += 4;
      if ( v8 >= a1 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    *a6 = a5;
    *a7 = a3;
    return 0LL;
  }
}
