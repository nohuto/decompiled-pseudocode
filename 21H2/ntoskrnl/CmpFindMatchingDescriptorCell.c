/*
 * XREFs of CmpFindMatchingDescriptorCell @ 0x1406629A8
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1403F8690 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpSecConvKey @ 0x140662A74 (CmpSecConvKey.c)
 */

char __fastcall CmpFindMatchingDescriptorCell(__int64 a1, const void *a2, int a3, _DWORD *a4, int **a5)
{
  size_t v8; // r14
  __int64 v9; // rcx
  int v10; // r15d
  _QWORD **v11; // rsi
  _QWORD *i; // rdi
  int *v13; // rbx
  int v14; // ebp

  v8 = (unsigned int)RtlLengthSecurityDescriptorStrict();
  v10 = CmpSecConvKey(v8, v9);
  v11 = (_QWORD **)(a1 + 16 * ((v10 & 0x3F) + 118LL));
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
      return 0;
    v13 = (int *)(i - 1);
    if ( *((_DWORD *)i - 1) == v10 )
    {
      v14 = *v13;
      if ( a3 == (unsigned int)*v13 >> 31 && (_DWORD)v8 == v13[6] && !memcmp(a2, v13 + 8, v8) )
        break;
    }
  }
  *a4 = v14;
  if ( a5 )
    *a5 = v13;
  return 1;
}
