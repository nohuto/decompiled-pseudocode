/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_THREADS@12 @ 0x4B388D3F
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __userpurge PsspWalkInfoClass_PSS_WALK_THREADS@<eax>(int a1@<edx>, _DWORD *a2@<ecx>, ULONG a3@<edi>, char *a4)
{
  void *v6; // eax
  NTSTATUS result; // eax
  unsigned int v8; // ecx
  const void *v9; // esi
  _DWORD *v10; // eax
  int v11; // esi
  SIZE_T v12; // [esp-18h] [ebp-30h]
  size_t v13; // [esp-8h] [ebp-20h]
  ULONG v14; // [esp+0h] [ebp-18h]
  unsigned int v15; // [esp+8h] [ebp-10h]
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h] BYREF
  const void *v18; // [esp+14h] [ebp-4h]

  v16 = (a2[2] >> 5) & 8;
  v6 = (void *)a2[212];
  if ( !v6 )
    return -1073741275;
  if ( !a1 )
    return -1073741811;
  HIDWORD(v13) = a3;
  if ( !*(_DWORD *)a1 )
  {
    v17 = 0;
    HIDWORD(v12) = &v17;
    LODWORD(v12) = 0;
    result = ZwMapViewOfSection(v6, (HANDLE)0xFFFFFFFF, (PVOID *)a1, 0LL, v12, (PLARGE_INTEGER)1, 0, ViewUnmap, a3, v14);
    if ( result < 0 )
      return result;
    *(_DWORD *)(a1 + 4) = 0;
  }
  v8 = *(_DWORD *)(a1 + 4);
  v15 = v8;
  if ( v8 >= a2[211] )
    return -2147483622;
  if ( !a4 )
    return 261;
  LODWORD(v13) = 104;
  v18 = (const void *)(v8 + *(_DWORD *)a1);
  v9 = v18;
  memset(a4, 0, v13);
  v10 = v18;
  qmemcpy(a4, v9, 0x1Cu);
  *((_DWORD *)a4 + 8) = v10[8];
  *((_DWORD *)a4 + 9) = v10[9];
  *((_DWORD *)a4 + 10) = v10[10];
  *((_DWORD *)a4 + 11) = v10[11];
  qmemcpy(a4 + 48, v10 + 12, 0x24u);
  *((_DWORD *)a4 + 22) = v10[22];
  *((_DWORD *)a4 + 23) = v10[23];
  *((_WORD *)a4 + 48) = *((_WORD *)v10 + 48);
  *((_WORD *)a4 + 49) = *((_WORD *)v10 + 49);
  v11 = v16 + 104;
  if ( *((_WORD *)v10 + 49) >= 2u )
  {
    *((_DWORD *)a4 + 25) = (char *)v10 + v16 + 104;
    v11 += ((*((unsigned __int16 *)v10 + 49) >> 1) + 15) & 0xFFFFFFF0;
  }
  *(_DWORD *)(a1 + 4) = v11 + v15;
  return 0;
}
