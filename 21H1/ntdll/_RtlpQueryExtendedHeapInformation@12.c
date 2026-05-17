/*
 * XREFs of _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0
 * Callers:
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 *     _RtlpQueryExtendedInformationAllHeaps@4 @ 0x4B358DD6 (_RtlpQueryExtendedInformationAllHeaps@4.c)
 *     _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0 (_RtlpQueryExtendedInformationHeap@8.c)
 */

int __fastcall RtlpQueryExtendedHeapInformation(int *a1, int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // esi
  __int16 v9; // di
  void *v10; // ecx
  int v11; // ecx
  unsigned int v12; // esi
  unsigned int v13; // edi
  int v14; // ecx
  int v15; // eax
  int Section; // esi
  _DWORD *v17; // eax
  unsigned int v18; // edi
  _DWORD *v19; // ebx
  HANDLE Handle; // [esp+10h] [ebp-B0h] BYREF
  _DWORD *v21; // [esp+14h] [ebp-ACh] BYREF
  signed __int64 v22; // [esp+18h] [ebp-A8h] BYREF
  unsigned int v23; // [esp+20h] [ebp-A0h] BYREF
  int v24; // [esp+24h] [ebp-9Ch]
  __int64 v25; // [esp+28h] [ebp-98h] BYREF
  int (__stdcall *v26)(_DWORD *, _DWORD *); // [esp+34h] [ebp-8Ch]
  _DWORD *v27; // [esp+38h] [ebp-88h]
  int v28; // [esp+3Ch] [ebp-84h] BYREF
  int (__stdcall *v29)(_DWORD *, _DWORD *); // [esp+40h] [ebp-80h]
  _DWORD *v30; // [esp+44h] [ebp-7Ch]
  _DWORD v31[12]; // [esp+48h] [ebp-78h] BYREF
  _QWORD v32[9]; // [esp+78h] [ebp-48h] BYREF

  v24 = a2;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    return -1073741811;
  if ( *a1 == -1 )
  {
    v28 = a1[2];
    memset(v31, 0, sizeof(v31));
    if ( a1[3] )
    {
      v29 = (int (__stdcall *)(_DWORD *, _DWORD *))a1[3];
      v6 = (_DWORD *)a1[4];
    }
    else
    {
      v31[0] = a1;
      v31[10] = a1 + 5;
      v31[11] = (char *)a1 + a2;
      v6 = v31;
      v31[9] = a1;
      v29 = RtlpExtendedHeapInformationGenerator;
    }
    v30 = v6;
    RtlEnterCriticalSection((int)&RtlpProcessHeapsListLock);
    v7 = a1[1];
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 8) == -571548178 )
        v9 = *(_WORD *)(v7 + 20);
      else
        v9 = *(_WORD *)(v7 + 124);
      if ( v9 != -1 )
      {
        RtlLockHeap(a1[1]);
        v7 = a1[1];
      }
      v8 = RtlpQueryExtendedInformationHeap(v7, &v28);
      if ( v9 != -1 )
        RtlUnlockHeap(v10, a1[1]);
    }
    else
    {
      v8 = RtlpQueryExtendedInformationAllHeaps(&v28);
    }
    RtlLeaveCriticalSection((int)&RtlpProcessHeapsListLock);
    v11 = v8 != -2147483622 ? v8 : 0;
    result = v11;
    if ( v29 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v11 >= 0 )
      {
        v12 = v31[10];
        if ( a3 )
          *a3 = v31[10] - v31[9];
        result = v11;
        if ( v12 > v31[11] )
          return -1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 44;
      return v8 != -2147483622 ? v8 : 0;
    }
  }
  else
  {
    v13 = 0;
    LODWORD(v22) = 0x10000;
    v21 = 0;
    while ( 1 )
    {
      Handle = 0;
      HIDWORD(v22) = 0;
      Section = NtCreateSection((int)&Handle, 983071, 0, (int)&v22, 4, 0x8000000, 0);
      if ( Section < 0 )
        break;
      memset(v32, 0, sizeof(v32));
      v14 = *a1;
      v32[2] = *(_QWORD *)(a1 + 1);
      v32[1] = v22;
      LODWORD(v32[0]) = Handle;
      v15 = RtlpHeapPerformCrossProcessQuery(v14, (int *)v32);
      Section = v15;
      if ( v15 != -1073741789 )
      {
        if ( v15 >= 0 )
        {
          v25 = 0LL;
          v23 = 0x10000;
          Section = ZwMapViewOfSection((int)Handle, -1, (int)&v21, 0, 0x10000, (int)&v25, (int)&v23, 2, 0, 4);
          if ( Section >= 0 )
          {
            memset(v31, 0, sizeof(v31));
            v26 = (int (__stdcall *)(_DWORD *, _DWORD *))a1[3];
            if ( v26 )
            {
              v17 = (_DWORD *)a1[4];
            }
            else
            {
              v31[0] = a1;
              v31[10] = a1 + 5;
              v31[9] = a1;
              v31[11] = (char *)a1 + v24;
              v17 = v31;
              v26 = RtlpExtendedHeapInformationGenerator;
            }
            v24 = 0;
            v27 = v17;
            if ( LODWORD(v32[4]) )
            {
              while ( 1 )
              {
                v18 = (v13 + 3) & 0xFFFFFFFC;
                if ( v18 >= (unsigned int)v22 || v18 >= 2 * v23 || v25 + v23 > v22 )
                  break;
                v19 = (_DWORD *)((char *)v21 + v18);
                if ( v18 + 8 >= v23 || !*v19 )
                {
                  NtUnmapViewOfSection(-1, (int)v21);
                  v25 += v23;
                  v21 = 0;
                  Section = ZwMapViewOfSection((int)Handle, -1, (int)&v21, 0, v23, (int)&v25, (int)&v23, 2, 0, 4);
                  if ( Section < 0 )
                    goto LABEL_46;
                  v18 = 0;
                  v19 = v21;
                }
                Section = ((int (__thiscall *)(int (__stdcall *)(_DWORD *, _DWORD *), _DWORD *, _DWORD *))v26)(
                            v26,
                            v19,
                            v27);
                if ( Section >= 0 )
                {
                  v13 = v19[1] + v18;
                  if ( (unsigned int)++v24 < LODWORD(v32[4]) )
                    continue;
                }
                goto LABEL_46;
              }
              Section = -1073741762;
            }
LABEL_46:
            if ( v26 == RtlpExtendedHeapInformationGenerator )
            {
              if ( Section >= 0 )
              {
                if ( a3 )
                  *a3 = v31[10] - v31[9];
                if ( v31[10] > v31[11] )
                  Section = -1073741789;
              }
            }
            else if ( a3 )
            {
              *a3 = 44;
            }
          }
        }
        break;
      }
      NtClose(Handle);
      LODWORD(v22) = (HIDWORD(v32[3]) + 0xFFFF) & 0xFFFF0000;
    }
    if ( v21 )
      NtUnmapViewOfSection(-1, (int)v21);
    if ( Handle )
      NtClose(Handle);
    return Section;
  }
  return result;
}
