/*
 * XREFs of _RtlpFreeHeapInternal@20 @ 0x4B30705A
 * Callers:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpFreeWithExceptionProtection@12 @ 0x4B34D3E6 (_RtlpHpFreeWithExceptionProtection@12.c)
 *     _RtlpHpTagFreeHeap@12 @ 0x4B3701A4 (_RtlpHpTagFreeHeap@12.c)
 * Callees:
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 *     @RtlpFreeUserBlock@12 @ 0x4B2C24DB (@RtlpFreeUserBlock@12.c)
 *     _RtlpIsSubSegmentReuseable@8 @ 0x4B2C3AA6 (_RtlpIsSubSegmentReuseable@8.c)
 *     _RtlpHpStackLoggingEnabled@4 @ 0x4B2C3BD0 (_RtlpHpStackLoggingEnabled@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     @RtlpInterlockedFlushSList@4 @ 0x4B33E8E6 (@RtlpInterlockedFlushSList@4.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlpHpStackTraceRemoveStack@8 @ 0x4B36E701 (_RtlpHpStackTraceRemoveStack@8.c)
 *     _RtlpLogHeapFreeEvent@12 @ 0x4B36F097 (_RtlpLogHeapFreeEvent@12.c)
 *     @RtlpGetReservedBlockSize@4 @ 0x4B370C7D (@RtlpGetReservedBlockSize@4.c)
 *     _RtlpValidateLFHBlock@8 @ 0x4B371DA9 (_RtlpValidateLFHBlock@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 */

