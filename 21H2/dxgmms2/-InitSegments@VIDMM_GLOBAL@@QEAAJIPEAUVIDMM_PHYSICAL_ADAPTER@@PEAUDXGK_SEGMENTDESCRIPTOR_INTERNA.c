/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00B1F08
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C00020F8 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0013410 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C00B1A50 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00B2500 (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00ECDBC (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4)
{
  unsigned int v4; // r11d
  unsigned __int64 v7; // r12
  unsigned int v8; // r14d
  char v9; // di
  unsigned __int64 v10; // rsi
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v11; // r12
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v12; // r15
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  NTSTATUS v16; // edi
  int v18; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  VIDMM_SEGMENT *v21; // rax
  VIDMM_SEGMENT *v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rcx
  int v25; // ecx
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // r10
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **v29; // r8
  unsigned __int64 v30; // rax
  const void *v31; // rax
  unsigned int i; // r15d
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  char v39; // cl
  char v40; // dl
  int v41; // eax
  ADAPTER_RENDER *v42; // rax
  bool v43; // al
  int v44; // ecx
  int v45; // ecx
  VIDMM_SEGMENT *v46; // rdi
  char v47; // cl
  VIDMM_SEGMENT *v48; // rax
  VIDMM_SEGMENT *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  PPCW_INSTANCE *v56; // rsi
  int v57; // eax
  wchar_t *v58; // rax
  ADAPTER_RENDER *v59; // rcx
  WCHAR *v60; // rbx
  __int64 v61; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v63; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+54h] [rbp-ACh]
  char v66; // [rsp+58h] [rbp-A8h]
  unsigned int v67; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v68; // [rsp+60h] [rbp-A0h]
  ADAPTER_RENDER *v69; // [rsp+68h] [rbp-98h]
  struct _PCW_DATA v70; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v72[14]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v73; // [rsp+100h] [rbp+0h] BYREF
  __int64 v74; // [rsp+110h] [rbp+10h]

  v4 = *((_DWORD *)a3 + 5);
  v67 = v4;
  v66 = 0;
  v7 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
  {
    v8 = v4;
    v65 = -v4;
    while ( 1 )
    {
      v9 = *((_BYTE *)a3 + 436);
      v10 = v7;
      v11 = a4;
      v12 = a4;
      v70.Data = (char *)a4 + 104;
      if ( (v9 & 3) != 0 && v8 == *((unsigned __int16 *)a3 + 14) )
      {
        memset(v72, 0, 0x68uLL);
        if ( (v9 & 1) != 0 )
          v18 = (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(this[2], a2) >> 4) & 1;
        else
          v18 = 1;
        v72[2] = qword_1C006E248;
        v44 = 16 * (v18 | ((v66 & 1) << 6));
        if ( *((_QWORD *)&v73 + 1) )
          v45 = v44 | 0x101184;
        else
          v45 = v44 | 0x81184;
        LODWORD(v72[0]) = v45;
        v46 = (VIDMM_SEGMENT *)operator new(504LL, 0x36306956u, 64LL);
        if ( v46 )
        {
          VIDMM_SEGMENT::VIDMM_SEGMENT(
            v46,
            (struct VIDMM_GLOBAL *)this,
            a2,
            v8,
            v8 + v65,
            (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v72);
          *(_QWORD *)v46 = &VIDMM_SYSMEM_SEGMENT::`vftable';
        }
        else
        {
          v46 = 0LL;
        }
        *((_QWORD *)this[464] + v8) = v46;
        if ( !*((_QWORD *)this[464] + v8) )
        {
          _InterlockedAdd(&dword_1C006E7DC, 1u);
          goto LABEL_95;
        }
      }
      else
      {
        v13 = *(_DWORD *)a4;
        if ( *(_DWORD *)a4 >= 0x400000u || (v13 & 2) != 0 )
          goto LABEL_9;
        if ( (v13 & 0x80u) == 0 )
        {
          v14 = *(_DWORD *)a4 & 0x300;
          if ( (v13 & 0x300) != 0 )
            goto LABEL_9;
        }
        else
        {
          v14 = *(_DWORD *)a4 & 0x300;
        }
        if ( v14 == 768 || (v13 & 0x2000) != 0 && (v13 & 5) != 0 )
        {
LABEL_9:
          WdLogSingleEntry1(1LL, v8);
          DxgkLogInternalTriageEvent(v15, 0x40000LL);
          return (unsigned int)-1073741811;
        }
        v19 = *((_QWORD *)a4 + 2);
        if ( (v19 & 0xFFF) != 0 )
        {
          WdLogSingleEntry1(3LL, 4096LL);
          *((_QWORD *)v12 + 2) &= 0xFFFFFFFFFFFFF000uLL;
          v19 = *((_QWORD *)v12 + 2);
          v13 = *(_DWORD *)v11;
        }
        v20 = v10 + v19;
        if ( (v13 & 0x400) == 0 )
          v20 = v10;
        v68 = v20;
        if ( (v13 & 1) != 0 )
        {
          v21 = (VIDMM_SEGMENT *)operator new(536LL, 0x36306956u, 64LL);
          v22 = v21;
          if ( v21 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v21, (struct VIDMM_GLOBAL *)this, a2, v8, v8 + v65, v12);
            *((_QWORD *)v22 + 63) = 0LL;
            *(_QWORD *)v22 = &VIDMM_APERTURE_SEGMENT::`vftable';
            *((_QWORD *)v22 + 64) = 0LL;
            *((_QWORD *)v22 + 66) = 0LL;
            *((_QWORD *)v22 + 65) = 0LL;
          }
          else
          {
            v22 = 0LL;
          }
          v23 = 8LL * v8;
          *(_QWORD *)((char *)this[464] + v23) = v22;
          v24 = *(_QWORD *)((char *)this[464] + v23);
          if ( !v24 )
          {
            _InterlockedAdd(&dword_1C006E7DC, 1u);
            WdLogSingleEntry1(6LL, v8);
            goto LABEL_97;
          }
          if ( (*(_DWORD *)(v24 + 80) & 0x10) != 0 )
            *((_BYTE *)this + 7089) = 1;
          v25 = *(_DWORD *)v12;
          v26 = v66;
          if ( (*(_DWORD *)v12 & 0x400) != 0 )
            v26 = 1;
          v66 = v26;
        }
        else
        {
          *((_BYTE *)a3 + 436) |= 8u;
          if ( (*(_DWORD *)v12 & 0x10000) == 0 || (v47 = 4, *((_DWORD *)v12 + 21)) )
            v47 = 0;
          *((_BYTE *)a3 + 437) = v47 | *((_BYTE *)a3 + 437) & 0xFB;
          v48 = (VIDMM_SEGMENT *)operator new(520LL, 0x36306956u, 64LL);
          v49 = v48;
          if ( v48 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v48, (struct VIDMM_GLOBAL *)this, a2, v8, v8 + v65, v12);
            *((_QWORD *)v49 + 63) = 0LL;
            *(_QWORD *)v49 = &VIDMM_MEMORY_SEGMENT::`vftable';
            *((_DWORD *)v49 + 128) = 0;
          }
          else
          {
            v49 = 0LL;
          }
          v23 = 8LL * v8;
          *(_QWORD *)((char *)this[464] + v23) = v49;
          if ( !*(_QWORD *)((char *)this[464] + v23) )
          {
            _InterlockedAdd(&dword_1C006E7B8, 1u);
LABEL_95:
            WdLogSingleEntry1(6LL, v8);
LABEL_97:
            DxgkLogInternalTriageEvent(v51, 262145LL);
            return (unsigned int)-1073741801;
          }
          v25 = *(_DWORD *)v12;
          if ( (*(_DWORD *)v12 & 0x800) != 0 )
          {
            *((_BYTE *)a3 + 437) |= 2u;
            v25 = *(_DWORD *)v12;
          }
        }
        if ( (v25 & 0x10000) != 0 )
        {
          v50 = *(int *)(*(_QWORD *)((char *)this[464] + v23) + 476LL);
          if ( (_DWORD)v50 == 2 || !*((_QWORD *)a3 + v50) )
          {
            v16 = VIDMM_SEGMENT::SetVprRange(
                    *(VIDMM_SEGMENT **)((char *)this[464] + v23),
                    *((_QWORD *)v12 + 8),
                    *((_QWORD *)v12 + 9),
                    *((_DWORD *)v12 + 20),
                    *((_DWORD *)v12 + 21),
                    *((unsigned int *)v12 + 22));
            if ( v16 < 0 )
              return (unsigned int)v16;
          }
          else
          {
            *(_DWORD *)v12 = v25 & 0xFFFEFFFF;
          }
        }
        *((_QWORD *)&v73 + *(int *)(*(_QWORD *)((char *)this[464] + v23) + 476LL)) += *(_QWORD *)(*(_QWORD *)((char *)this[464] + v23)
                                                                                                + 56LL);
      }
      ++v8;
      v7 = v68;
      if ( v8 + v65 >= *((_DWORD *)a3 + 6) )
        break;
      a4 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v70.Data;
    }
    v4 = v67;
  }
  v27 = 0LL;
  v28 = 2LL;
  do
  {
    v29 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **)((char *)&v73 + v27);
    v30 = *(_QWORD *)((char *)&v73 + v27 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v73);
    if ( v30 && (a4 = *v29, (unsigned __int64)*v29 <= v30) )
      v31 = (const void *)(v30 - (_QWORD)a4);
    else
      v31 = 0LL;
    *(const void **)((char *)&v70.Data + v27) = v31;
    v27 += 8LL;
    --v28;
  }
  while ( v28 );
  for ( i = 0; i < *((_DWORD *)a3 + 6); ++i )
  {
    v33 = *((_QWORD *)this[464] + i + v4);
    v34 = *(int *)(v33 + 476);
    if ( (_DWORD)v34 != 2 && (v35 = *((_QWORD *)a3 + v34)) != 0 )
    {
      if ( (*(_DWORD *)(v33 + 80) & 0x1000) == 0 )
      {
        v52 = *((_QWORD *)&v70.Data + v34);
        v53 = *(_QWORD *)(v33 + 56);
        v54 = *(_QWORD *)(v33 + 64) - v53;
        if ( v54 >= v52 )
          v54 = *((_QWORD *)&v70.Data + v34);
        *((_QWORD *)&v70.Data + v34) = v52 - v54;
        v35 = v53 + v54;
      }
    }
    else
    {
      v35 = *(_QWORD *)(v33 + 64);
    }
    *(_QWORD *)(v33 + 48) = v35;
    v36 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *))(*(_QWORD *)v33 + 8LL))(
            v33,
            NotifyAllocationReclaimed,
            0LL,
            a4);
    v16 = v36;
    if ( v36 < 0 )
    {
      _InterlockedAdd(dword_1C006E7E0, 1u);
      WdLogSingleEntry1(6LL, v36);
      DxgkLogInternalTriageEvent(v55, 262145LL);
      return (unsigned int)v16;
    }
    if ( (_DWORD)v34 )
    {
      if ( (_DWORD)v34 == 1 )
        *((_BYTE *)a3 + 437) |= 8u;
      if ( (_DWORD)v34 == 2 )
        goto LABEL_49;
    }
    else
    {
      v37 = *(_DWORD *)(v33 + 80);
      if ( (v37 & 4) == 0 )
      {
        *((_BYTE *)a3 + 437) |= 0x40u;
        v37 = *(_DWORD *)(v33 + 80);
      }
      if ( (v37 & 0x1001) == 0 )
        *((_BYTE *)a3 + 437) |= 0x10u;
    }
    if ( (*(_DWORD *)(v33 + 80) & 0x1001) == 0 )
      *((_QWORD *)a3 + 3 * v34 + 63) += *(_QWORD *)(v33 + 48) - *(_QWORD *)(v33 + 72);
LABEL_49:
    v38 = *(_DWORD *)(v33 + 80);
    if ( (v38 & 0x1001) != 0 )
    {
      *((_BYTE *)a3 + 437) |= 0x20u;
      *((_BYTE *)a3 + 24 * v34 + 512) |= 1u;
    }
    else if ( (v38 & 0x40) == 0 )
    {
      v69 = (ADAPTER_RENDER *)((char *)v69 + *(_QWORD *)(v33 + 48));
    }
    v4 = v67;
  }
  v39 = *((_BYTE *)a3 + 437);
  if ( (v39 & 0x30) == 0x30 )
  {
    v39 |= 0x80u;
    *((_BYTE *)a3 + 437) = v39;
  }
  v40 = *((_BYTE *)a3 + 512) | 2;
  *((_BYTE *)a3 + 512) = v40;
  if ( (v39 & 8) != 0 )
  {
    v56 = (PPCW_INSTANCE *)((char *)a3 + 544);
    *((_DWORD *)a3 + 124) = dword_1C006E48C;
    VIDMM_GLOBAL::InitializeSegmentGroupState(
      (VIDMM_GLOBAL *)this,
      a2,
      (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a3 + 544),
      0LL);
    v57 = dword_1C006E490;
    *((_BYTE *)a3 + 536) |= 3u;
    *((_DWORD *)a3 + 130) = v57;
    DestinationString = 0LL;
    v58 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
    v59 = this[3];
    LODWORD(v63) = a2;
    v60 = v58;
    LODWORD(Data) = *((_DWORD *)v59 + 101);
    v16 = RtlStringCbPrintfW(v58, 0x208uLL, L"luid_0x%08X_0x%08X_phys_%u", *((unsigned int *)v59 + 102), Data, v63);
    if ( v16 < 0
      || (RtlInitUnicodeString(&DestinationString, v60),
          v70.Data = v56,
          v70.Size = 336,
          v16 = PcwCreateInstance(v56 + 41, GpuPerformanceCounterSetLocalAdapterMemory, &DestinationString, 1u, &v70),
          v16 < 0) )
    {
      WdLogSingleEntry0(1LL);
      DxgkLogInternalTriageEvent(v61, 0x40000LL);
    }
    operator delete(v60);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  else
  {
    v41 = dword_1C006E490;
    *((_BYTE *)a3 + 536) &= ~2u;
    *((_BYTE *)a3 + 512) = v40 | 1;
    *((_DWORD *)a3 + 124) = v41;
  }
  v42 = this[3];
  this[893] = (ADAPTER_RENDER *)v7;
  if ( (*((_DWORD *)v42 + 109) & 8) != 0 )
    v43 = v7 != 0;
  else
    v43 = v7 >= qword_1C006E240;
  *((_BYTE *)this + 7153) = v43;
  this[5590] = v69;
  return 0LL;
}
