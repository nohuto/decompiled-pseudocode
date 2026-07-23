/*
 * XREFs of EtwpWriteToPrivateBuffers @ 0x18004F4EC
 * Callers:
 *     EtwpEventWriteFull @ 0x18004F228 (EtwpEventWriteFull.c)
 *     EtwEventWriteString @ 0x180110390 (EtwEventWriteString.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x180050018 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D230 (NtQueryInformationToken.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DE6B4 (RtlResetStackOverflow.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180110A24 (EtwpCheckForEnoughStackSpace.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110A90 (EtwpDemuxUmTraceHandle.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x180110BF8 (EtwpGetStackExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpWriteToPrivateBuffers(
        __int64 a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        _GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  _OWORD *v11; // r9
  __int64 v12; // r8
  _OWORD *v13; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // r10d
  __int64 v16; // r11
  int v17; // eax
  _WORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // ebx
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // ebx
  __int64 v29; // rsi
  unsigned int v30; // r8d
  __int16 v31; // r9
  unsigned int v32; // r10d
  char v33; // al
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r15
  _GUID ActivityId; // xmm0
  unsigned int v38; // r8d
  void *v39; // rcx
  unsigned __int16 *v40; // rax
  unsigned int v41; // edx
  unsigned __int16 v42; // si
  unsigned __int16 *v43; // rdi
  __int64 v44; // rbx
  unsigned __int16 *v45; // rcx
  unsigned __int16 *v46; // rbx
  __int64 v47; // rcx
  unsigned __int16 v48; // ax
  char *v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // r12
  size_t v52; // rdx
  unsigned __int64 *v53; // r9
  char v54; // al
  unsigned __int64 v55; // rax
  struct _TEB *v56; // rcx
  size_t v57; // rbx
  char *v58; // r13
  void *v60; // rsp
  ULONG v61; // eax
  _WORD *v62; // rbx
  unsigned __int16 v63; // di
  _DWORD *v64; // rdx
  void *v65; // rbx
  char v66; // [rsp+0h] [rbp-810h] BYREF
  unsigned __int16 v67; // [rsp+810h] [rbp+0h]
  int v68; // [rsp+814h] [rbp+4h]
  char v69; // [rsp+818h] [rbp+8h]
  char v70; // [rsp+819h] [rbp+9h]
  unsigned __int16 v71; // [rsp+81Ch] [rbp+Ch] BYREF
  unsigned __int16 v72; // [rsp+820h] [rbp+10h]
  int v73; // [rsp+824h] [rbp+14h]
  ULONG ReturnLength; // [rsp+828h] [rbp+18h] BYREF
  __int64 v75; // [rsp+830h] [rbp+20h]
  int v76; // [rsp+838h] [rbp+28h]
  unsigned int v77; // [rsp+83Ch] [rbp+2Ch]
  ULONG v78; // [rsp+840h] [rbp+30h]
  int v79; // [rsp+844h] [rbp+34h]
  unsigned __int16 *v80; // [rsp+848h] [rbp+38h] BYREF
  unsigned int v81; // [rsp+850h] [rbp+40h] BYREF
  void *v82; // [rsp+858h] [rbp+48h] BYREF
  __int64 v83; // [rsp+860h] [rbp+50h]
  __int64 v84; // [rsp+868h] [rbp+58h]
  __int64 v85; // [rsp+870h] [rbp+60h]
  unsigned __int64 v86; // [rsp+878h] [rbp+68h] BYREF
  int v87; // [rsp+880h] [rbp+70h]
  unsigned int v88; // [rsp+884h] [rbp+74h]
  __int64 v89; // [rsp+890h] [rbp+80h]
  void *Src; // [rsp+8A0h] [rbp+90h]
  void *v91; // [rsp+8A8h] [rbp+98h]
  _OWORD *v92; // [rsp+8B0h] [rbp+A0h]
  char TokenInformation[16]; // [rsp+8D0h] [rbp+C0h] BYREF
  char v94[80]; // [rsp+8E0h] [rbp+D0h] BYREF

  v11 = a2;
  v12 = a1;
  v75 = a1;
  v13 = a7;
  v92 = a7;
  v80 = (unsigned __int16 *)a7;
  v83 = a1;
  v84 = a9;
  v89 = a10;
  v14 = 0;
  v82 = 0LL;
  v71 = 0;
  v72 = 0;
  Src = 0LL;
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 > 0x80 )
    return 87LL;
  if ( (*(_BYTE *)(a1 + 240) & 4) != 0 )
  {
    if ( (unsigned __int8)EtwpCheckForEnoughStackSpace(4LL, a2, a1, a2) )
    {
      v60 = alloca(2064LL);
      v82 = &v66;
      EtwpGetStackExtendedHeaderItem(&v82, &v71);
    }
    v11 = a2;
    v12 = v75;
  }
  v15 = 0;
  v77 = 0;
  v16 = 0LL;
  v85 = 0LL;
  v17 = a4;
  v73 = a4;
  while ( 1 )
  {
    v83 = 0LL;
    v80 = 0LL;
    v18 = 0LL;
    v68 = 80;
    v69 = 0;
    v70 = 0;
    LOWORD(v78) = 0;
    ReturnLength = 0;
    v67 = 0;
    v76 = 0;
    v91 = 0LL;
    v19 = 3 * v16;
    if ( !_bittest(&v17, v15) )
    {
      v20 = *((_QWORD *)v11 + 1);
      if ( *(_BYTE *)(v12 + 24 * v16 + 148) )
        break;
    }
LABEL_6:
    v77 = ++v15;
    v85 = ++v16;
    if ( v15 >= 4 )
      return v14;
    v12 = v75;
    v11 = a2;
    v13 = v92;
  }
  v21 = *(_BYTE *)(v12 + 24 * v16 + 149);
  if ( *((_BYTE *)v11 + 4) > v21 && v21
    || ((*(_BYTE *)(v12 + 24 * v16 + 144) & 0x40) == 0 || v20)
    && ((v20 & *(_QWORD *)(v12 + 24 * v16 + 136)) == 0
     || (v20 & *(_QWORD *)(v12 + 24 * v16 + 128)) != *(_QWORD *)(v12 + 24 * v16 + 128)) )
  {
LABEL_60:
    v17 = v73;
    goto LABEL_6;
  }
  v22 = *(unsigned __int8 *)(v12 + 24 * v16 + 150);
  v88 = v22;
  v81 = v22;
  if ( !EtwpLoggerArray )
    goto LABEL_79;
  if ( (unsigned int)v22 < 0x40 )
  {
LABEL_15:
    v23 = 2LL * v81;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v81 + 8), 1u);
    if ( (*(_QWORD *)(EtwpLoggerArray + 8 * v23) & 1) == 0 )
    {
      v83 = *(_QWORD *)(EtwpLoggerArray + 8 * v23);
      v14 = 0;
      v79 = 0;
      goto LABEL_17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v23 + 8));
LABEL_79:
    v14 = 4201;
    goto LABEL_60;
  }
  v14 = EtwpDemuxUmTraceHandle((unsigned int)v22, &v81);
  v79 = v14;
  if ( !v14 )
  {
    v15 = v77;
    v16 = v85;
    goto LABEL_15;
  }
LABEL_17:
  if ( v14 )
  {
LABEL_59:
    v16 = v85;
    v15 = v77;
    goto LABEL_60;
  }
  v24 = v13 != 0LL ? 104 : 80;
  v25 = v24;
  v26 = v75;
  if ( (*(_BYTE *)(v75 + 8 * v19 + 144) & 1) != 0 )
  {
    if ( NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength) >= 0 )
    {
      v61 = ReturnLength - 16;
      ReturnLength = v61;
      LOWORD(v61) = (v61 + 15) & 0xFFF8;
      v78 = v61;
      v69 = 1;
      v25 = v24 + (unsigned __int16)v61;
    }
    v26 = v75;
  }
  v27 = *(_DWORD *)(v26 + 8 * v19 + 144);
  if ( (v27 & 4) != 0 && v82 )
  {
    v70 = 1;
    v25 += v71;
    v26 = v75;
  }
  v87 = v27 & 2;
  v28 = v25 + 16;
  if ( (v27 & 2) == 0 )
    v28 = v25;
  v29 = v89 + 32LL * *(unsigned int *)(v89 + 128);
  v30 = 0;
  if ( a8 )
  {
    v31 = *(_WORD *)(v26 + 98) & 0x4000;
    while ( 1 )
    {
      v32 = v28;
      v33 = v31 ? *(_BYTE *)(v84 + 16LL * v30 + 12) : 0;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          v67 += *(_WORD *)(v84 + 16LL * v30 + 8);
          ++v76;
        }
        else if ( v33 == 2 )
        {
          Src = *(void **)(v84 + 16LL * v30);
          v72 = *(_WORD *)(v84 + 16LL * v30 + 8);
          v28 += (v72 + 15) & 0xFFFFFFF8;
        }
      }
      else
      {
        v28 += *(_DWORD *)(v84 + 16LL * v30 + 8);
      }
      if ( v28 < v32 )
        break;
      if ( ++v30 >= a8 )
        goto LABEL_30;
    }
    v14 = 534;
    v79 = 534;
  }
LABEL_30:
  if ( v76 )
    v28 += (v67 + 15) & 0xFFFFFFF8;
  if ( v14 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v22 + 8));
    return v14;
  }
  *(_DWORD *)(v29 + 24) = v28;
  v34 = v83;
  v35 = EtwpReserveTraceBuffer(v83, v28, NtCurrentTeb()->CurrentIdealProcessor.Reserved, &v86, &v80);
  v36 = v35;
  if ( v35 )
  {
    *(_QWORD *)v29 = v34;
    *(_QWORD *)(v29 + 8) = v35;
    *(_QWORD *)(v29 + 16) = v80;
    ++*(_DWORD *)(v89 + 128);
    *(_DWORD *)v35 = v28 | *(_DWORD *)(v34 + 44);
    *(_WORD *)(v35 + 4) = a5;
    *(_WORD *)(v35 + 6) = a3;
    *(_OWORD *)(v35 + 24) = *(_OWORD *)(v75 + 32);
    *(_OWORD *)(v35 + 40) = *a2;
    if ( a6 )
      ActivityId = *a6;
    else
      ActivityId = NtCurrentTeb()->ActivityId;
    *(_GUID *)(v35 + 64) = ActivityId;
    if ( a7 )
    {
      v18 = (_WORD *)(v35 + 80);
      *(_DWORD *)(v35 + 80) = 65560;
      *(_DWORD *)(v35 + 84) = 0x100000;
      *(_OWORD *)(v35 + 88) = *a7;
      *(_WORD *)(v35 + 4) |= 1u;
      v38 = 104;
      v68 = 104;
    }
    else
    {
      v38 = v68;
    }
    if ( v69 == 1 )
    {
      v62 = (_WORD *)(v35 + v38);
      v63 = v78;
      *v62 = v78;
      v62[1] = 2;
      v62[3] = ReturnLength;
      v62[2] = 0;
      memmove(v62 + 4, v94, ReturnLength);
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = v63 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v62;
    }
    if ( v87 )
    {
      v64 = (_DWORD *)(v36 + v38);
      *v64 = 196624;
      v64[1] = 0x40000;
      v64[2] = NtCurrentPeb()->SessionId;
      *(_WORD *)(v36 + 4) |= 1u;
      v38 += 16;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v64;
    }
    if ( v70 == 1 )
    {
      v65 = (void *)(v36 + v38);
      memmove(v65, v82, v71);
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = v71 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v65;
    }
    v39 = Src;
    if ( Src )
    {
      v40 = (unsigned __int16 *)(v36 + v38);
      v80 = v40;
      v41 = v72;
      v42 = (v72 + 15) & 0xFFF8;
      *v40 = v42;
      *(_DWORD *)(v40 + 1) = 12;
      v40[3] = v41;
      v43 = v40 + 4;
      v44 = v41;
      memmove(v40 + 4, v39, v41);
      memset((char *)v43 + v44, 0, (unsigned __int16)(v42 - v72 - 8));
      *(_WORD *)(v36 + 4) |= 1u;
      v45 = v80;
      v38 = *v80 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
      v18 = v45;
    }
    if ( v76 )
    {
      v46 = (unsigned __int16 *)(v36 + v38);
      v47 = v67;
      v48 = (v67 + 15) & 0xFFF8;
      *v46 = v48;
      *(_DWORD *)(v46 + 1) = 11;
      v46[3] = v47;
      v91 = v46 + 4;
      memset((char *)v46 + v47 + 8, 0, (unsigned __int16)(v48 - v47 - 8));
      *(_WORD *)(v36 + 4) |= 1u;
      v38 = *v46 + v68;
      v68 = v38;
      if ( v18 )
        v18[2] |= 1u;
    }
    if ( a8 )
    {
      v49 = (char *)(v84 + 12);
      v50 = a8;
      v51 = v75;
      do
      {
        v52 = *((unsigned int *)v49 - 1);
        v53 = *(unsigned __int64 **)(v49 - 12);
        v54 = 0;
        if ( (*(_WORD *)(v51 + 98) & 0x4000) != 0 )
          v54 = *v49;
        if ( v54 )
        {
          if ( v54 == 1 )
          {
            v57 = *((unsigned int *)v49 - 1);
            v58 = (char *)v91;
            memmove(v91, *(const void **)(v49 - 12), v57);
            v91 = &v58[v57];
          }
          else if ( v54 == 3 && (_DWORD)v52 == 8 )
          {
            v86 = *v53;
          }
        }
        else
        {
          v68 = v52 + v38;
          memmove((void *)(v36 + v38), v53, v52);
        }
        v49 += 16;
        --v50;
        v38 = v68;
      }
      while ( v50 );
      v14 = v79;
    }
    v55 = v86;
    *(_QWORD *)(v36 + 16) = v86;
    if ( *(_DWORD *)(v83 + 16) != 3 )
      v55 = __rdtsc();
    *(_QWORD *)(v36 + 56) = v55;
    v56 = NtCurrentTeb();
    *(_DWORD *)(v36 + 8) = v56->ClientId.UniqueThread;
    *(_DWORD *)(v36 + 12) = v56->ClientId.UniqueProcess;
    goto LABEL_59;
  }
  if ( v28 <= 0xFFF8 )
    v14 = *(_DWORD *)(v34 + 212) < v28 ? 234 : 8;
  else
    v14 = 534;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v88 + 8));
  return v14;
}
