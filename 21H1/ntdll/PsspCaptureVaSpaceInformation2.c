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
        int a2,
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
  int v13; // esi
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
  unsigned int v31[7]; // [esp+10h] [ebp-64h] BYREF
  _DWORD v32[3]; // [esp+2Ch] [ebp-48h] BYREF
  _DWORD v33[2]; // [esp+38h] [ebp-3Ch] BYREF
  int v34; // [esp+40h] [ebp-34h]
  int v35; // [esp+44h] [ebp-30h]
  unsigned int v36; // [esp+48h] [ebp-2Ch] BYREF
  HANDLE Handle; // [esp+4Ch] [ebp-28h] BYREF
  int v38; // [esp+50h] [ebp-24h]
  void *v39; // [esp+54h] [ebp-20h] BYREF
  unsigned int v40; // [esp+58h] [ebp-1Ch]
  void *v41; // [esp+5Ch] [ebp-18h] BYREF
  unsigned int v42; // [esp+60h] [ebp-14h] BYREF
  int v43; // [esp+64h] [ebp-10h] BYREF
  unsigned int v44; // [esp+68h] [ebp-Ch] BYREF
  unsigned int v45; // [esp+6Ch] [ebp-8h] BYREF
  char v46; // [esp+73h] [ebp-1h]

  v34 = a2;
  v44 = 0;
  v5 = 0;
  v35 = a1;
  v6 = 0;
  v43 = 0;
  v41 = 0;
  v45 = 0;
  v46 = 0;
  while ( 1 )
  {
    memset(v31, 0, sizeof(v31));
    if ( a3(a3, a4, v5, 0, v31, 28, 0) < 0 )
      break;
    if ( v31[0] != v5 )
      return -1073741503;
    v7 = v31[6] == 0x1000000 || v31[6] == 0x40000;
    v8 = v7 + v44;
    v44 += v7;
    if ( (a5 & 0x1000) != 0 && !v46 && (v31[6] == 0x1000000 || v31[6] == 0x40000) )
    {
      v33[0] = 0;
      v33[1] = 0;
      v42 = 0;
      v9 = a3(a3, a4, v5, 2, v33, 8, &v42);
      if ( v42 > 8 && (v9 >= 0 || v9 == -1073741820 || v9 == -1073741789 || v9 == -2147483643) )
        v10 = (v42 + 3) & 0xFFFFFFF8;
      else
        v10 = 8;
      v11 = RtlULongPtrAdd(v6, v10, (int *)&v45);
      v6 = v45;
      if ( v11 < 0 )
        v46 = 1;
    }
    v41 = (char *)v41 + 1;
    if ( (RtlULongPtrAdd(v31[0], v31[3], &v43) & 0x80000000) != 0 )
      goto LABEL_24;
    v5 = v43;
  }
  v8 = v44;
LABEL_24:
  result = RtlULongLongToUInt((int *)&v41, 48 * (_DWORD)v41, (48 * (unsigned __int64)(unsigned int)v41) >> 32);
  if ( result < 0 )
    return result;
  if ( v46 )
  {
    result = RtlULongLongToUInt((int *)&v45, 8 * v8, v8 >> 29);
LABEL_27:
    if ( result < 0 )
      return result;
    v6 = v45;
    goto LABEL_29;
  }
  if ( (a5 & 0x1000) != 0 )
  {
    result = RtlULongPtrAdd(v6, 8, (int *)&v45);
    goto LABEL_27;
  }
