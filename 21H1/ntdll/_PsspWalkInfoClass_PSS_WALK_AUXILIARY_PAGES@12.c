/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES@12 @ 0x4B388B4A
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __userpurge PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        ULONG a3@<edi>,
        _DWORD *a4)
{
  void *v6; // eax
  NTSTATUS result; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // ebx
  SIZE_T v10; // [esp-18h] [ebp-2Ch]
  size_t v11; // [esp-8h] [ebp-1Ch]
  ULONG v12; // [esp+0h] [ebp-14h]
  unsigned int v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h] BYREF

  v6 = (void *)a2[193];
  if ( !v6 )
    return -1073741275;
  if ( !a1 )
    return -1073741811;
  HIDWORD(v11) = a3;
  if ( !*(_DWORD *)a1 )
  {
    v15 = 0;
    HIDWORD(v10) = &v15;
    LODWORD(v10) = 0;
    result = ZwMapViewOfSection(v6, (HANDLE)0xFFFFFFFF, (PVOID *)a1, 0LL, v10, (PLARGE_INTEGER)1, 0, ViewUnmap, a3, v12);
    if ( result < 0 )
      return result;
    *(_DWORD *)(a1 + 4) = 0;
  }
  v8 = *(_DWORD *)(a1 + 4);
  v14 = v8;
  if ( v8 >= a2[192] )
    return -2147483622;
  if ( !a4 )
    return 261;
  LODWORD(v11) = 48;
  v9 = (_DWORD *)(a2[194] + 40 * v8);
  memset(a4, 0, v11);
  *a4 = *v9;
  qmemcpy(a4 + 1, v9 + 1, 0x24u);
  a4[10] = *(_DWORD *)a1 + (v14 << 12);
  a4[11] = 4096;
  *(_DWORD *)(a1 + 4) = v14 + 1;
  return 0;
}
