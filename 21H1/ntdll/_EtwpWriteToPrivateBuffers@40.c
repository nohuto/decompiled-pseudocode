/*
 * XREFs of _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E
 * Callers:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 *     _EtwEventWriteString@24 @ 0x4B380420 (_EtwEventWriteString@24.c)
 * Callees:
 *     _EtwpReserveTraceBuffer@20 @ 0x4B2EFD10 (_EtwpReserveTraceBuffer@20.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 *     _EtwpCheckForEnoughStackSpace@4 @ 0x4B381503 (_EtwpCheckForEnoughStackSpace@4.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 *     _EtwpGetStackExtendedHeaderItem@8 @ 0x4B3817C8 (_EtwpGetStackExtendedHeaderItem@8.c)
 */

// local variable allocation has failed, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
int __fastcall EtwpWriteToPrivateBuffers(
        int a1,
        _DWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        _GUID *a6,
        _DWORD *a7,
        unsigned int a8,
        int a9,
        int a10)
{
  _DWORD *v10; // edi
  int v11; // esi
  void *v13; // esp
  unsigned int v14; // edx
  int v15; // edx
  unsigned __int8 v16; // al
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // edi
  unsigned int v22; // esi
  NTSTATUS v23; // eax
  int v24; // eax
  _DWORD *v25; // edi
  __int16 v26; // ax
  unsigned __int16 *v27; // ecx
  bool v28; // zf
  unsigned __int8 v29; // al
  int v30; // eax
  int v31; // eax
  int v32; // ebx
  int v33; // ecx
  _DWORD *v34; // esi
  _DWORD *v35; // esi
  _GUID *p_ActivityId; // esi
  unsigned __int16 *p_Data2; // esi
  _WORD *v38; // ecx
  int v39; // edx
  _WORD *v40; // esi
  unsigned __int16 v41; // di
  unsigned __int16 *v42; // edi
  int v43; // esi
  unsigned __int16 *v44; // eax
  unsigned __int16 v45; // cx
  unsigned __int16 v46; // bx
  _WORD *v47; // edi
  int v48; // esi
  __int16 v49; // ax
  unsigned __int16 v50; // cx
  _BYTE *v51; // esi
  int v52; // edi
  LARGE_INTEGER *v53; // ecx
  unsigned __int8 v54; // al
  int v55; // eax
  unsigned __int64 v56; // rax
  int HighPart; // ecx
  struct _TEB *v58; // ecx
  _BYTE v59[1056]; // [esp-410h] [ebp-508h] BYREF
  LARGE_INTEGER PerformanceCounter; // [esp+10h] [ebp-E8h] BYREF
  _DWORD *v61; // [esp+1Ch] [ebp-DCh]
  unsigned __int16 *v62; // [esp+24h] [ebp-D4h]
  _DWORD *v63; // [esp+2Ch] [ebp-CCh]
  int v64; // [esp+30h] [ebp-C8h]
  int v65; // [esp+34h] [ebp-C4h]
  unsigned int v66; // [esp+38h] [ebp-C0h]
  int v67; // [esp+3Ch] [ebp-BCh] BYREF
  void *v68; // [esp+40h] [ebp-B8h]
  int v69; // [esp+44h] [ebp-B4h]
  int v70; // [esp+48h] [ebp-B0h]
  void *v71; // [esp+4Ch] [ebp-ACh]
  unsigned int v72; // [esp+50h] [ebp-A8h] BYREF
  unsigned int v73; // [esp+54h] [ebp-A4h]
  int v74; // [esp+58h] [ebp-A0h]
  void *v75; // [esp+5Ch] [ebp-9Ch] BYREF
  ULONG ReturnLength; // [esp+60h] [ebp-98h] BYREF
  int v77; // [esp+64h] [ebp-94h]
  int v78; // [esp+68h] [ebp-90h]
  int v79; // [esp+6Ch] [ebp-8Ch]
  unsigned __int16 v80; // [esp+70h] [ebp-88h] BYREF
  _WORD *v81; // [esp+74h] [ebp-84h]
  unsigned int v82; // [esp+78h] [ebp-80h]
  char v83; // [esp+7Dh] [ebp-7Bh]
  char v84; // [esp+7Eh] [ebp-7Ah]
  char v85; // [esp+7Fh] [ebp-79h]
  int v86; // [esp+80h] [ebp-78h]
  int v87; // [esp+84h] [ebp-74h]
  char TokenInformation[8]; // [esp+88h] [ebp-70h] BYREF
  char Src[80]; // [esp+90h] [ebp-68h] BYREF
  _BYTE *ms_exc; // [esp+E0h] [ebp-18h]
  size_t ms_exc_8; // [esp+E8h] [ebp-10h]
  size_t ms_exc_20; // [esp+F4h] [ebp-4h] OVERLAPPED

  v10 = a2;
  v63 = a2;
  v11 = a1;
  v79 = a1;
  v61 = a7;
  v67 = (int)a7;
  v82 = a1;
  v64 = a9;
  v65 = a10;
  v87 = 0;
  v75 = 0;
  v80 = 0;
  v70 = 0;
  v73 = 0;
  v71 = 0;
  *(_DWORD *)(a10 + 64) = 0;
  if ( a8 > 0x80 )
    return 87;
  if ( (*(_BYTE *)(a1 + 192) & 4) != 0 && EtwpCheckForEnoughStackSpace() )
  {
    v13 = alloca(1040);
    ms_exc = v59;
    v75 = v59;
    LODWORD(ms_exc_20) = -2;
    EtwpGetStackExtendedHeaderItem(&v80, (ULONG *)&v75, v11);
  }
  v14 = 0;
  v73 = 0;
  while ( 1 )
  {
    v74 = 0;
    v67 = 0;
    v81 = 0;
    v86 = 80;
    v85 = 0;
    v83 = 0;
    v78 = 0;
    ReturnLength = 0;
    v77 = 0;
    v69 = 0;
    v68 = 0;
    v15 = 24 * v14;
    v82 = v15;
    if ( ((1 << v73) & a4) == 0 )
    {
      if ( *(_BYTE *)(v15 + v11 + 100) )
      {
        v16 = *(_BYTE *)(v15 + v11 + 101);
        if ( (*((_BYTE *)v10 + 4) <= v16 || !v16)
          && ((*(_BYTE *)(v15 + v11 + 96) & 0x40) != 0 && !*((_QWORD *)v10 + 1)
           || (*((_QWORD *)v10 + 1) & *(_QWORD *)(v15 + v11 + 88)) != 0LL
           && (v10[2] & *(_DWORD *)(v15 + v11 + 80)) == *(_DWORD *)(v15 + v11 + 80)
           && (v10[3] & *(_DWORD *)(v15 + v11 + 84)) == *(_DWORD *)(v15 + v11 + 84)) )
        {
          v17 = *(unsigned __int8 *)(v15 + v11 + 102);
          v66 = v17;
          v72 = v17;
          if ( !EtwpLoggerArray )
            goto LABEL_17;
          if ( v17 < 0x40 )
            break;
          v87 = EtwpDemuxUmTraceHandle(v17, &v72);
          if ( !v87 )
            break;
        }
      }
    }
LABEL_91:
    v18 = v87;
LABEL_92:
    v14 = v73 + 1;
    v73 = v14;
    if ( v14 >= 4 )
      return v18;
    v11 = v79;
    v10 = v63;
  }
  v19 = v72;
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v72 + 4));
  if ( (*(_DWORD *)(EtwpLoggerArray + 8 * v19) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v19 + 4));