LABEL_29:
  if ( v6 )
  {
    result = RtlULongPtrAdd((unsigned int)v41, v6, (int *)&v41);
    if ( result < 0 )
      return result;
  }
  v32[1] = 0;
  v32[0] = v41;
  result = NtCreateSection((int)&Handle, 983047, (int)dword_4B2A58E8, (int)v32, 4, 0x8000000, 0);
  if ( result < 0 )
    return result;
  v39 = 0;
  v36 = 0;
  v13 = ZwMapViewOfSection((int)Handle, -1, (int)&v39, 0, 0, 0, (int)&v36, 1, 0, 4);
  if ( v13 < 0 )
  {
    NtClose(Handle);
    return v13;
  }
  v14 = v36;
  v15 = 0;
  v38 = 0;
  v16 = 0;
  v40 = v36;
  v43 = 0;
  v45 = 0;
  v41 = v39;
  while ( (RtlULongPtrAdd(v16, 44, (int *)&v44) & 0x80000000) == 0 )
  {
    if ( v44 > v14 )
      break;
    memset(v31, 0, sizeof(v31));
    if ( a3(a3, a4, v15, 0, v31, 28, 0) < 0 )
      break;
    if ( v31[0] != v15 )
      return -1073741503;
    v17 = (char *)v41;
    memset(v41, 0, 0x2Cu);
    *(_DWORD *)v17 = v31[0];
    *((_DWORD *)v17 + 1) = v31[1];
    *((_DWORD *)v17 + 2) = v31[2];
    *((_DWORD *)v17 + 3) = v31[3];
    *((_DWORD *)v17 + 4) = v31[4];
    *((_DWORD *)v17 + 5) = v31[5];
    *((_DWORD *)v17 + 6) = v31[6];
    v18 = 44;
    if ( (a5 & 0x1000) != 0 )
    {
      if ( v31[6] == 0x1000000 )
      {
        PsspCaptureImageInformation((_DWORD *)v17 + 7, v34, v31[1]);
      }
      else if ( v31[6] != 0x40000 )
      {
        goto LABEL_64;
      }
      v19 = v45;
      if ( (RtlULongPtrAdd(v45, 48, (int *)&v44) & 0x80000000) != 0 || v44 > v40 )
        goto LABEL_68;
      if ( !v46 )
      {
        if ( (RtlULongPtrAdd(v44, 8, (int *)&v44) & 0x80000000) == 0 && v44 <= v40 )
        {
          v46 = 0;
          v20 = v40 - v44;
          v21 = (unsigned __int16 *)(v17 + 44);
          if ( v40 - v44 >= v6 )
            v20 = v6;
          *v21 = 0;
          v22 = -1;
          if ( v20 < 0xFFFF )
            v22 = v20;
          *((_WORD *)v17 + 23) = v22;
          *((_DWORD *)v17 + 12) = v17 + 52;
          v42 = 0;
          v23 = a3(a3, a4, v43, 2, (unsigned int *)v17 + 11, v20, &v42);
          goto LABEL_58;
        }
        v46 = 1;
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
          v24 = *v21 + 2;
          memmove(v21 + 1, *((const void **)v21 + 1), *v21);
          *(unsigned __int16 *)((char *)v21 + *v21 + 2) = 0;
        }
        v25 = v24;
        *v21 = v24;
        v17 = (char *)v41;
        v6 -= (v25 + 9) & 0xFFFFFFF8;
        v18 = (v25 + 53) & 0xFFFFFFF8;
      }
    }
LABEL_64:
    v26 = (v18 + 7) & 0xFFFFFFF8;
    v45 += v26;
    ++v38;
    v41 = &v17[v26];
    if ( (RtlULongPtrAdd(v31[0], v31[3], &v43) & 0x80000000) != 0 )
      break;
    v15 = v43;
    v16 = v45;
    v14 = v40;
  }
  v19 = v45;
LABEL_68:
  NtUnmapViewOfSection(-1, (int)v39);
  v27 = v35;
  v28 = v38;
  *(_DWORD *)(v35 + 784) = v19;
  *(_DWORD *)(v27 + 780) = v28;
  *(_DWORD *)(v27 + 788) = Handle;
  while ( 1 )
  {
    v29 = MEMORY[0x7FFE0018];
    if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
      break;
    _mm_pause();
  }
  v30 = v35;
  result = 0;
  *(_DWORD *)(v35 + 792) = MEMORY[0x7FFE0014];
  *(_DWORD *)(v30 + 796) = v29;
  return result;
}
