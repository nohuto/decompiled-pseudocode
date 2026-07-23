/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_VA_SPACE@12 @ 0x4B388E5F
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __userpurge PsspWalkInfoClass_PSS_WALK_VA_SPACE@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        int a3@<edi>,
        _DWORD *a4)
{
  void *v6; // eax
  NTSTATUS result; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // eax
  SIZE_T v12; // [esp-14h] [ebp-28h]
  size_t v13; // [esp-8h] [ebp-1Ch]
  ULONG v14; // [esp+0h] [ebp-14h]
  ULONG v15; // [esp+4h] [ebp-10h]
  int v17; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v18; // [esp+10h] [ebp-4h]

  v6 = (void *)a2[197];
  if ( !v6 )
    return -1073741275;
  if ( !a1 )
    return -1073741811;
  if ( !*(_DWORD *)a1 )
  {
    v17 = 0;
    HIDWORD(v12) = &v17;
    LODWORD(v12) = 0;
    result = ZwMapViewOfSection(
               v6,
               (HANDLE)0xFFFFFFFF,
               (PVOID *)a1,
               0LL,
               v12,
               (PLARGE_INTEGER)1,
               0,
               ViewUnmap,
               v14,
               v15);
    if ( result < 0 )
      return result;
    *(_DWORD *)(a1 + 4) = 0;
  }
  v8 = *(_DWORD *)(a1 + 4);
  v18 = v8;
  if ( v8 >= a2[196] )
    return -2147483622;
  HIDWORD(v13) = a3;
  if ( !a4 )
    return 261;
  LODWORD(v13) = 52;
  v9 = v8 + *(_DWORD *)a1;
  memset(a4, 0, v13);
  *a4 = *(_DWORD *)v9;
  a4[1] = *(_DWORD *)(v9 + 4);
  a4[2] = *(_DWORD *)(v9 + 8);
  a4[3] = *(_DWORD *)(v9 + 12);
  a4[4] = *(_DWORD *)(v9 + 16);
  a4[5] = *(_DWORD *)(v9 + 20);
  a4[6] = *(_DWORD *)(v9 + 24);
  a4[7] = *(_DWORD *)(v9 + 28);
  a4[8] = *(_DWORD *)(v9 + 32);
  a4[9] = *(_DWORD *)(v9 + 36);
  a4[10] = *(_DWORD *)(v9 + 40);
  v10 = 44;
  if ( (a2[2] & 0x1000) != 0
    && v18 + 48 <= a2[196]
    && (*(_DWORD *)(v9 + 24) == 0x1000000 || *(_DWORD *)(v9 + 24) == 0x40000) )
  {
    v11 = *(unsigned __int16 *)(v9 + 44);
    *((_WORD *)a4 + 22) = v11;
    if ( (_WORD)v11 )
      a4[12] = v9 + 46;
    v10 = v11 + 46;
  }
  *(_DWORD *)(a1 + 4) = v18 + ((v10 + 7) & 0xFFFFFFF8);
  return 0;
}
