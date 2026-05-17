/*
 * XREFs of _PssNtCaptureSnapshot@16 @ 0x4B386310
 * Callers:
 *     <none>
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _ZwCreateProcessEx@36 @ 0x4B2F2E50 (_ZwCreateProcessEx@36.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _PssNtFreeSnapshot@4 @ 0x4B386AF0 (_PssNtFreeSnapshot@4.c)
 *     PsspSampleCounters @ 0x4B386FC7 (PsspSampleCounters.c)
 *     _PsspCaptureIptTrace@8 @ 0x4B38717C (_PsspCaptureIptTrace@8.c)
 *     _PsspCaptureProcessInformation@12 @ 0x4B38727C (_PsspCaptureProcessInformation@12.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     _PsspCaptureVaSpaceInformation@12 @ 0x4B387B12 (_PsspCaptureVaSpaceInformation@12.c)
 *     _PsspCaptureHandleInformation@12 @ 0x4B387CF4 (_PsspCaptureHandleInformation@12.c)
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 */

int __stdcall PssNtCaptureSnapshot(void **a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int result; // eax
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int Process; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // edi
  unsigned int v16; // edi
  _DWORD *v17; // [esp+Ch] [ebp-54h] BYREF
  __int64 v18; // [esp+10h] [ebp-50h]
  int v19; // [esp+18h] [ebp-48h] BYREF
  int v20; // [esp+1Ch] [ebp-44h] BYREF
  int v21; // [esp+20h] [ebp-40h]
  int v22; // [esp+24h] [ebp-3Ch]
  int v23; // [esp+28h] [ebp-38h] BYREF
  int v24; // [esp+2Ch] [ebp-34h]
  __int64 v25; // [esp+30h] [ebp-30h] BYREF
  __int64 v26; // [esp+38h] [ebp-28h] BYREF
  __int64 v27; // [esp+40h] [ebp-20h] BYREF
  __int64 v28; // [esp+48h] [ebp-18h] BYREF
  __int64 v29; // [esp+50h] [ebp-10h] BYREF
  __int64 v30; // [esp+58h] [ebp-8h] BYREF

  v4 = a3;
  if ( (a3 & 0x3FF8000) != 0 )
    return -1073741811;
  v6 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v7 = a3 & 0x40000000;
  v18 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v24 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v18 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v30, &v29);
  }
  v19 = 0;
  v8 = *a1;
  v17 = v8;
  if ( !v8 )
  {
    v20 = 976;
    result = NtAllocateVirtualMemory(-1, (int)&v17, 0, (int)&v20, 4096, 4);
    if ( result < 0 )
      return result;
    v8 = v17;
    v19 = 1;
    *a1 = v17;
  }
  memset(v8, 0, 0x3D0u);
  v9 = v19;
  *v17 = 1146311504;
  v17[1] = v9;
  v17[2] = a3;
  v19 = PsspCaptureProcessInformation(a3);
  if ( v19 < 0 )
    goto LABEL_11;
  if ( (a3 & 2) != 0 )
  {
    if ( v7 )
      PsspSampleCounters(&v28, &v27);
    v19 = 2147352576;
    v19 = PsspCaptureAuxiliaryPages(a3, &v19, v10);
    if ( v19 < 0 )
      goto LABEL_11;
    if ( v7 )
    {
      PsspSampleCounters(&v26, &v25);
      *((_QWORD *)v17 + 115) = v25 - v27;
      *((_QWORD *)v17 + 116) = 1000000 * (v26 - v28) / v18;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v7 )
      PsspSampleCounters(&v28, &v27);
    v19 = PsspCaptureVaSpaceInformation(a3);
    if ( v19 >= 0 )
    {
      if ( v7 )
      {
        PsspSampleCounters(&v26, &v25);
        *((_QWORD *)v17 + 113) = v25 - v27;
        *((_QWORD *)v17 + 114) = 1000000 * (v26 - v28) / v18;
      }
      goto LABEL_24;
    }
LABEL_11:
    PssNtFreeSnapshot(v17);
    *a1 = 0;
    return v19;
  }
LABEL_24:
  if ( (a3 & 1) == 0 )
    goto LABEL_45;
  if ( v7 )
    PsspSampleCounters(&v28, &v27);
  do
  {
    while ( 1 )
    {
      if ( a3 >= 0 )
        v11 = 0;
      else
        v11 = 4096;
      v21 = v6 & 0x10000000;
      v22 = v6 & 0x8000000;
      if ( (v6 & 0x10000000) != 0 )
      {
        v11 |= 0x400u;
      }
      else if ( (v6 & 0x8000000) != 0 )
      {
        v11 |= 1u;
      }
      Process = ZwCreateProcessEx((int)&v23, 0x2000000, 0, a2, v11, 0, 0, 0, 0);
      v19 = Process;
      if ( Process >= 0 )
        goto LABEL_40;
      if ( (v6 & 0x4000000) == 0 )
        goto LABEL_11;
      if ( !v21 )
        break;
      v6 &= ~0x10000000u;
    }
    if ( !v22 )
      goto LABEL_11;
    v6 &= ~0x8000000u;
    Process = -1073741267;
LABEL_40:
    ;
  }
  while ( Process == -1073741267 );
  while ( 1 )
  {
    v13 = MEMORY[0x7FFE0018];
    if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
      break;
    _mm_pause();
  }
  v14 = v17;
  v7 = v24;
  v4 = a3;
  v17[190] = MEMORY[0x7FFE0014];
  v14[191] = v13;
  v17[188] = v23;
  if ( v7 )
  {
    PsspSampleCounters(&v26, &v25);
    *((_QWORD *)v17 + 111) = v25 - v27;
    *((_QWORD *)v17 + 112) = 1000000 * (v26 - v28) / v18;
  }
LABEL_45:
  if ( (v4 & 4) != 0 )
  {
    if ( v7 )
      PsspSampleCounters(&v28, &v27);
    v15 = PsspCaptureHandleInformation(v4);
    if ( v15 < 0 )
    {
LABEL_49:
      PssNtFreeSnapshot(v17);
      *a1 = 0;
      return v15;
    }
    if ( v7 )
    {
      PsspSampleCounters(&v26, &v25);
      *((_QWORD *)v17 + 117) = v25 - v27;
      *((_QWORD *)v17 + 118) = 1000000 * (v26 - v28) / v18;
    }
  }
  if ( (v4 & 0x80u) == 0 )
    goto LABEL_58;
  if ( v7 )
    PsspSampleCounters(&v28, &v27);
  v15 = PsspCaptureThreadInformation(v4, a4);
  if ( v15 < 0 )
    goto LABEL_49;
  if ( v7 )
  {
    PsspSampleCounters(&v26, &v25);
    *((_QWORD *)v17 + 119) = v25 - v27;
    v16 = v18;
    *((_QWORD *)v17 + 120) = 1000000 * (v26 - v28) / v18;
  }
  else
  {
LABEL_58:
    v16 = v18;
  }
  if ( v7 )
  {
    PsspSampleCounters(&v26, &v25);
    *((_QWORD *)v17 + 109) = v25 - v29;
    *((_QWORD *)v17 + 110) = 1000000 * (v26 - v30) / __SPAIR64__(HIDWORD(v18), v16);
  }
  if ( (v4 & 0x2000) != 0 )
    PsspCaptureIptTrace(v17, a2);
  return 0;
}
