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

// bad sp value at call has been detected, the output may be wrong!
int __fastcall EtwpWriteToPrivateBuffers(
        unsigned int a1,
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
  unsigned int v11; // esi
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
  int InformationToken; // eax
  unsigned int v24; // eax
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
  size_t v52; // edi
  int *v53; // ecx
  unsigned __int8 v54; // al
  int v55; // eax
  unsigned __int64 v56; // rax
  int v57; // ecx
  struct _TEB *v58; // ecx
  _BYTE v59[1056]; // [esp-410h] [ebp-508h] BYREF
  int v60; // [esp+10h] [ebp-E8h] BYREF
  int v61; // [esp+14h] [ebp-E4h]
  _DWORD *v62; // [esp+1Ch] [ebp-DCh]
  unsigned __int16 *v63; // [esp+24h] [ebp-D4h]
  _DWORD *v64; // [esp+2Ch] [ebp-CCh]
  int v65; // [esp+30h] [ebp-C8h]
  int v66; // [esp+34h] [ebp-C4h]
  unsigned int v67; // [esp+38h] [ebp-C0h]
  _DWORD *v68; // [esp+3Ch] [ebp-BCh] BYREF
  void *v69; // [esp+40h] [ebp-B8h]
  int v70; // [esp+44h] [ebp-B4h]
  int v71; // [esp+48h] [ebp-B0h]
  void *v72; // [esp+4Ch] [ebp-ACh]
  unsigned int v73; // [esp+50h] [ebp-A8h] BYREF
  unsigned int v74; // [esp+54h] [ebp-A4h]
  int v75; // [esp+58h] [ebp-A0h]
  void *v76; // [esp+5Ch] [ebp-9Ch] BYREF
  size_t Size; // [esp+60h] [ebp-98h] BYREF
  int v78; // [esp+64h] [ebp-94h]
  int v79; // [esp+68h] [ebp-90h]
  unsigned int v80; // [esp+6Ch] [ebp-8Ch]
  unsigned __int16 v81; // [esp+70h] [ebp-88h] BYREF
  _WORD *v82; // [esp+74h] [ebp-84h]
  unsigned int v83; // [esp+78h] [ebp-80h]
  char v84; // [esp+7Dh] [ebp-7Bh]
  char v85; // [esp+7Eh] [ebp-7Ah]
  char v86; // [esp+7Fh] [ebp-79h]
  int v87; // [esp+80h] [ebp-78h]
  int v88; // [esp+84h] [ebp-74h]
  char v89[8]; // [esp+88h] [ebp-70h] BYREF
  char Src[80]; // [esp+90h] [ebp-68h] BYREF
  CPPEH_RECORD ms_exc; // [esp+E0h] [ebp-18h]

  v10 = a2;
  v64 = a2;
  v11 = a1;
  v80 = a1;
  v62 = a7;
  v68 = a7;
  v83 = a1;
  v65 = a9;
  v66 = a10;
  v88 = 0;
  v76 = 0;
  v81 = 0;
  v71 = 0;
  v74 = 0;
  v72 = 0;
  *(_DWORD *)(a10 + 64) = 0;
  if ( a8 > 0x80 )
    return 87;
  if ( (*(_BYTE *)(a1 + 192) & 4) != 0 && EtwpCheckForEnoughStackSpace() )
  {
    v13 = alloca(1040);
    ms_exc.old_esp = (DWORD)v59;
    v76 = v59;
    ms_exc.registration.TryLevel = -2;
    EtwpGetStackExtendedHeaderItem((int *)&v76, &v81);
  }
  v14 = 0;
  v74 = 0;
  while ( 1 )
  {
    v75 = 0;
    v68 = 0;
    v82 = 0;
    v87 = 80;
    v86 = 0;
    v84 = 0;
    v79 = 0;
    Size = 0;
    v78 = 0;
    v70 = 0;
    v69 = 0;
    v15 = 24 * v14;
    v83 = v15;
    if ( ((1 << v74) & a4) == 0 )
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
          v67 = v17;
          v73 = v17;
          if ( !EtwpLoggerArray )
            goto LABEL_17;
          if ( v17 < 0x40 )
            break;
          v88 = EtwpDemuxUmTraceHandle(v17, &v73);
          if ( !v88 )
            break;
        }
      }
    }
