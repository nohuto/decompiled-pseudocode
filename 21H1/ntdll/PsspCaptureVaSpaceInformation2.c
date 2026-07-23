/*
 * XREFs of PsspCaptureVaSpaceInformation2 @ 0x4B3876A6
 * Callers:
 *     _PsspCaptureVaSpaceInformation@12 @ 0x4B387B12 (_PsspCaptureVaSpaceInformation@12.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _PsspCaptureImageInformation@12 @ 0x4B3875C8 (_PsspCaptureImageInformation@12.c)
 */

int __fastcall PsspCaptureVaSpaceInformation2(
        int a1,
        void *a2,
        int (__thiscall *a3)(_DWORD, int, int, int, unsigned int *, int, unsigned int *),
        int a4,
        __int16 a5)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edx
  signed int v11; // eax
  int result; // eax
  NTSTATUS v13; // esi
  unsigned int v14; // edi
  int v15; // esi
  unsigned int v16; // ecx
  char *v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned __int16 *v21; // esi
  __int16 v22; // ax
  int v23; // eax
  unsigned __int16 v24; // di
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // ebx
  SIZE_T v31; // [esp-14h] [ebp-88h]
  size_t v32; // [esp-4h] [ebp-78h]
  ULONG v33; // [esp+0h] [ebp-74h]
  ULONG v34; // [esp+4h] [ebp-70h]
  unsigned int v35[7]; // [esp+10h] [ebp-64h] BYREF
  LARGE_INTEGER MaximumSize; // [esp+2Ch] [ebp-48h] BYREF
  _DWORD v37[2]; // [esp+38h] [ebp-3Ch] BYREF
  void *v38; // [esp+40h] [ebp-34h]
  int v39; // [esp+44h] [ebp-30h]
  unsigned int v40; // [esp+48h] [ebp-2Ch] BYREF
  HANDLE SectionHandle; // [esp+4Ch] [ebp-28h] BYREF
  int v42; // [esp+50h] [ebp-24h]
  PVOID BaseAddress; // [esp+54h] [ebp-20h] BYREF
  unsigned int v44; // [esp+58h] [ebp-1Ch]
  void *v45; // [esp+5Ch] [ebp-18h] BYREF
  unsigned int v46; // [esp+60h] [ebp-14h] BYREF
  int v47; // [esp+64h] [ebp-10h] BYREF
  unsigned int v48; // [esp+68h] [ebp-Ch] BYREF
  unsigned int v49; // [esp+6Ch] [ebp-8h] BYREF
  char v50; // [esp+73h] [ebp-1h]

  v38 = a2;
  v48 = 0;
  v5 = 0;
  v39 = a1;
  v6 = 0;
  v47 = 0;
  v45 = 0;
  v49 = 0;
  v50 = 0;
  while ( 1 )
  {
    memset(v35, 0, sizeof(v35));
    if ( a3(a3, a4, v5, 0, v35, 28, 0) < 0 )
      break;
    if ( v35[0] != v5 )
      return -1073741503;
    v7 = v35[6] == 0x1000000 || v35[6] == 0x40000;
    v8 = v7 + v48;
    v48 += v7;
    if ( (a5 & 0x1000) != 0 && !v50 && (v35[6] == 0x1000000 || v35[6] == 0x40000) )
    {
      v37[0] = 0;
      v37[1] = 0;
      v46 = 0;
      v9 = a3(a3, a4, v5, 2, v37, 8, &v46);
      if ( v46 > 8 && (v9 >= 0 || v9 == -1073741820 || v9 == -1073741789 || v9 == -2147483643) )
        v10 = (v46 + 3) & 0xFFFFFFF8;
      else
        v10 = 8;
      v11 = RtlULongPtrAdd(v6, v10, (int *)&v49);
      v6 = v49;
      if ( v11 < 0 )
        v50 = 1;
    }
    v45 = (char *)v45 + 1;
    if ( (RtlULongPtrAdd(v35[0], v35[3], &v47) & 0x80000000) != 0 )
      goto LABEL_24;
    v5 = v47;
  }
  v8 = v48;
LABEL_24:
  result = RtlULongLongToUInt((int *)&v45, 48 * (_DWORD)v45, (48 * (unsigned __int64)(unsigned int)v45) >> 32);
  if ( result < 0 )
    return result;
  if ( v50 )
  {
    result = RtlULongLongToUInt((int *)&v49, 8 * v8, v8 >> 29);
LABEL_27:
    if ( result < 0 )
      return result;
    v6 = v49;
    goto LABEL_29;
  }
  if ( (a5 & 0x1000) != 0 )
  {
    result = RtlULongPtrAdd(v6, 8, (int *)&v49);
    goto LABEL_27;
  }
