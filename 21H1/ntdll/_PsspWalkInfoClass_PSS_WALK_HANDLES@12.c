/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_HANDLES@12 @ 0x4B388C1F
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __userpurge PsspWalkInfoClass_PSS_WALK_HANDLES@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<edi>, _DWORD *a4)
{
  void *v6; // eax
  NTSTATUS result; // eax
  unsigned int v8; // ecx
  unsigned int v9; // esi
  char v10; // al
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // eax
  SIZE_T v20; // [esp-14h] [ebp-24h]
  size_t v21; // [esp-8h] [ebp-18h]
  ULONG v22; // [esp+0h] [ebp-10h]
  ULONG v23; // [esp+4h] [ebp-Ch]
  unsigned int v24; // [esp+8h] [ebp-8h]
  int v25; // [esp+Ch] [ebp-4h] BYREF

  v6 = *(void **)(a2 + 824);
  if ( !v6 )
    return -1073741275;
  if ( !a1 )
    return -1073741811;
  if ( !*(_DWORD *)a1 )
  {
    v25 = 0;
    HIDWORD(v20) = &v25;
    LODWORD(v20) = 0;
    result = ZwMapViewOfSection(
               v6,
               (HANDLE)0xFFFFFFFF,
               (PVOID *)a1,
               0LL,
               v20,
               (PLARGE_INTEGER)1,
               0,
               ViewUnmap,
               v22,
               v23);
    if ( result < 0 )
      return result;
    *(_DWORD *)(a1 + 4) = 0;
  }
  v8 = *(_DWORD *)(a1 + 4);
  v24 = v8;
  if ( v8 >= *(_DWORD *)(a2 + 820) )
    return -2147483622;
  HIDWORD(v21) = a3;
  if ( !a4 )
    return 261;
  LODWORD(v21) = 48;
  v9 = v8 + *(_DWORD *)a1;
  memset(a4, 0, v21);
  *a4 = *(_DWORD *)v9;
  *((_BYTE *)a4 + 4) = *(_BYTE *)(v9 + 4);
  *((_BYTE *)a4 + 5) = *(_BYTE *)(v9 + 5);
  a4[2] = *(_DWORD *)(v9 + 8);
  a4[3] = *(_DWORD *)(v9 + 12);
  v10 = *(_BYTE *)(v9 + 4);
  v11 = 16;
  if ( (v10 & 1) != 0 )
  {
    v12 = *(unsigned __int16 *)(v9 + 16);
    *((_WORD *)a4 + 8) = v12;
    a4[5] = v9 + 18;
    v10 = *(_BYTE *)(v9 + 4);
    v11 = v12 + 18;
  }
  if ( (v10 & 2) != 0 )
  {
    v13 = *(unsigned __int16 *)(v11 + v9);
    v14 = v11 + 2;
    *((_WORD *)a4 + 12) = v13;
    v15 = v14 + v9;
    v11 = v13 + v14;
    a4[7] = v15;
    v10 = *(_BYTE *)(v9 + 4);
  }
  if ( (v10 & 4) != 0 )
  {
    v16 = v11 + v9;
    v11 += 56;
    a4[8] = v16;
    v10 = *(_BYTE *)(v9 + 4);
  }
  if ( (v10 & 8) != 0 )
  {
    v17 = *(unsigned __int16 *)(v11 + v9);
    v18 = v11 + 2;
    *((_WORD *)a4 + 18) = v17;
    v19 = v18 + v9;
    v11 = v17 + v18;
    a4[10] = v19;
  }
  *(_DWORD *)(a1 + 4) = v11 + v24;
  return 0;
}
