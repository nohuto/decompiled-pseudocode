/*
 * XREFs of ExpValidateLoader @ 0x140A74C7C
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExpValidateLoader(unsigned int *a1)
{
  ULONG_PTR v1; // r10
  ULONG_PTR result; // rax
  unsigned int v3; // edx
  unsigned int v4; // r8d
  unsigned int *v5; // r9

  v1 = *a1;
  result = 0LL;
  if ( (_DWORD)v1 != 10 || (v3 = a1[1]) != 0 || (v4 = a1[2], v4 != 352) )
  {
    v4 = a1[2];
    v3 = a1[1];
    goto LABEL_8;
  }
  v5 = (unsigned int *)*((_QWORD *)a1 + 30);
  result = *v5;
  if ( (_DWORD)result != 3640 || v5[738] != 167772168 )
LABEL_8:
    KeBugCheckEx(0x100u, v1, v3, v4, result);
  return result;
}