LABEL_91:
    v18 = v88;
LABEL_92:
    v14 = v74 + 1;
    v74 = v14;
    if ( v14 >= 4 )
      return v18;
    v11 = v80;
    v10 = v64;
  }
  v19 = v73;
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v73 + 4));
  if ( (*(_DWORD *)(EtwpLoggerArray + 8 * v19) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v19 + 4));
LABEL_17:
    v18 = 4201;
    v88 = 4201;
    goto LABEL_92;
  }
  v75 = *(_DWORD *)(EtwpLoggerArray + 8 * v19);
  v20 = 0;
  v88 = 0;
  v21 = v62 != 0 ? 104 : 80;
  v22 = v21;
  if ( (*(_BYTE *)(v83 + v80 + 96) & 1) != 0 )
  {
    InformationToken = ZwQueryInformationToken(-6, 1, (int)v89, 76, (int)&Size);
    v20 = 0;
    if ( InformationToken >= 0 )
    {
      Size -= 8;
      v79 = ((_WORD)Size + 15) & 0xFFF8;
      v86 = 1;
      v22 = v21 + (unsigned __int16)v79;
    }
  }
  v24 = v80;
  if ( (*(_BYTE *)(v83 + v80 + 96) & 4) != 0 && v76 )
  {
    v84 = 1;
    v22 += v81;
    v24 = v80;
  }
  if ( (*(_BYTE *)(v83 + v24 + 96) & 2) != 0 )
  {
    v85 = 1;
    v22 += 16;
  }
  else
  {
    v85 = 0;
  }
  v25 = (_DWORD *)(v66 + 16 * *(_DWORD *)(v66 + 64));
  v83 = 0;
  if ( a8 )
  {
    v26 = *(_WORD *)(v24 + 54) & 0x4000;
    HIWORD(v73) = v26;
    v27 = (unsigned __int16 *)(v65 + 8);
    while ( 1 )
    {
      v63 = (unsigned __int16 *)v22;
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
            v72 = (void *)*((_DWORD *)v27 - 2);
            v71 = *v27;
            v22 += ((unsigned __int16)v71 + 15) & 0xFFFFFFF8;
          }
        }
        else
        {
          LOWORD(v78) = *v27 + v78;
          ++v70;
        }
      }
      else
      {
        v22 += *(_DWORD *)v27;
      }
      if ( v22 < (unsigned int)v63 )
        break;
      ++v83;
      v27 += 8;
      v26 = HIWORD(v73);
      if ( v83 >= a8 )
        goto LABEL_45;
    }
    v20 = 534;
    v88 = 534;
  }
