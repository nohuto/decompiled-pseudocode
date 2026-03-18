/*
 * XREFs of SepGetSidValuesDump @ 0x140590FE8
 * Callers:
 *     SepLogTokenSidManagement @ 0x140918784 (SepLogTokenSidManagement.c)
 * Callees:
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SepGetSidValuesDump(_DWORD *a1, _DWORD *a2)
{
  int v2; // edi
  char *PoolWithTag; // rax
  PVOID v6; // rbp
  unsigned __int8 *v7; // r15
  char *v8; // r12
  unsigned int i; // r13d
  ULONG v10; // ebx

  v2 = 0;
  *a2 = 0;
  if ( !a1 )
    return 0LL;
  if ( !a1[4] )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(*a1 - 24), 0x69536553u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v7 = (unsigned __int8 *)(a1 + 6);
  v8 = PoolWithTag;
  for ( i = 0; i < a1[4]; v8 += v10 )
  {
    v10 = 4 * v7[1] + 8;
    RtlCopySid(v10, v8, v7);
    v2 += v10;
    ++i;
    v7 += (4LL * v7[1] + 11) & 0xFFFFFFFCLL;
  }
  *a2 = v2;
  return v6;
}