LABEL_29:
  if ( v6 )
  {
    result = RtlULongPtrAdd((unsigned int)v45, v6, (int *)&v45);
    if ( result < 0 )
      return result;
  }
  MaximumSize.QuadPart = (unsigned int)v45;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_4B2A58E8,
             &MaximumSize,
             4u,
             0x8000000u,
             0);
  if ( result < 0 )
    return result;
  HIDWORD(v31) = &v40;
  LODWORD(v31) = 0;
  BaseAddress = 0;
  v40 = 0;
  v13 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFF,
          &BaseAddress,
          0LL,
          v31,
          (PLARGE_INTEGER)1,
          0,
          (SECTION_INHERIT)4,
          v33,
          v34);
  if ( v13 < 0 )
  {
    NtClose(SectionHandle);
    return v13;
  }
  v14 = v40;
  v15 = 0;
  v42 = 0;
  v16 = 0;
  v44 = v40;
  v47 = 0;
  v49 = 0;
  v45 = BaseAddress;
  while ( (RtlULongPtrAdd(v16, 44, (int *)&v48) & 0x80000000) == 0 )
  {
    if ( v48 > v14 )
      break;
    memset(v35, 0, sizeof(v35));
    if ( a3(a3, a4, v15, 0, v35, 28, 0) < 0 )
      break;
    if ( v35[0] != v15 )
      return -1073741503;
    v17 = (char *)v45;
    LODWORD(v32) = 44;
    memset(v45, 0, v32);
    *(_DWORD *)v17 = v35[0];
    *((_DWORD *)v17 + 1) = v35[1];
    *((_DWORD *)v17 + 2) = v35[2];
    *((_DWORD *)v17 + 3) = v35[3];
    *((_DWORD *)v17 + 4) = v35[4];
    *((_DWORD *)v17 + 5) = v35[5];
    *((_DWORD *)v17 + 6) = v35[6];
    v18 = 44;
    if ( (a5 & 0x1000) != 0 )
    {
      if ( v35[6] == 0x1000000 )
      {
        PsspCaptureImageInformation((_DWORD *)v17 + 7, v38, (char *)v35[1]);
      }
      else if ( v35[6] != 0x40000 )
      {
        goto LABEL_64;
      }
      v19 = v49;
      if ( (RtlULongPtrAdd(v49, 48, (int *)&v48) & 0x80000000) != 0 || v48 > v44 )
        goto LABEL_68;
      if ( !v50 )
      {
        if ( (RtlULongPtrAdd(v48, 8, (int *)&v48) & 0x80000000) == 0 && v48 <= v44 )
        {
          v50 = 0;
          v20 = v44 - v48;
          v21 = (unsigned __int16 *)(v17 + 44);
          if ( v44 - v48 >= v6 )
            v20 = v6;
          *v21 = 0;
          v22 = -1;
          if ( v20 < 0xFFFF )
            v22 = v20;
          *((_WORD *)v17 + 23) = v22;
          *((_DWORD *)v17 + 12) = v17 + 52;
          v46 = 0;
          v23 = a3(a3, a4, v47, 2, (unsigned int *)v17 + 11, v20, &v46);
          goto LABEL_58;
        }
        v50 = 1;
      }
      v21 = 0;
      v23 = -1073741675;
LABEL_58:
      if ( v23 < 0 )
      {
        v6 -= 2;
        *((_WORD *)v17 + 22) = 0;
        v18 = 48;
      }
      else
      {
        if ( (unsigned int)*v21 + 2 > 0xFFFF )
        {
          v24 = 0;
        }
        else
        {
          LODWORD(v32) = *v21;
          v24 = *v21 + 2;
          memmove(v21 + 1, *((const void **)v21 + 1), v32);
          *(unsigned __int16 *)((char *)v21 + *v21 + 2) = 0;
        }
        v25 = v24;
        *v21 = v24;
        v17 = (char *)v45;
        v6 -= (v25 + 9) & 0xFFFFFFF8;
        v18 = (v25 + 53) & 0xFFFFFFF8;
      }
    }
LABEL_64:
    v26 = (v18 + 7) & 0xFFFFFFF8;
    v49 += v26;
    ++v42;
    v45 = &v17[v26];
    if ( (RtlULongPtrAdd(v35[0], v35[3], &v47) & 0x80000000) != 0 )
      break;
    v15 = v47;
    v16 = v49;
    v14 = v44;
  }
  v19 = v49;
LABEL_68:
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
  v27 = v39;
  v28 = v42;
  *(_DWORD *)(v39 + 784) = v19;
  *(_DWORD *)(v27 + 780) = v28;
  *(_DWORD *)(v27 + 788) = SectionHandle;
  while ( 1 )
  {
    v29 = MEMORY[0x7FFE0018];
    if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
      break;
    _mm_pause();
  }
  v30 = v39;
  result = 0;
  *(_DWORD *)(v39 + 792) = MEMORY[0x7FFE0014];
  *(_DWORD *)(v30 + 796) = v29;
  return result;
}