unsigned int __fastcall RtlpFreeHeapInternal(_DWORD *BaseAddress, unsigned int a2, int a3, _DWORD *a4, _WORD *a5)
{
  int v5; // esi
  int v6; // ebx
  void *v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  struct _TEB *v11; // esi
  int v12; // edi
  int v14; // ecx
  struct _TEB *v15; // esi
  char v16; // al
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // ecx
  _DWORD *v25; // ecx
  unsigned int v26; // edx
  int v27; // eax
  volatile signed __int32 *v28; // ecx
  int v29; // eax
  int v30; // eax
  volatile signed __int32 *v31; // ecx
  signed __int32 *v32; // eax
  signed __int32 v33; // esi
  unsigned int v34; // eax
  volatile signed __int32 *v35; // eax
  signed __int32 v36; // esi
  _DWORD *v37; // edx
  unsigned int v38; // ecx
  int v39; // edi
  _DWORD *v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  volatile signed __int32 *v43; // esi
  unsigned int v44; // ecx
  int v45; // esi
  unsigned int v46; // ecx
  signed __int32 v47; // edx
  unsigned int *v48; // edx
  unsigned int v49; // ecx
  volatile signed __int32 *v50; // edx
  volatile signed __int32 v51; // eax
  volatile signed __int64 *v52; // edx
  _DWORD *v53; // edx
  bool v54; // zf
  int v55; // esi
  volatile signed __int32 *v56; // eax
  int v57; // edx
  ULONG HeapProtection; // eax
  int v59; // edi
  signed __int64 v60; // rax
  signed __int64 v61; // rax
  int v62; // esi
  _DWORD *v63; // edi
  volatile signed __int32 *v64; // eax
  volatile signed __int32 *v65; // esi
  signed __int32 v66; // edx
  unsigned int *v67; // ecx
  int v68; // esi
  signed __int32 v69; // edx
  signed __int32 v70; // eax
  unsigned __int8 v71; // al
  ULONG OldProtect; // [esp+14h] [ebp-38h] BYREF
  PVOID BaseAddressa; // [esp+18h] [ebp-34h] BYREF
  ULONG_PTR RegionSize; // [esp+1Ch] [ebp-30h] BYREF
  volatile signed __int32 *v75; // [esp+24h] [ebp-28h]
  unsigned int *i; // [esp+28h] [ebp-24h]
  unsigned int v77; // [esp+2Ch] [ebp-20h]
  volatile signed __int64 *v78; // [esp+30h] [ebp-1Ch]
  signed __int32 v79; // [esp+34h] [ebp-18h]
  int v80; // [esp+38h] [ebp-14h]
  unsigned int v81; // [esp+3Ch] [ebp-10h]
  _DWORD *v82; // [esp+40h] [ebp-Ch]
  _DWORD *v83; // [esp+44h] [ebp-8h]
  char v84; // [esp+4Ah] [ebp-2h]
  char v85; // [esp+4Bh] [ebp-1h]

  v5 = (int)BaseAddress;
  v6 = 0;
  v7 = (void *)a2;
  v83 = BaseAddress;
  v81 = a2;
  v8 = 0;
  if ( BaseAddress[2] == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
    {
      v6 = *(_DWORD *)(a2 - 8);
      v81 = a2 - v6;
    }
    v9 = RtlpHpConvertFlagsToSegmentFlags(a3);
    v10 = v81;
    v77 = RtlpHpFreeHeap(v9 & 0x11000001, a4, a5);
    if ( v77 )
    {
      if ( a4 )
        *a4 -= v6;
      if ( RtlpHpStackLoggingEnabled() )
        RtlpHpStackTraceRemoveStack(v5, v10);
    }
    else
    {
      v11 = NtCurrentTeb();
      v11->LastStatusValue = -1073741811;
      v11->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v77;
  }
  v14 = a3;
  if ( (*(_DWORD *)(v5 + 68) & 0x1000000) != 0 )
    goto LABEL_139;
  if ( (*(_BYTE *)(v5 + 72) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe(v5, a2);
  }
  else if ( (a2 & 7) != 0 )
  {
    RtlpLogHeapFailure(a2, 0, 0, 0);
  }
  else
  {
    v8 = a2 - 8;
    if ( *(_BYTE *)(a2 - 8 + 7) == 5 )
      v8 -= 8 * *(unsigned __int8 *)(v8 + 6);
    if ( (*(_BYTE *)(v8 + 7) & 0x3F) == 0 )
    {
      RtlpLogHeapFailure(v8, 0, 0, 0);
      v8 = 0;
    }
  }
  if ( !v8 )
    goto LABEL_23;
  v7 = (void *)v81;
  if ( *(_BYTE *)(v81 - 1) != 5 )
    goto LABEL_60;
  if ( *(char *)(v8 + 7) >= 0 )
  {
    if ( *(_DWORD *)(v5 + 76)
      && (unsigned int)(*(_DWORD *)v8 ^ *(_DWORD *)(v5 + 80)) >> 24 != ((unsigned __int8)(*(_BYTE *)v8 ^ *(_BYTE *)(v5 + 80)) ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)v8 ^ *(_WORD *)(v5 + 80)) >> 8) ^ ((unsigned int)(*(_DWORD *)v8 ^ *(_DWORD *)(v5 + 80)) >> 16))) )
    {
      v85 = 0;
      goto LABEL_30;
    }
    v16 = 1;
  }
  else
  {
    v16 = RtlpValidateLFHBlock(v5, v8);
  }
  v85 = v16;
  v84 = v16;
  if ( v16 )
  {
    if ( *(char *)(v8 + 7) >= 0 )
    {
      if ( *(_DWORD *)(v5 + 76) )
      {
        v20 = *(_DWORD *)v8;
        if ( (*(_DWORD *)v8 & *(_DWORD *)(v5 + 76)) != 0 )
          v20 ^= *(_DWORD *)(v5 + 80);
      }
      else
      {
        LOWORD(v20) = *(_WORD *)v8;
      }
    }
    else
    {
      v19 = v5 ^ RtlpLFHKey ^ *(_DWORD *)v8 ^ (v8 >> 3);
      if ( (_WORD)v19 )
        v20 = 0;
      else
        v20 = *(_DWORD *)(v8 - (v19 >> 13));
      LOWORD(v20) = *(_WORD *)(v20 + 20);
    }
    v21 = (unsigned __int16)v20;
    if ( *(_BYTE *)(v8 + 7) == 4 )
    {
      if ( *(_DWORD *)(v5 + 76) )
      {
        v22 = *(_DWORD *)v8;
        if ( (*(_DWORD *)v8 & *(_DWORD *)(v5 + 76)) != 0 )
          v22 ^= *(_DWORD *)(v5 + 80);
      }
      else
      {
        LOWORD(v22) = *(_WORD *)v8;
      }
      v23 = v21 + *(_DWORD *)(v8 - 8) - (unsigned __int16)v22;
    }
    else
    {
      v23 = 8 * (unsigned __int16)v20;
    }
    v17 = v81;
    v85 = v23 + v8 >= v81 ? v84 : 0;
    if ( v85 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_30:
  v17 = v81;
LABEL_31:
  RtlpLogHeapFailure(v8, v17, 0, 0);
  if ( !v85 )
    goto LABEL_23;
LABEL_32:
  v7 = (void *)v81;
  v75 = *(volatile signed __int32 **)(v81 - 8);
  if ( (a3 & 0x3C000102) != 0 )
    goto LABEL_60;
  if ( *(_BYTE *)(v81 - 8 + 7) == 5 )
  {
    v7 = (void *)v81;
    v18 = v81 - 8 * *(unsigned __int8 *)(v81 - 8 + 6);
  }
  else
  {
    v18 = 0;
  }
  if ( (int)RtlpCallInterceptRoutine(v7, 3, v18) < 0 )
  {
LABEL_23:
    v15 = NtCurrentTeb();
    v15->LastStatusValue = -1073741811;
    v15->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  v7 = (void *)v81;
LABEL_60:
  if ( *(char *)(v8 + 7) >= 0 )
  {
    v14 = a3;
LABEL_139:
    v71 = RtlpFreeHeap((unsigned __int16 *)v5, v14 | 2, (unsigned __int16 *)v8, v7);
    v12 = v71;
    if ( v71 )
      goto LABEL_140;
    return v12;
  }
  v24 = v5 ^ RtlpLFHKey ^ *(_DWORD *)v8 ^ (v8 >> 3);
  if ( (_WORD)v24 || (v25 = *(_DWORD **)(v8 - (v24 >> 13)), (v82 = v25) == 0) )
  {
    RtlpLogHeapFailure(v8, 0, 0, 0);
    goto LABEL_66;
  }
  v26 = (unsigned __int16)(*(_DWORD *)(v8 + 4) >> 8);
  v27 = *v25;
  v80 = v25[1];
  v78 = 0;
  v77 = v26;
  v28 = *(volatile signed __int32 **)(*(_DWORD *)v27 + 12);
  v29 = (unsigned int)v28 ^ *(_DWORD *)(v80 + 16);
  v75 = v28;
  if ( v80 + v26 * ((RtlpLFHKey ^ v80 ^ (unsigned int)v29) >> 16) + (unsigned __int16)(RtlpLFHKey ^ v80 ^ v29) != v8 )
  {
    RtlpLogHeapFailure(v8, 0, 0, 0);
    goto LABEL_65;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v30 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v30 = 2147353472;
  if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(2);
  v31 = 0;
  v75 = 0;
  HIDWORD(RegionSize) = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
  v32 = v82 + 4;
  for ( i = v82 + 4; ; v32 = (signed __int32 *)i )
  {
    v33 = *v32;
    v34 = HIWORD(*v32);
    v79 = v33;
    if ( (v34 & 0x8000) == 0 )
    {
      v35 = (volatile signed __int32 *)_InterlockedCompareExchange((volatile signed __int32 *)i, v33 | 0x80000000, v33);
      v36 = v79;
      if ( v35 == (volatile signed __int32 *)v79 )
        goto LABEL_80;
      v31 = v75;
    }
    v31 = (volatile signed __int32 *)((char *)v31 + 1);
    v75 = v31;
    if ( (unsigned int)v31 > HIDWORD(RegionSize) )
      break;
  }
  v36 = -1;
  v79 = -1;
LABEL_80:
  *(_BYTE *)(v8 + 7) = 0x80;
  if ( v36 == -1 )
  {
    v37 = (_DWORD *)(v8 + 8);
    v38 = (unsigned int)(v82 + 2);
    goto LABEL_82;
  }
  v39 = (int)v82;
  _bittestandreset(*(signed __int32 **)(v80 + 24), v77);
  if ( *((_WORD *)v82 + 6) )
  {
    v40 = (_DWORD *)RtlpInterlockedFlushSList(v82 + 2);
    if ( v40 )
    {
      v36 = (signed __int32)v78;
      do
      {
        v41 = *(v40 - 1);
        v40 = (_DWORD *)*v40;
        _bittestandreset(*(signed __int32 **)(v80 + 24), (unsigned __int16)(v41 >> 8));
        ++v36;
        v77 = (unsigned __int16)(v41 >> 8);
      }
      while ( v40 );
      v39 = (int)v82;
      v78 = (volatile signed __int64 *)v36;
      LOWORD(v36) = v79;
    }
  }
  v42 = (v77 << 16) | ((unsigned int)v78 + (unsigned __int16)v36 + 1);
  v43 = *(volatile signed __int32 **)v39;
  if ( (_WORD)v42 == *(_WORD *)(v39 + 24) )
  {
    v77 = *(_DWORD *)(*v43 + 16);
    v75 = (volatile signed __int32 *)*((_DWORD *)v43 + 22);
    v44 = *((_DWORD *)v43 + 21);
    if ( v44 != 1
      || (v44 = v77, v77 < (unsigned int)v75)
      || (v77 -= (unsigned int)v75, v44 = *v43, v39 = (int)v82, v77 >= *(_DWORD *)(*v43 + 20)) )
    {
      v75 = *(volatile signed __int32 **)v39;
      v45 = _InterlockedExchange(v75 + 1, 0);
      if ( !v45 )
        goto LABEL_113;
      v39 = (int)v82;
      if ( _InterlockedAnd((volatile signed __int32 *)(v45 + 28), 0xFFFFFFF9) == 6 )
      {
        v46 = **(_DWORD **)v45;
        *(_DWORD *)v45 = 0;
LABEL_111:
        v53 = (_DWORD *)(v45 + 32);
LABEL_112:
        RtlpInterlockedPushEntrySList(v46, v53);
LABEL_113:
        v54 = (*(_BYTE *)(v39 + 22) & 3) == 0;
        v55 = *(_DWORD *)(*v75 + 12);
        v56 = *(volatile signed __int32 **)v39;
        v75 = (volatile signed __int32 *)v55;
        HIDWORD(RegionSize) = v56;
        if ( !v54 )
        {
          BaseAddressa = (PVOID)((*(_DWORD *)(v39 + 4) + 4127) & 0xFFFFF000);
          LODWORD(RegionSize) = 8 * (unsigned __int16)RtlpGetReservedBlockSize(v39) * *(unsigned __int16 *)(v39 + 24);
          HeapProtection = RtlpGetHeapProtection(*(_DWORD **)(v55 + 12), v57);
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, &RegionSize, HeapProtection, &OldProtect);
        }
        *(_DWORD *)(*(_DWORD *)(v39 + 4) + 12) = 0;
        RtlpFreeUserBlock(v55, *(int **)(v39 + 4), v44);
        v59 = -*(unsigned __int16 *)(v39 + 24);
        LODWORD(v60) = HIDWORD(RegionSize) + 80;
        v77 = v59;
        v78 = (volatile signed __int64 *)(HIDWORD(RegionSize) + 80);
        do
        {
          do
          {
            v61 = *(_QWORD *)v60;
            HIDWORD(RegionSize) = HIDWORD(v61);
            v62 = v61;
            v60 = _InterlockedCompareExchange64(v78, __SPAIR64__(HIDWORD(v61) - 1, (int)v61 + v59), v61);
            v59 = v77;
            v54 = (_DWORD)v60 == v62;
            LODWORD(v60) = v78;
          }
          while ( !v54 );
        }
        while ( HIDWORD(v60) != HIDWORD(RegionSize) );
        v63 = v82;
        v64 = v75;
        v82[1] = 0;
        _InterlockedIncrement(v64 + 8);
        v63[4] = 0;
        if ( _InterlockedAnd(v63 + 7, 0xFFFFFFFE) == 1 )
        {
          v37 = v63 + 8;
          v38 = *(_DWORD *)*v63;
          *v63 = 0;
          goto LABEL_82;
        }
        goto LABEL_65;
      }
      if ( !RtlpIsSubSegmentReuseable((int)v75, v45) )
        goto LABEL_113;
      do
      {
        v47 = *(_DWORD *)(v45 + 28);
        if ( !v47 || (v47 & 2) != 0 )
          goto LABEL_113;
        v44 = v47 | 2;
        v39 = (int)v82;
      }
      while ( _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 28), v47 | 2, v47) != v47 );
      v48 = *(unsigned int **)v45;
      v49 = 0;
      i = *(unsigned int **)v45;
      v77 = 0;
      while ( 1 )
      {
        v50 = (volatile signed __int32 *)&v48[(((_BYTE)v49 + (unsigned __int8)*((_WORD *)v48 + 47)) & 0xF) + 2];
        HIDWORD(RegionSize) = v50;
        v51 = *v50;
        v78 = (volatile signed __int64 *)v51;
        if ( v51 )
        {
          v79 = v51 + 28;
          if ( (*(_DWORD *)(v51 + 28) & 1) != 0 )
            goto LABEL_106;
          v39 = (int)v82;
          if ( (volatile signed __int64 *)_InterlockedCompareExchange(
                                            (volatile signed __int32 *)HIDWORD(RegionSize),
                                            v45,
                                            (signed __int32)v78) == v78 )
          {
            v39 = (int)v82;
            if ( _InterlockedAnd((volatile signed __int32 *)v79, 0xFFFFFFFD) != 2 )
              goto LABEL_113;
            v52 = v78;
            v46 = **(_DWORD **)v78;
            *(_DWORD *)v78 = 0;
            v53 = v52 + 4;
            goto LABEL_112;
          }
        }
        else
        {
          v44 = v45;
          if ( !_InterlockedCompareExchange(v50, v45, 0) )
            goto LABEL_113;
        }
        v49 = v77;
LABEL_106:
        v77 = ++v49;
        if ( v49 >= 0x10 )
        {
          v46 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)v45 + 12) + 4 * *(unsigned __int16 *)(*(_DWORD *)v45 + 92) + 960)
              + 72;
          goto LABEL_111;
        }
        v48 = i;
      }
    }
  }
  *(_DWORD *)(v39 + 16) = v42;
  if ( (*(_DWORD *)(v39 + 28) & 2) != 0 || !RtlpIsSubSegmentReuseable((int)v43, v39) )
    goto LABEL_65;
  v65 = (volatile signed __int32 *)(v39 + 28);
  do
  {
    v66 = *v65;
    if ( !*v65 || (v66 & 2) != 0 )
      goto LABEL_65;
  }
  while ( _InterlockedCompareExchange(v65, v66 | 2, v66) != v66 );
  v67 = *(unsigned int **)v39;
  v68 = 0;
  i = *(unsigned int **)v39;
  while ( 1 )
  {
    v69 = v67[(((_BYTE)v68 + (unsigned __int8)*((_WORD *)v67 + 47)) & 0xF) + 2];
    v75 = (volatile signed __int32 *)&v67[(((_BYTE)v68 + (unsigned __int8)*((_WORD *)v67 + 47)) & 0xF) + 2];
    if ( !v69 )
    {
      if ( !_InterlockedCompareExchange(v75, v39, 0) )
        goto LABEL_65;
      goto LABEL_132;
    }
    if ( (*(_DWORD *)(v69 + 28) & 1) == 0 )
      break;
LABEL_133:
    if ( (unsigned int)++v68 >= 0x10 )
    {
      v37 = (_DWORD *)(v39 + 32);
      v38 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)v39 + 12) + 4 * *(unsigned __int16 *)(*(_DWORD *)v39 + 92) + 960) + 72;
      goto LABEL_82;
    }
  }
  v70 = _InterlockedCompareExchange(v75, v39, v69);
  v39 = (int)v82;
  if ( v70 != v69 )
  {
LABEL_132:
    v67 = i;
    goto LABEL_133;
  }
  if ( _InterlockedAnd((volatile signed __int32 *)(v69 + 28), 0xFFFFFFFD) == 2 )
  {
    v38 = **(_DWORD **)v69;
    *(_DWORD *)v69 = 0;
    v37 = (_DWORD *)(v69 + 32);
LABEL_82:
    RtlpInterlockedPushEntrySList(v38, v37);
  }
LABEL_65:
  v5 = (int)v83;
LABEL_66:
  v12 = 1;
LABEL_140:
  if ( a5 )
    *a5 = 0;
  if ( a4 )
    *a4 = 0;
  if ( RtlpHpStackLoggingEnabled() && (a3 & 0x10000000) == 0 )
    RtlpHpStackTraceRemoveStack(v5, v81);
  return v12;
}