LABEL_17:
    v18 = 4201;
    v87 = 4201;
    goto LABEL_92;
  }
  v74 = *(_DWORD *)(EtwpLoggerArray + 8 * v19);
  v20 = 0;
  v87 = 0;
  v21 = v61 != 0 ? 104 : 80;
  v22 = v21;
  if ( (*(_BYTE *)(v82 + v79 + 96) & 1) != 0 )
  {
    v23 = ZwQueryInformationToken((HANDLE)0xFFFFFFFA, 1u, TokenInformation, 0x4Cu, &ReturnLength);
    v20 = 0;
    if ( v23 >= 0 )
    {
      ReturnLength -= 8;
      v78 = ((_WORD)ReturnLength + 15) & 0xFFF8;
      v85 = 1;
      v22 = v21 + (unsigned __int16)v78;
    }
  }
  v24 = v79;
  if ( (*(_BYTE *)(v82 + v79 + 96) & 4) != 0 && v75 )
  {
    v83 = 1;
    v22 += v80;
    v24 = v79;
  }
  if ( (*(_BYTE *)(v82 + v24 + 96) & 2) != 0 )
  {
    v84 = 1;
    v22 += 16;
  }
  else
  {
    v84 = 0;
  }
  v25 = (_DWORD *)(v65 + 16 * *(_DWORD *)(v65 + 64));
  v82 = 0;
  if ( a8 )
  {
    v26 = *(_WORD *)(v24 + 54) & 0x4000;
    HIWORD(v72) = v26;
    v27 = (unsigned __int16 *)(v64 + 8);
    while ( 1 )
    {
      v62 = (unsigned __int16 *)v22;
      v28 = v26 == 0;
      v29 = 0;
      if ( !v28 )
        v29 = *((_BYTE *)v27 + 4);
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            v71 = (void *)*((_DWORD *)v27 - 2);
            v70 = *v27;
            v22 += ((unsigned __int16)v70 + 15) & 0xFFFFFFF8;
          }
        }
        else
        {
          LOWORD(v77) = *v27 + v77;
          ++v69;
        }
      }
      else
      {
        v22 += *(_DWORD *)v27;
      }
      if ( v22 < (unsigned int)v62 )
        break;
      ++v82;
      v27 += 8;
      v26 = HIWORD(v72);
      if ( v82 >= a8 )
        goto LABEL_45;
    }
    v20 = 534;
    v87 = 534;
  }
