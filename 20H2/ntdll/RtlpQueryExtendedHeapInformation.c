/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x1800740CC
 * Callers:
 *     RtlQueryHeapInformation @ 0x180073FA0 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlLockHeap @ 0x18005E4A0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005E540 (RtlUnlockHeap.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800741AC (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18007A8F0 (RtlpQueryExtendedInformationHeap.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r14d
  int v11; // ecx
  unsigned int v12; // r15d
  __int16 v14; // si
  unsigned __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // r14
  _QWORD *v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rdi
  unsigned __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+70h] [rbp-90h]
  _QWORD *v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+88h] [rbp-78h]
  _QWORD *v31; // [rsp+90h] [rbp-70h]
  _QWORD v32[12]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v33[18]; // [rsp+100h] [rbp+0h] BYREF
  int v34; // [rsp+1A0h] [rbp+A0h]
  HANDLE Handle; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( (a1 & 7) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v29 = *(_DWORD *)(a1 + 16);
    memset(v32, 0, sizeof(v32));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v30 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v32[0] = a1;
      v32[10] = a1 + 40;
      v32[11] = a1 + a2;
      v6 = v32;
      v32[9] = a1;
      v30 = RtlpExtendedHeapInformationGenerator;
    }
    v31 = v6;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 16) == -571548178 )
        v14 = *(_WORD *)(v7 + 28);
      else
        v14 = *(_WORD *)(v7 + 208);
      if ( v14 != -1 )
      {
        RtlLockHeap(v7);
        v7 = *(_QWORD *)(a1 + 8);
      }
      v10 = RtlpQueryExtendedInformationHeap(v7, &v29);
      if ( v14 != -1 )
        RtlUnlockHeap(*(_QWORD *)(a1 + 8));
    }
    else
    {
      v10 = RtlpQueryExtendedInformationAllHeaps(&v29);
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock, v8, v9);
    v11 = 0;
    if ( v10 != -2147483622 )
      v11 = v10;
    v12 = v11;
    if ( v30 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v11 >= 0 )
      {
        v15 = v32[10];
        if ( a3 )
          *a3 = v32[10] - v32[9];
        if ( v15 > v32[11] )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v12;
  }
  else
  {
    Handle = 0LL;
    v24 = 0LL;
    v23 = 0x10000LL;
    v16 = NtCreateSection(&Handle, 983071LL, 0LL, &v23, 4, 0x8000000, 0LL);
    if ( v16 >= 0 )
    {
      while ( 1 )
      {
        memset(v33, 0, 0x60uLL);
        v17 = *(_QWORD *)a1;
        v33[2] = *(_QWORD *)(a1 + 8);
        LODWORD(v33[3]) = *(_DWORD *)(a1 + 16);
        v33[1] = v23;
        v33[0] = Handle;
        v18 = RtlpHeapPerformCrossProcessQuery(v17, v33);
        v16 = v18;
        if ( v18 != -1073741789 )
          break;
        NtClose(Handle);
        Handle = 0LL;
        v23 = (v33[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL;
        v16 = NtCreateSection(&Handle, 983071LL, 0LL, &v23, 4, 0x8000000, 0LL);
        if ( v16 < 0 )
          goto LABEL_56;
      }
      if ( v18 >= 0 )
      {
        v25 = 0LL;
        v26 = 0x10000LL;
        v16 = ZwMapViewOfSection(Handle, -1LL, &v24, 0LL, 0x10000LL, &v25, &v26, 2, 0, 4);
        if ( v16 >= 0 )
        {
          v19 = 0LL;
          memset(v32, 0, sizeof(v32));
          v27 = *(__int64 (__fastcall **)())(a1 + 24);
          if ( v27 )
          {
            v20 = *(_QWORD **)(a1 + 32);
          }
          else
          {
            v32[0] = a1;
            v32[10] = a1 + 40;
            v32[9] = a1;
            v32[11] = a1 + a2;
            v20 = v32;
            v27 = RtlpExtendedHeapInformationGenerator;
          }
          v34 = 0;
          v28 = v20;
          if ( LODWORD(v33[5]) )
          {
            while ( 1 )
            {
              v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v21 >= v23 || v21 >= 2 * v26 || (__int64)(v26 + v25) > (__int64)v23 )
                break;
              v22 = v21 + v24;
              if ( v21 + 16 >= v26 || !*(_DWORD *)v22 )
              {
                NtUnmapViewOfSection(-1LL, v24);
                v24 = 0LL;
                v25 += v26;
                v16 = ZwMapViewOfSection(Handle, -1LL, &v24, 0LL, v26, &v25, &v26, 2, 0, 4);
                if ( v16 < 0 )
                  goto LABEL_48;
                v22 = v24;
                v21 = 0LL;
              }
              v16 = ((__int64 (__fastcall *)(__int64, _QWORD *))v27)(v22, v28);
              if ( v16 >= 0 )
              {
                v19 = *(_QWORD *)(v22 + 8) + v21;
                if ( (unsigned int)++v34 < LODWORD(v33[5]) )
                  continue;
              }
              goto LABEL_48;
            }
            v16 = -1073741762;
          }
LABEL_48:
          if ( v27 == RtlpExtendedHeapInformationGenerator )
          {
            if ( v16 >= 0 )
            {
              if ( a3 )
                *a3 = v32[10] - v32[9];
              if ( v32[10] > v32[11] )
                v16 = -1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
LABEL_56:
    if ( v24 )
      NtUnmapViewOfSection(-1LL, v24);
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v16;
  }
}
