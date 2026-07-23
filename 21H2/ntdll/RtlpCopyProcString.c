/*
 * XREFs of RtlpCopyProcString @ 0x18004AEEC
 * Callers:
 *     RtlCreateProcessParametersInternal @ 0x18004A9F0 (RtlCreateProcessParametersInternal.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

char *__fastcall RtlpCopyProcString(void **a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 v5; // rbx
  const void *v6; // rdx
  char *v9; // rdi
  __int64 v10; // rax
  char *result; // rax

  v5 = a4;
  v6 = (const void *)*((_QWORD *)a3 + 1);
  if ( v6 && *a3 )
    memmove(*a1, v6, *a3);
  v9 = (char *)*a1;
  *(_QWORD *)(a2 + 8) = *a1;
  v10 = *a3;
  *(_WORD *)a2 = v10;
  *(_WORD *)(a2 + 2) = v5;
  if ( (unsigned __int16)v10 < (unsigned __int16)v5 )
    memset(&v9[v10], 0, (unsigned __int16)v5 - v10);
  result = &v9[(v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
  *a1 = result;
  return result;
}
