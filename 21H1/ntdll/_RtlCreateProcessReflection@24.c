/*
 * XREFs of _RtlCreateProcessReflection@24 @ 0x4B335060
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtQuerySystemTime@4 @ 0x4B2F2F20 (_NtQuerySystemTime@4.c)
 *     _NtWaitForMultipleObjects@20 @ 0x4B2F2F30 (_NtWaitForMultipleObjects@20.c)
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 */

int __stdcall RtlCreateProcessReflection(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // edi
  int VirtualMemory; // esi
  _DWORD *v9; // edx
  int *v10; // eax
  int v11; // eax
  HANDLE v12; // [esp-8h] [ebp-60h]
  _DWORD *v13; // [esp+Ch] [ebp-4Ch] BYREF
  int *v14; // [esp+10h] [ebp-48h] BYREF
  HANDLE v15; // [esp+14h] [ebp-44h] BYREF
  int v16; // [esp+18h] [ebp-40h] BYREF
  int v17; // [esp+1Ch] [ebp-3Ch] BYREF
  int v18; // [esp+20h] [ebp-38h] BYREF
  void *v19; // [esp+24h] [ebp-34h] BYREF
  HANDLE Handle; // [esp+28h] [ebp-30h] BYREF
  HANDLE v21; // [esp+2Ch] [ebp-2Ch] BYREF
  HANDLE v22; // [esp+30h] [ebp-28h] BYREF
  int v23; // [esp+34h] [ebp-24h] BYREF
  int v24; // [esp+38h] [ebp-20h] BYREF
  int v25; // [esp+3Ch] [ebp-1Ch]
  _DWORD v26[2]; // [esp+40h] [ebp-18h] BYREF
  LARGE_INTEGER SystemTime; // [esp+48h] [ebp-10h] BYREF
  LARGE_INTEGER v28; // [esp+50h] [ebp-8h] BYREF

  v17 = 4096;
  v22 = 0;
  v14 = 0;
  v18 = 0;
  v13 = 0;
  Handle = 0;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v19 = 0;
  v21 = 0;
  v15 = 0;
  NtQuerySystemTime(&SystemTime);
  if ( (a2 & 0xFFFFFFE1) != 0 )
    return -1073741584;
  if ( (a2 & 8) != 0 && a3 )
    return -1073741581;
  if ( a6 )
  {
    *a6 = 0;
    a6[1] = 0;
    a6[2] = 0;
    a6[3] = 0;
  }
  v7 = a1;
  VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v18, 0, (int)&v17, 12288, 4);
  if ( VirtualMemory < 0 )
  {
    v18 = 0;
    goto LABEL_40;
  }
  ZwQueryInformationProcess(-1, 27, v18, v17, (int)&v17);
  v17 = 4096;
  NtFreeVirtualMemory(-1, (int)&v18, (int)&v17, 0x8000);
  v16 = 44;
  VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v13, 0, (int)&v16, 12288, 4);
  if ( VirtualMemory < 0 )
  {
    v13 = 0;
    goto LABEL_40;
  }
  v9 = v13;
  *v13 = v16;
  v9[2] = a3;
  v9[3] = a4;
  v9[1] = a2;
  v9[6] = a5;
  if ( a1 == -1 )
  {
    v9[1] = a2 | 0x10;
    VirtualMemory = RtlpProcessReflectionStartup(v13);
    if ( VirtualMemory >= 0 && a6 )
    {
      *a6 = v13[7];
      a6[1] = v13[8];
      a6[2] = v13[9];
      v10 = v13;
LABEL_39:
      a6[3] = v10[10];
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  v24 = v16;
  v25 = 0;
  VirtualMemory = NtCreateSection((int)&Handle, 6, 0, (int)&v24, 4, 0x8000000, 0);
  if ( VirtualMemory < 0 )
    goto LABEL_40;
  v23 = v16;
  VirtualMemory = ZwMapViewOfSection((int)Handle, a1, (int)&v19, 0, v16, 0, (int)&v23, 2, 0, 4);
  if ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwMapViewOfSection((int)Handle, -1, (int)&v14, 0, v16, 0, (int)&v23, 2, 0, 4);
    if ( VirtualMemory < 0 )
    {
      v14 = 0;
      goto LABEL_40;
    }
    if ( !a6
      || (VirtualMemory = NtCreateEvent((int)&v21, 2031619, 0, 0, 0), VirtualMemory >= 0)
      && (VirtualMemory = NtCreateEvent((int)&v15, 2031619, 0, 0, 0), VirtualMemory >= 0)
      && (VirtualMemory = ZwDuplicateObject(-1, (int)v21, a1, (int)(v13 + 4), 2031619, 0, 2), VirtualMemory >= 0)
      && (VirtualMemory = ZwDuplicateObject(-1, (int)v15, a1, (int)(v13 + 5), 2031619, 0, 2), VirtualMemory >= 0)
      && (!a5 || (VirtualMemory = ZwDuplicateObject(-1, a5, a1, (int)(v13 + 6), 2031619, 0, 2), VirtualMemory >= 0)) )
    {
      qmemcpy(v14, v13, 0x2Cu);
      v7 = a1;
      VirtualMemory = RtlpCreateUserThreadEx(a1, 0, 2, 0, 0, 0, 0, (int)RtlpProcessReflectionStartup, v19, &v22, 0);
      if ( VirtualMemory >= 0 )
      {
        if ( a6 )
        {
          v26[0] = v22;
          v26[1] = v21;
          if ( NtWaitForMultipleObjects(2, (int)v26, 1, 0, 0) == 1 )
          {
            if ( v14[7] )
            {
              if ( ZwDuplicateObject(a1, v14[7], -1, (int)a6, 0x1FFFFF, 0, 2) >= 0 )
              {
                v11 = ZwDuplicateObject(a1, v14[8], -1, (int)(a6 + 1), 0x1FFFFF, 0, 2);
                v12 = v15;
                if ( v11 >= 0 )
                {
                  VirtualMemory = NtSetEvent((int)v15, 0);
                  a6[2] = v14[9];
                  v10 = v14;
                  goto LABEL_39;
                }
              }
              else
              {
                v12 = v15;
              }
              VirtualMemory = NtSetEvent((int)v12, 0);
              goto LABEL_40;
            }
            ZwWaitForSingleObject((int)v22, 0, 0);
          }
          VirtualMemory = -1073741823;
        }
      }
    }
LABEL_40:
    if ( v19 )
      NtUnmapViewOfSection(v7, (int)v19);
    goto LABEL_42;
  }
  v19 = 0;
LABEL_42:
  if ( v14 )
    NtUnmapViewOfSection(-1, (int)v14);
  if ( Handle )
    NtClose(Handle);
  if ( v13 )
    NtFreeVirtualMemory(-1, (int)&v13, (int)&v16, 0x8000);
  if ( v21 )
    NtClose(v21);
  if ( v15 )
    NtClose(v15);
  if ( v22 )
    NtClose(v22);
  NtQuerySystemTime(&v28);
  return VirtualMemory;
}