LABEL_45:
  if ( v69 )
    v22 += ((unsigned __int16)v77 + 15) & 0xFFFFFFF8;
  if ( v20 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v66 + 4));
    return v87;
  }
  v25[3] = v22;
  v31 = EtwpReserveTraceBuffer(v74, v22, NtCurrentTeb()->CurrentIdealProcessor.Reserved, &PerformanceCounter, &v67);
  v32 = v31;
  v82 = v31;
  if ( v31 )
  {
    v33 = v74;
    *v25 = v74;
    v25[1] = v31;
    v25[2] = v67;
    ++*(_DWORD *)(v65 + 64);
    *(_DWORD *)v31 = v22 | *(_DWORD *)(v33 + 36);
    *(_WORD *)(v31 + 4) = a5;
    *(_WORD *)(v31 + 6) = a3;
    v34 = (_DWORD *)(v79 + 12);
    *(_DWORD *)(v31 + 24) = *(_DWORD *)(v79 + 12);
    *(_DWORD *)(v31 + 28) = *++v34;
    *(_DWORD *)(v31 + 32) = *++v34;
    *(_DWORD *)(v31 + 36) = v34[1];
    v35 = v63;
    *(_DWORD *)(v31 + 40) = *v63;
    *(_DWORD *)(v31 + 44) = *++v35;
    *(_DWORD *)(v31 + 48) = *++v35;
    *(_DWORD *)(v31 + 52) = v35[1];
    if ( a6 )
      p_ActivityId = a6;
    else
      p_ActivityId = &NtCurrentTeb()->ActivityId;
    *(_DWORD *)(v31 + 64) = p_ActivityId->Data1;
    p_Data2 = &p_ActivityId->Data2;
    *(_DWORD *)(v31 + 68) = *(_DWORD *)p_Data2;
    p_Data2 += 2;
    *(_DWORD *)(v31 + 72) = *(_DWORD *)p_Data2;
    *(_DWORD *)(v31 + 76) = *((_DWORD *)p_Data2 + 1);
    if ( a7 )
    {
      v38 = (_WORD *)(v31 + 80);
      v81 = (_WORD *)(v31 + 80);
      *(_WORD *)(v31 + 80) = 24;
      *(_WORD *)(v31 + 82) = 1;
      *(_WORD *)(v31 + 86) = 16;
      *(_WORD *)(v31 + 84) = 0;
      *(_DWORD *)(v31 + 88) = *a7;
      *(_DWORD *)(v31 + 92) = a7[1];
      *(_DWORD *)(v31 + 96) = a7[2];
      *(_DWORD *)(v31 + 100) = a7[3];
      *(_WORD *)(v31 + 4) |= 1u;
      v39 = 104;
      v86 = 104;
    }
    else
    {
      v38 = v81;
      v39 = v86;
    }
    if ( v85 == 1 )
    {
      v40 = (_WORD *)(v39 + v31);
      v41 = v78;
      *v40 = v78;
      v40[1] = 2;
      v40[3] = ReturnLength;
      v40[2] = 0;
      LODWORD(ms_exc_20) = ReturnLength;
      memcpy((void *)(v39 + v31 + 8), Src, ms_exc_20);
      *(_WORD *)(v32 + 4) |= 1u;
      v39 = v41 + v86;
      v86 = v39;
      if ( v81 )
        v81[2] |= 1u;
      v38 = v40;
      v81 = v40;
    }
    if ( v84 == 1 )
    {
      v42 = (unsigned __int16 *)(v39 + v32);
      *v42 = 16;
      v42[1] = 3;
      v42[3] = 4;
      v42[2] = 0;
      *((_DWORD *)v42 + 2) = NtCurrentPeb()->SessionId;
      *(_WORD *)(v32 + 4) |= 1u;
      v39 += 16;
      v86 = v39;
      if ( v38 )
        v38[2] |= 1u;
      v81 = v42;
    }
    else
    {
      v42 = v81;
    }
    if ( v83 == 1 )
    {
      v62 = (unsigned __int16 *)(v39 + v32);
      v43 = v80;
      LODWORD(ms_exc_20) = v80;
      memcpy((void *)(v39 + v32), v75, ms_exc_20);
      *(_WORD *)(v32 + 4) |= 1u;
      v39 = v43 + v86;
      v86 += v43;
      if ( v42 )
        v42[2] |= 1u;
      v42 = v62;
      v81 = v62;
    }
    if ( v71 )
    {
      v44 = (unsigned __int16 *)(v39 + v32);
      v62 = v44;
      v45 = v70;
      v46 = (v70 + 15) & 0xFFF8;
      *v44 = v46;
      v44[1] = 12;
      v44[3] = v45;
      v44[2] = 0;
      v47 = v44 + 4;
      v48 = v45;
      LODWORD(ms_exc_20) = v45;
      memcpy(v44 + 4, v71, ms_exc_20);
      LODWORD(ms_exc_8) = (unsigned __int16)(v46 - v70 - 8);
      memset((char *)v47 + v48, 0, ms_exc_8);
      v32 = v82;
      *(_WORD *)(v82 + 4) |= 1u;
      v42 = v62;
      v39 = *v62 + v86;
      v86 = v39;
      if ( v81 )
        v81[2] |= 1u;
    }
    if ( v69 )
    {
      v49 = (v77 + 15) & 0xFFF8;
      *(_WORD *)(v39 + v32) = v49;
      *(_WORD *)(v39 + v32 + 2) = 11;
      v50 = v77;
      *(_WORD *)(v39 + v32 + 6) = v77;
      *(_WORD *)(v39 + v32 + 4) = 0;
      v68 = (void *)(v32 + v39 + 8);
      LODWORD(ms_exc_20) = (unsigned __int16)(v49 - v77 - 8);
      memset((char *)v68 + v50, 0, ms_exc_20);
      *(_WORD *)(v32 + 4) |= 1u;
      v39 = *(unsigned __int16 *)(v86 + v32) + v86;
      v86 = v39;
      if ( v42 )
        v42[2] |= 1u;
    }
    if ( a8 )
    {
      v51 = (_BYTE *)(v64 + 12);
      v78 = a8;
      do
      {
        v52 = *((_DWORD *)v51 - 1);
        v53 = (LARGE_INTEGER *)*((_DWORD *)v51 - 3);
        v62 = (unsigned __int16 *)*((_DWORD *)v51 - 2);
        if ( (*(_WORD *)(v79 + 54) & 0x4000) != 0 )
          v54 = *v51;
        else
          v54 = 0;
        v32 = v82;
        if ( v54 )
        {
          v55 = v54 - 1;
          if ( v55 )
          {
            if ( v55 == 2 && v52 == 8 )
              PerformanceCounter = *v53;
          }
          else
          {
            LODWORD(ms_exc_20) = v52;
            memcpy(v68, v53, ms_exc_20);
            v68 = (char *)v68 + v52;
          }
        }
        else
        {
          v86 = v52 + v39;
          LODWORD(ms_exc_20) = v52;
          memcpy((void *)(v39 + v82), v53, ms_exc_20);
        }
        v51 += 16;
        v28 = v78-- == 1;
        v39 = v86;
      }
      while ( !v28 );
    }
    LODWORD(v56) = PerformanceCounter.LowPart;
    *(_DWORD *)(v32 + 16) = PerformanceCounter.LowPart;
    HighPart = PerformanceCounter.HighPart;
    *(_DWORD *)(v32 + 20) = PerformanceCounter.HighPart;
    if ( *(_DWORD *)(v74 + 16) == 3 )
    {
      *(_DWORD *)(v32 + 60) = HighPart;
    }
    else
    {
      v56 = __rdtsc();
      *(_DWORD *)(v32 + 60) = HIDWORD(v56);
    }
    *(_DWORD *)(v32 + 56) = v56;
    v58 = NtCurrentTeb();
    *(_DWORD *)(v32 + 8) = v58->ClientId.UniqueThread;
    *(_DWORD *)(v32 + 12) = v58->ClientId.UniqueProcess;
    goto LABEL_91;
  }
  if ( v22 <= 0xFFF8 )
    v18 = *(_DWORD *)(v74 + 144) < v22 ? 234 : 8;
  else
    v18 = 534;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v66 + 4));
  return v18;
}