LABEL_45:
  if ( v70 )
    v22 += ((unsigned __int16)v78 + 15) & 0xFFFFFFF8;
  if ( v20 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v67 + 4));
    return v88;
  }
  v25[3] = v22;
  v31 = EtwpReserveTraceBuffer(v75, v22, NtCurrentTeb()->CurrentIdealProcessor.Reserved, &v60, &v68);
  v32 = v31;
  v83 = v31;
  if ( v31 )
  {
    v33 = v75;
    *v25 = v75;
    v25[1] = v31;
    v25[2] = v68;
    ++*(_DWORD *)(v66 + 64);
    *(_DWORD *)v31 = v22 | *(_DWORD *)(v33 + 36);
    *(_WORD *)(v31 + 4) = a5;
    *(_WORD *)(v31 + 6) = a3;
    v34 = (_DWORD *)(v80 + 12);
    *(_DWORD *)(v31 + 24) = *(_DWORD *)(v80 + 12);
    *(_DWORD *)(v31 + 28) = *++v34;
    *(_DWORD *)(v31 + 32) = *++v34;
    *(_DWORD *)(v31 + 36) = v34[1];
    v35 = v64;
    *(_DWORD *)(v31 + 40) = *v64;
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
      v82 = (_WORD *)(v31 + 80);
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
      v87 = 104;
    }
    else
    {
      v38 = v82;
      v39 = v87;
    }
    if ( v86 == 1 )
    {
      v40 = (_WORD *)(v39 + v31);
      v41 = v79;
      *v40 = v79;
      v40[1] = 2;
      v40[3] = Size;
      v40[2] = 0;
      memcpy((void *)(v39 + v31 + 8), Src, Size);
      *(_WORD *)(v32 + 4) |= 1u;
      v39 = v41 + v87;
      v87 = v39;
      if ( v82 )
        v82[2] |= 1u;
      v38 = v40;
      v82 = v40;
    }
    if ( v85 == 1 )
    {
      v42 = (unsigned __int16 *)(v39 + v32);
      *v42 = 16;
      v42[1] = 3;
      v42[3] = 4;
      v42[2] = 0;
      *((_DWORD *)v42 + 2) = NtCurrentPeb()->SessionId;
      *(_WORD *)(v32 + 4) |= 1u;
      v39 += 16;
      v87 = v39;
      if ( v38 )
        v38[2] |= 1u;
      v82 = v42;
    }
    else
    {
      v42 = v82;
    }
    if ( v84 == 1 )
    {
      v63 = (unsigned __int16 *)(v39 + v32);
      v43 = v81;
      memcpy((void *)(v39 + v32), v76, v81);
      *(_WORD *)(v32 + 4) |= 1u;
      v39 = v43 + v87;
      v87 += v43;
      if ( v42 )
        v42[2] |= 1u;
      v42 = v63;
      v82 = v63;
    }
    if ( v72 )
    {
      v44 = (unsigned __int16 *)(v39 + v32);
      v63 = v44;
      v45 = v71;
      v46 = (v71 + 15) & 0xFFF8;
      *v44 = v46;
      v44[1] = 12;
      v44[3] = v45;
      v44[2] = 0;
      v47 = v44 + 4;
      v48 = v45;
      memcpy(v44 + 4, v72, v45);
      memset((char *)v47 + v48, 0, (unsigned __int16)(v46 - v71 - 8));
      v32 = v83;
      *(_WORD *)(v83 + 4) |= 1u;
      v42 = v63;
      v39 = *v63 + v87;
      v87 = v39;
      if ( v82 )
        v82[2] |= 1u;
    }
    if ( v70 )
    {
      v49 = (v78 + 15) & 0xFFF8;
      *(_WORD *)(v39 + v32) = v49;
      *(_WORD *)(v39 + v32 + 2) = 11;
      v50 = v78;
      *(_WORD *)(v39 + v32 + 6) = v78;
      *(_WORD *)(v39 + v32 + 4) = 0;
      v69 = (void *)(v32 + v39 + 8);
      memset((char *)v69 + v50, 0, (unsigned __int16)(v49 - v78 - 8));
      *(_WORD *)(v32 + 4) |= 1u;
      v39 = *(unsigned __int16 *)(v87 + v32) + v87;
      v87 = v39;
      if ( v42 )
        v42[2] |= 1u;
    }
    if ( a8 )
    {
      v51 = (_BYTE *)(v65 + 12);
      v79 = a8;
      do
      {
        v52 = *((_DWORD *)v51 - 1);
        v53 = (int *)*((_DWORD *)v51 - 3);
        v63 = (unsigned __int16 *)*((_DWORD *)v51 - 2);
        if ( (*(_WORD *)(v80 + 54) & 0x4000) != 0 )
          v54 = *v51;
        else
          v54 = 0;
        v32 = v83;
        if ( v54 )
        {
          v55 = v54 - 1;
          if ( v55 )
          {
            if ( v55 == 2 && v52 == 8 )
            {
              v60 = *v53;
              v61 = v53[1];
            }
          }
          else
          {
            memcpy(v69, v53, v52);
            v69 = (char *)v69 + v52;
          }
        }
        else
        {
          v87 = v52 + v39;
          memcpy((void *)(v39 + v83), v53, v52);
        }
        v51 += 16;
        v28 = v79-- == 1;
        v39 = v87;
      }
      while ( !v28 );
    }
    LODWORD(v56) = v60;
    *(_DWORD *)(v32 + 16) = v60;
    v57 = v61;
    *(_DWORD *)(v32 + 20) = v61;
    if ( *(_DWORD *)(v75 + 16) == 3 )
    {
      *(_DWORD *)(v32 + 60) = v57;
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
    v18 = *(_DWORD *)(v75 + 144) < v22 ? 234 : 8;
  else
    v18 = 534;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v67 + 4));
  return v18;
}
