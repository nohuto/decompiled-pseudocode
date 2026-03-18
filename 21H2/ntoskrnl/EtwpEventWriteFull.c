/*
 * XREFs of EtwpEventWriteFull @ 0x140300E50
 * Callers:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1403CC568 (EtwWriteKMSecurityEvent.c)
 *     EtwpDiskProvTraceDisk @ 0x14062EA90 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1406305E0 (EtwWriteString.c)
 *     EtwpStackWalkApc @ 0x140631820 (EtwpStackWalkApc.c)
 *     EtwWriteErrorLogEntry @ 0x1408100A4 (EtwWriteErrorLogEntry.c)
 * Callees:
 *     EtwpFailLogging @ 0x14022A6DC (EtwpFailLogging.c)
 *     EtwpReleaseTraceBuffer @ 0x14022B0A0 (EtwpReleaseTraceBuffer.c)
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MmCanThreadFault @ 0x140297EF0 (MmCanThreadFault.c)
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1402ABBF0 (EtwpReserveTraceBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1403009E0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpLevelKeywordEnabled @ 0x1403031F0 (EtwpLevelKeywordEnabled.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1403884A4 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpSendTraceEvent @ 0x1403B3C40 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwpTraceLostEventOld @ 0x14041A410 (EtwpTraceLostEventOld.c)
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled @ 0x14041A808 (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled.c)
 *     EtwpFailLoggingOld @ 0x14041A870 (EtwpFailLoggingOld.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpGetStackLookasideListEntry @ 0x140460740 (EtwpGetStackLookasideListEntry.c)
 *     EtwpDereferenceStackEntry @ 0x14046087A (EtwpDereferenceStackEntry.c)
 *     EtwpApplyEventNameFilter @ 0x140461038 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyLevelKwFilter @ 0x14046148C (EtwpApplyLevelKwFilter.c)
 *     EtwpTraceLostEvent @ 0x14062CE84 (EtwpTraceLostEvent.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14063130C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x1406317F4 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpInvokeEventCallback @ 0x140632EEC (EtwpInvokeEventCallback.c)
 *     EtwpGetCrimsonStackKey @ 0x140633B20 (EtwpGetCrimsonStackKey.c)
 *     EtwpApplyStackWalkIdFilter @ 0x140637438 (EtwpApplyStackWalkIdFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066A21C (EtwpGetSidExtendedHeaderItem.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        void *a16,
        unsigned __int64 *a17)
{
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r9
  __int16 v24; // dx
  int v26; // ecx
  char v27; // di
  __int64 v28; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 CurrentIrql; // r11
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // rcx
  bool v35; // zf
  __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned int v38; // r13d
  char v39; // bl
  __int64 v40; // r14
  __int64 v41; // r12
  int v42; // ecx
  char v43; // al
  char v44; // r11
  _KPROCESS *Process; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int8 v51; // dl
  unsigned __int8 v52; // al
  __int64 v53; // r15
  BOOLEAN v54; // al
  __int64 v55; // rdx
  signed __int64 *v56; // rbx
  __int64 v57; // rdi
  int v58; // ebx
  int v59; // esi
  unsigned int v60; // r15d
  int v61; // eax
  int v62; // eax
  _DWORD *v63; // rcx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  _GENERAL_LOOKASIDE *L; // rsi
  int v67; // eax
  int v68; // eax
  __int64 v69; // rcx
  int v70; // ecx
  unsigned __int8 v72; // r14
  unsigned __int16 *v73; // r12
  unsigned int v74; // esi
  __int64 v75; // r9
  int v76; // r14d
  __int64 v77; // r12
  unsigned int v78; // r14d
  void *v79; // rsp
  bool v80; // si
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // r14
  _OWORD *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // r8
  unsigned __int16 v87; // si
  int v88; // edi
  char v89; // al
  int v90; // eax
  int v91; // ecx
  __int64 v92; // rdx
  unsigned int ReserveTraceBufferStatus; // ebx
  __int64 v94; // rsi
  unsigned int v95; // r14d
  BOOLEAN v96; // al
  __int64 v97; // r15
  BOOLEAN v98; // al
  _WORD *v99; // r12
  __int128 v100; // xmm0
  GUID v101; // xmm0
  _DWORD *v102; // rcx
  __int64 v103; // r13
  __int16 v104; // r14
  unsigned __int16 v105; // r14
  __int64 v106; // rsi
  unsigned __int16 *v107; // r14
  unsigned __int16 *v108; // rcx
  unsigned __int16 *v109; // rsi
  unsigned __int16 *v110; // rsi
  int SessionId; // eax
  int v112; // ecx
  __int64 v113; // r9
  unsigned __int16 *v114; // rdx
  unsigned __int16 *v115; // r8
  struct _KPRCB *v116; // rcx
  unsigned __int64 v117; // rax
  _QWORD *v118; // rsi
  int v119; // r9d
  unsigned __int16 *v120; // rdx
  unsigned __int16 *v121; // rsi
  unsigned __int16 v122; // bx
  unsigned __int16 *v123; // r14
  unsigned __int16 v124; // si
  unsigned __int16 v125; // si
  unsigned int v126; // r13d
  unsigned __int16 *v127; // r8
  int v128; // r8d
  __int64 v129; // r14
  unsigned __int16 *v130; // rbx
  __int64 v131; // rcx
  unsigned __int16 v132; // dx
  unsigned int i; // esi
  size_t v134; // rdx
  _QWORD *v135; // r9
  unsigned __int8 v136; // cl
  int v137; // ecx
  char *v138; // r14
  size_t v139; // rbx
  void *v140; // rcx
  __int64 v141; // rbx
  int IsEnabled; // eax
  __int64 v143; // rdx
  struct _SLIST_ENTRY *v144; // r8
  struct _KPRCB *v145; // rdx
  _GENERAL_LOOKASIDE *v146; // rcx
  char v147; // [rsp+40h] [rbp-610h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+610h] [rbp-40h]
  __int64 v149; // [rsp+620h] [rbp-30h]
  __int64 v150; // [rsp+628h] [rbp-28h]
  int v151; // [rsp+630h] [rbp-20h]
  char v152; // [rsp+650h] [rbp+0h]
  unsigned __int8 v153; // [rsp+658h] [rbp+8h]
  char v154; // [rsp+660h] [rbp+10h]
  unsigned __int8 v155; // [rsp+661h] [rbp+11h]
  unsigned int v156; // [rsp+664h] [rbp+14h]
  int v157; // [rsp+668h] [rbp+18h]
  unsigned int Size; // [rsp+66Ch] [rbp+1Ch]
  __int16 Size_4; // [rsp+670h] [rbp+20h]
  int v160; // [rsp+674h] [rbp+24h]
  unsigned __int16 v161; // [rsp+678h] [rbp+28h]
  char v162; // [rsp+67Ch] [rbp+2Ch]
  unsigned __int16 v163; // [rsp+680h] [rbp+30h]
  unsigned int v164; // [rsp+684h] [rbp+34h]
  __int64 v165; // [rsp+688h] [rbp+38h]
  __int64 v166; // [rsp+690h] [rbp+40h]
  int v167; // [rsp+698h] [rbp+48h]
  int v168; // [rsp+69Ch] [rbp+4Ch]
  __int64 v169; // [rsp+6A0h] [rbp+50h]
  __int64 v170; // [rsp+6A8h] [rbp+58h]
  __int16 v171; // [rsp+6B0h] [rbp+60h]
  __int64 v172; // [rsp+6B8h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+6C0h] [rbp+70h] BYREF
  unsigned __int16 *v174; // [rsp+6C8h] [rbp+78h]
  __int64 v175; // [rsp+6D0h] [rbp+80h]
  unsigned int v176; // [rsp+6D8h] [rbp+88h]
  __int64 v177; // [rsp+6E0h] [rbp+90h]
  void *Src; // [rsp+6E8h] [rbp+98h]
  unsigned int v179; // [rsp+6F0h] [rbp+A0h]
  unsigned __int16 *v180; // [rsp+6F8h] [rbp+A8h]
  _DWORD *v181; // [rsp+700h] [rbp+B0h]
  __int64 v182; // [rsp+708h] [rbp+B8h]
  _DWORD *v183; // [rsp+710h] [rbp+C0h]
  void *v184; // [rsp+718h] [rbp+C8h]
  __int128 *v185; // [rsp+720h] [rbp+D0h]
  void *v186; // [rsp+728h] [rbp+D8h]
  void *v187; // [rsp+730h] [rbp+E0h]
  __int64 v188; // [rsp+738h] [rbp+E8h]
  __int64 v189; // [rsp+740h] [rbp+F0h]
  unsigned __int16 *v190; // [rsp+748h] [rbp+F8h] BYREF
  unsigned int v191; // [rsp+750h] [rbp+100h]
  unsigned int v192; // [rsp+754h] [rbp+104h]
  unsigned __int64 v193; // [rsp+758h] [rbp+108h]
  PSLIST_ENTRY ListEntry; // [rsp+760h] [rbp+110h] BYREF
  __int64 v195; // [rsp+768h] [rbp+118h]
  struct _KTHREAD *v196; // [rsp+770h] [rbp+120h]
  unsigned __int64 HighLimit; // [rsp+778h] [rbp+128h] BYREF
  unsigned __int64 LowLimit; // [rsp+780h] [rbp+130h] BYREF
  __int64 v199; // [rsp+788h] [rbp+138h]
  unsigned __int64 *v200; // [rsp+790h] [rbp+140h]
  char *v201; // [rsp+798h] [rbp+148h]
  __int128 v202; // [rsp+7A0h] [rbp+150h] BYREF
  __int64 v203; // [rsp+7B0h] [rbp+160h]
  _OWORD *v204; // [rsp+7B8h] [rbp+168h]
  __int64 v205; // [rsp+7C0h] [rbp+170h]
  _OWORD v206[25]; // [rsp+7D0h] [rbp+180h] BYREF

  v166 = a11;
  v205 = a11;
  v192 = a10;
  v204 = a9;
  v19 = a14;
  v182 = a1;
  v153 = a2;
  v179 = a4;
  v191 = a4;
  v20 = a5;
  v172 = a5;
  v189 = a11;
  v21 = a12;
  v195 = a13;
  v186 = a16;
  v200 = a17;
  v168 = 0;
  memset(v206, 0, 0x188uLL);
  v164 = 0;
  Src = 0LL;
  v183 = 0LL;
  StackLookasideListEntry = 0LL;
  v193 = 0LL;
  v171 = a15 & 0x200;
  v199 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(512LL, a15 & 0x400, v22, v23) + 864);
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a14 )
    v19 = a1;
  v177 = v19;
  if ( v186 )
  {
    if ( v24 )
    {
      v26 = 0;
      v185 = (__int128 *)((char *)v186 + 6);
    }
    else
    {
      v26 = *(unsigned __int16 *)v186;
      v185 = 0LL;
    }
    Size_4 = v26;
    v167 = v26;
  }
  else
  {
    v167 = 0;
    Size_4 = 0;
    v185 = 0LL;
  }
  v27 = 0;
  v152 = 0;
  v28 = *(_QWORD *)(a1 + 392);
  v169 = v28;
  v188 = v28;
  if ( v200 && *v200 )
  {
    v193 = *v200;
    v27 = 4;
    v152 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v196 = CurrentThread;
  if ( !a12 )
    v21 = (__int64)CurrentThread;
  v181 = (_DWORD *)v21;
  if ( KeAreInterruptsEnabled() )
    CurrentIrql = KeGetCurrentIrql();
  else
    LOBYTE(CurrentIrql) = 15;
  v154 = CurrentIrql;
  v175 = CurrentIrql;
  v155 = CurrentIrql;
  v162 = 0;
  if ( !(_BYTE)CurrentIrql )
  {
    --v196->KernelApcDisable;
    v162 = 1;
  }
  v153 &= ~a3;
  v31 = 80LL;
  v32 = v177;
LABEL_23:
  v33 = 1LL;
LABEL_24:
  while ( 2 )
  {
    v34 = v153;
    v35 = !_BitScanForward((unsigned int *)&v36, v153);
    v164 = v36;
    if ( !v35 )
    {
      LOBYTE(v37) = 1;
      v165 = 1LL;
      v202 = 0LL;
      v203 = 0LL;
      ListEntry = 0LL;
      v190 = 0LL;
      v38 = v31;
      Size = v31;
      v157 = v31;
      v174 = 0LL;
      v180 = 0LL;
      v39 = 0;
      LOBYTE(v161) = 0;
      v163 = 0;
      v160 = 0;
      v187 = 0LL;
      v201 = 0LL;
      v153 &= v153 - 1;
      v40 = (unsigned int)v36;
      v170 = (unsigned int)v36;
      v41 = v32 + 32 * (v36 + 4);
      if ( v195
        && (v42 = *(_DWORD *)(v195 + 4LL * (*(unsigned __int16 *)(v41 + 6) >> 5)),
            v33 = 1LL,
            _bittest(&v42, *(_BYTE *)(v41 + 6) & 0x1F))
        || (v43 = EtwpLevelKeywordEnabled(v41, *(unsigned __int8 *)(v20 + 4), *(_QWORD *)(v20 + 8)), v33 = 1LL, !v43)
        || ((Process = KeGetCurrentThread()->ApcState.Process, (v179 & 2) != 0)
         || SLODWORD(Process[1].DirectoryTableBase) < 0)
        && (*(_DWORD *)(v41 + 8) & 0x200) != 0 )
      {
        v28 = v169;
        continue;
      }
      v46 = *(_QWORD *)(v32 + 384);
      if ( v46 )
      {
        v47 = *(_DWORD *)(104 * v40 + v46);
        if ( (v47 & 0x80000200) == 0x80000200 || (v47 & 0x80000100) == 0x80000100 )
        {
          if ( !EtwpApplyEventIdPayloadFilter(v32, v164, 0, v20, *(_WORD *)v20, a10, v166, 0, v44) )
            goto LABEL_64;
          v32 = v177;
          v44 = v175;
        }
      }
      if ( v171 )
      {
        v31 = *(_QWORD *)(v20 + 8);
        v49 = 0LL;
        v50 = *(_QWORD *)(v32 + 384);
        if ( v50 )
        {
          v33 = 104 * v40;
          if ( (*(_DWORD *)(104 * v40 + v50) & 0x80000400) == 0x80000400 )
            v49 = *(_QWORD *)(v33 + v50 + 96);
          if ( v49 )
          {
            v51 = *(_BYTE *)(v20 + 4);
            v52 = *(_BYTE *)(v49 + 1);
            if ( (v51 <= v52 || !v52)
              && (!v31 || (v31 & *(_QWORD *)(v49 + 8)) != 0 && (v31 & *(_QWORD *)(v49 + 16)) == *(_QWORD *)(v49 + 16))
              && !(unsigned __int8)EtwpApplyEventNameFilter(v32, v164, a10, v166, 0, v44, v51, *(_QWORD *)(v20 + 8), 0) )
            {
              goto LABEL_64;
            }
          }
        }
      }
      v53 = *(unsigned __int16 *)(v41 + 6);
      v176 = *(unsigned __int16 *)(v41 + 6);
      if ( (unsigned __int8)v175 >= 2u )
      {
        v55 = v169;
        if ( (unsigned int)v53 >= *(_DWORD *)(v169 + 16) )
        {
          LOBYTE(v37) = 1;
          v165 = 1LL;
        }
        else
        {
          _mm_lfence();
          v37 = *(_QWORD *)(*(_QWORD *)(v169 + 456) + 8 * v53);
          v165 = v37;
        }
      }
      else
      {
        v54 = ExAcquireRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v169 + 448) + 8 * v53),
                1u);
        v55 = v169;
        if ( v54 )
        {
          if ( (unsigned int)v53 >= *(_DWORD *)(v169 + 16) )
          {
            LOBYTE(v37) = 1;
            v165 = 1LL;
          }
          else
          {
            _mm_lfence();
            v37 = *(_QWORD *)(8 * v53 + *(_QWORD *)(v169 + 456));
            v165 = v37;
          }
          v39 = 1;
          LOBYTE(v161) = 1;
        }
        else
        {
          v39 = v161;
        }
      }
      if ( (v37 & 1) != 0 )
      {
        if ( v39 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v55 + 448) + 8 * v53), 1u);
        v35 = (_DWORD)v53 == 3;
        v20 = v172;
        if ( !v35 )
        {
LABEL_64:
          v28 = v169;
          v32 = v177;
          v31 = 80LL;
          goto LABEL_23;
        }
        v28 = v169;
        v34 = 3221225480LL;
        v36 = 3221226238LL;
        if ( *(_DWORD *)(v169 + 4068) )
          v34 = 3221226238LL;
        v168 = v34;
        break;
      }
      v58 = v204 != 0LL ? 0x10 : 0;
      v59 = 104;
      if ( !v204 )
        v59 = 80;
      v60 = v59;
      v156 = v59;
      if ( (*(_DWORD *)(v41 + 8) & 0xFFFFFF9F) != 0 )
      {
        if ( EtwpPagingDisabled || (v179 & 1) != 0 || !MmCanThreadFault() || BYTE6(v196[1].Queue) )
          v61 = 0;
        else
          v61 = 256;
        v58 |= v61;
        v62 = *(_DWORD *)(v41 + 8);
        v156 = v59;
        if ( (v62 & 0x800) != 0 )
        {
          if ( v199 )
          {
            v156 = v59;
            if ( v199 != EtwpHostSiloState )
            {
              v58 |= 0x200u;
              v60 = v59 + ((*(unsigned __int16 *)(v199 + 4224) + 15) & 0xFFFFFFF8);
              v156 = v60;
            }
          }
          v38 = Size;
        }
        if ( (v62 & 1) != 0 && (v58 & 0x100) != 0 )
        {
          v63 = Src;
          if ( Src )
            goto LABEL_102;
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[8].P;
          ++P->TotalAllocates;
          v63 = RtlpInterlockedPopEntrySList(&P->ListHead);
          Src = v63;
          if ( !v63 )
          {
            ++P->AllocateMisses;
            L = CurrentPrcb->PPLookasideList[8].L;
            ++L->TotalAllocates;
            v63 = RtlpInterlockedPopEntrySList(&L->ListHead);
            Src = v63;
            if ( !v63 )
            {
              ++L->AllocateMisses;
              v63 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                (unsigned int)L->Type,
                                L->Size,
                                L->Tag);
              Src = v63;
            }
          }
          if ( v63 )
            *v63 = CurrentPrcb->Number;
          v183 = v63;
          if ( v63 )
          {
            EtwpGetSidExtendedHeaderItem();
            v63 = Src;
          }
          v40 = v170;
          if ( v63 )
          {
LABEL_102:
            v58 |= 2u;
            v60 += *(unsigned __int16 *)v63;
            v156 = v60;
          }
        }
        v67 = *(_DWORD *)(v41 + 8);
        if ( (v67 & 2) != 0 )
        {
          v58 |= 1u;
          v60 += 16;
          v156 = v60;
        }
        if ( (v67 & 0x80u) != 0 && (ObGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->NestingLevel) )
        {
          v58 |= 0x40u;
          v60 += 16;
          v156 = v60;
        }
        v68 = *(_DWORD *)(v41 + 8);
        if ( (v68 & 0x100) != 0 )
        {
          v58 |= 0x80u;
          v60 += 16;
          v156 = v60;
        }
        if ( (v68 & 4) == 0 || EtwpPagingDisabled )
          goto LABEL_148;
        v69 = *(_QWORD *)(v177 + 384);
        if ( !v69 )
          goto LABEL_123;
        v70 = *(_DWORD *)(104 * v40 + v69);
        if ( (v70 & 0x80001000) != 0x80001000 && (v70 & 0x80002000) != 0x80002000 && (v70 & 0x80004000) != 0x80004000 )
          goto LABEL_123;
        v72 = v155;
        LOBYTE(BugCheckParameter4) = v155 < 2u;
        v73 = (unsigned __int16 *)v172;
        v74 = v164;
        if ( !(unsigned __int8)EtwpApplyLevelKwFilter(
                                 v177,
                                 v164,
                                 *(unsigned __int8 *)(v172 + 4),
                                 *(_QWORD *)(v172 + 8),
                                 v155 < 2u)
          || (LOBYTE(v75) = v72 < 2u, v76 = v177, !(unsigned __int8)EtwpApplyStackWalkIdFilter(*v73, v177, v74, v75)) )
        {
LABEL_148:
          v83 = v165;
LABEL_149:
          v77 = v166;
          goto LABEL_150;
        }
        LOBYTE(v151) = 1;
        v150 = *((_QWORD *)v73 + 1);
        LOBYTE(v149) = *((_BYTE *)v73 + 4);
        v77 = v166;
        if ( (unsigned __int8)EtwpApplyEventNameFilter(v76, v74, a10, v166, 0, v175, v149, v150, 1) )
        {
LABEL_123:
          if ( (v27 & 1) == 0 )
          {
            v78 = 256;
            StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
            if ( StackLookasideListEntry )
            {
              v27 |= 2u;
            }
            else
            {
              HighLimit = 0LL;
              LowLimit = 0LL;
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
              {
                v79 = alloca(1552LL);
                StackLookasideListEntry = &v147;
                v78 = 192;
              }
            }
            if ( StackLookasideListEntry )
            {
              v80 = (*(_DWORD *)(v165 + 816) & 0x40000000) == 0;
              if ( *(_QWORD *)(v182 + 40) == *(_QWORD *)&EventTracingProvGuid.Data1
                && *(_QWORD *)(v182 + 48) == *(_QWORD *)EventTracingProvGuid.Data4
                && *(_WORD *)v172 == 18 )
              {
                v58 |= 0x20u;
                v80 = 0;
              }
              v81 = ((__int64 (*)(void))Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled)();
              LOBYTE(BugCheckParameter4) = v80;
              if ( v81 )
                v82 = v179;
              else
                v82 = 0LL;
              if ( !(unsigned __int8)EtwpGetStackExtendedHeaderItem(
                                       v181,
                                       v82,
                                       v78,
                                       &StackLookasideListEntry,
                                       BugCheckParameter4) )
              {
                if ( (v27 & 2) != 0 )
                {
                  EtwpReleaseStackLookasideListEntry(StackLookasideListEntry);
                  v27 &= ~2u;
                }
                StackLookasideListEntry = 0LL;
              }
            }
            v27 |= 1u;
            v152 = v27;
          }
          v83 = v165;
          if ( StackLookasideListEntry )
          {
            if ( (*(_DWORD *)(v165 + 820) & 1) != 0
              && (unsigned __int8)EtwpGetCrimsonStackKey(v165, StackLookasideListEntry, &ListEntry) )
            {
              v58 |= 8u;
              v60 += 24;
              v156 = v60;
            }
            else
            {
              v58 |= 4u;
              v60 += *(unsigned __int16 *)StackLookasideListEntry;
              v156 = v60;
            }
          }
          goto LABEL_149;
        }
      }
      else
      {
        v77 = v166;
      }
      v83 = v165;
LABEL_150:
      v84 = &v206[3 * LODWORD(v206[24])];
      v170 = (__int64)v84;
      if ( a10 )
      {
        v85 = v77 + 8;
        v86 = a10;
        v87 = v163;
        v88 = v160;
        do
        {
          if ( v171 )
            v89 = *(_BYTE *)(v85 + 4);
          else
            v89 = 0;
          if ( v89 )
          {
            if ( v89 == 1 )
            {
              v87 += *(_WORD *)v85;
              v163 = v87;
              v160 = ++v88;
            }
          }
          else
          {
            v60 += *(_DWORD *)v85;
            v156 = v60;
          }
          v85 += 16LL;
          --v86;
        }
        while ( v86 );
        v27 = v152;
        v84 = (_OWORD *)v170;
      }
      if ( v160 )
      {
        v60 += (v163 + 15) & 0xFFFFFFF8;
        v156 = v60;
      }
      if ( (_WORD)v167 )
      {
        v60 += ((unsigned __int16)v167 + 15) & 0xFFFFFFF8;
        v156 = v60;
      }
      *((_DWORD *)v84 + 10) = v60;
      v90 = ((__int64 (*)(void))Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled)();
      v91 = 0;
      if ( v90 )
        v91 = v191;
      v92 = EtwpReserveTraceBuffer(v83, v60, (__int64)&v202, (__int64 *)&v190, v91);
      v170 = v92;
      if ( ListEntry )
      {
        EtwpDereferenceStackEntry(ListEntry);
        v92 = v170;
      }
      if ( !v92 )
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v83, v60);
        v94 = v205;
        if ( !v160 )
          v94 = 0LL;
        v95 = v192;
        if ( !v160 )
          v95 = 0;
        if ( (unsigned int)((__int64 (*)(void))Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled)() )
        {
          v96 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
          v97 = v165;
          if ( v96 )
            EtwpTraceLostEvent(v182 + 40, v172, v165 + 136, v179, ReserveTraceBufferStatus, v95, v94, v155 < 2u, 0);
        }
        else
        {
          v98 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
          v97 = v165;
          if ( v98 )
            EtwpTraceLostEventOld(v182 + 40, v172, v165 + 136, ReserveTraceBufferStatus, v95, v94, v155 < 2u, 0);
        }
        v34 = (unsigned int)v168;
        if ( v168 >= 0 )
        {
          if ( (*(_DWORD *)(v97 + 12) & 0x8000000) == 0 )
            v34 = ReserveTraceBufferStatus;
          v168 = v34;
        }
        v28 = v169;
        if ( (_BYTE)v161 )
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v169 + 448) + 8LL * v176),
            1u);
        v20 = v172;
        v32 = v177;
        v31 = 80LL;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v168 = -1073741675;
          break;
        }
        goto LABEL_23;
      }
      *(_QWORD *)v84 = v83;
      *((_QWORD *)v84 + 1) = v92;
      v84[1] = v202;
      *((_QWORD *)v84 + 4) = v203;
      ++LODWORD(v206[24]);
      *(_DWORD *)v92 = v60 | 0xC0130000;
      v99 = (_WORD *)(v92 + 4);
      v184 = (void *)(v92 + 4);
      *(_WORD *)(v92 + 4) = a6;
      *(_WORD *)(v92 + 6) = a7;
      *(_OWORD *)(v92 + 40) = *(_OWORD *)v172;
      if ( v185 )
      {
        v100 = *v185;
        *v99 = a6 | 0x80;
      }
      else
      {
        v100 = *(_OWORD *)(v182 + 40);
      }
      *(_OWORD *)(v92 + 24) = v100;
      if ( a8 )
        v101 = *a8;
      else
        v101 = NullGuid;
      *(GUID *)(v92 + 64) = v101;
      *(_QWORD *)(v92 + 16) = v190;
      v102 = v181;
      *(_DWORD *)(v92 + 8) = v181[308];
      *(_DWORD *)(v92 + 12) = v102[306];
      *(_DWORD *)(v92 + 56) = v102[163];
      *(_DWORD *)(v92 + 60) = v102[183];
      if ( v58 )
      {
        if ( (v58 & 0x200) != 0 )
        {
          v174 = (unsigned __int16 *)(v92 + 80);
          v103 = v199;
          v104 = (*(_WORD *)(v199 + 4224) + 15) & 0xFFF8;
          *(_WORD *)(v92 + 80) = v104;
          *(_WORD *)(v92 + 82) = 16;
          *(_WORD *)(v92 + 86) = *(_WORD *)(v103 + 4224);
          *(_WORD *)(v92 + 84) = 0;
          v105 = v104 - *(_WORD *)(v103 + 4224) - 8;
          v106 = v92 + 88;
          memmove((void *)(v92 + 88), *(const void **)(v103 + 4216), *(unsigned __int16 *)(v103 + 4224));
          memset((void *)(v106 + *(unsigned __int16 *)(v103 + 4224)), 0, v105);
          *v99 |= 1u;
          v107 = v174;
          v38 = *v174 + 80;
          Size = v38;
          v157 = v38;
          v180 = v174;
          v92 = v170;
        }
        else
        {
          v107 = v174;
        }
        if ( (v58 & 0x10) != 0 )
        {
          v108 = (unsigned __int16 *)(v92 + v38);
          *(_DWORD *)v108 = 65560;
          *((_DWORD *)v108 + 1) = 0x100000;
          *(_OWORD *)(v108 + 4) = *a9;
          *v99 |= 1u;
          v38 += 24;
          Size = v38;
          v157 = v38;
          if ( v107 )
            v107[2] |= 1u;
          v107 = v108;
          v174 = v108;
          v180 = v108;
        }
        if ( (v58 & 2) != 0 )
        {
          v109 = (unsigned __int16 *)(v92 + v38);
          memmove(v109, Src, *(unsigned __int16 *)Src);
          *v99 |= 1u;
          v38 += *(unsigned __int16 *)Src;
          Size = v38;
          v157 = v38;
          if ( v107 )
            v107[2] |= 1u;
          v107 = v109;
          v174 = v109;
          v180 = v109;
        }
        if ( (v58 & 1) != 0 )
        {
          v110 = (unsigned __int16 *)(v170 + v38);
          *(_DWORD *)v110 = 196624;
          *((_DWORD *)v110 + 1) = 0x40000;
          SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          v112 = 0;
          if ( SessionId != -1 )
            v112 = SessionId;
          *((_DWORD *)v110 + 2) = v112;
          *v99 |= 1u;
          v38 += 16;
          Size = v38;
          v157 = v38;
          if ( v107 )
            v107[2] |= 1u;
          v107 = v110;
          v174 = v110;
          v180 = v110;
        }
        v113 = v170;
        if ( (v58 & 0x40) != 0 )
        {
          v114 = (unsigned __int16 *)(v170 + v38);
          *(_DWORD *)v114 = 851984;
          *((_DWORD *)v114 + 1) = 0x80000;
          *((_QWORD *)v114 + 1) = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[6] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
          *v99 |= 1u;
          v38 += 16;
          Size = v38;
          v157 = v38;
          if ( v107 )
            v107[2] |= 1u;
          v107 = v114;
          v174 = v114;
          v180 = v114;
        }
        if ( (v58 & 0x80u) != 0 )
        {
          v115 = (unsigned __int16 *)(v113 + v38);
          *(_DWORD *)v115 = 655376;
          *((_DWORD *)v115 + 1) = 0x80000;
          if ( (v27 & 4) == 0 )
          {
            v116 = KeGetCurrentPrcb();
            v117 = _InterlockedIncrement64((volatile signed __int64 *)v116->EtwSupport + 1) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)v116->Number << 48);
            v193 = v117;
            v27 |= 4u;
            v152 = v27;
            if ( v200 )
              *v200 = v117;
          }
          *((_QWORD *)v115 + 1) = v193;
          *v99 |= 1u;
          v38 += 16;
          Size = v38;
          v157 = v38;
          if ( v107 )
            v107[2] |= 1u;
          v107 = v115;
          v174 = v115;
          v180 = v115;
        }
        if ( (v58 & 4) != 0 )
        {
          v118 = (_QWORD *)(v113 + v38);
          memmove(v118, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          if ( v118[1] )
          {
            if ( (v58 & 0x20) == 0 )
            {
              LOBYTE(v119) = 1;
              if ( !(unsigned __int8)EtwpQueueStackWalkApc(
                                       (_DWORD)v181,
                                       (unsigned __int8)v175,
                                       v165,
                                       v119,
                                       (__int64)(v118 + 1)) )
                v118[1] = 0LL;
            }
          }
          *v99 |= 1u;
          v38 += *(unsigned __int16 *)StackLookasideListEntry;
          Size = v38;
          v157 = v38;
          if ( v174 )
            v174[2] |= 1u;
          v107 = (unsigned __int16 *)v118;
          v174 = (unsigned __int16 *)v118;
          v180 = (unsigned __int16 *)v118;
        }
        if ( (v58 & 8) != 0 )
        {
          v120 = (unsigned __int16 *)(v170 + v38);
          *(_DWORD *)v120 = 1179672;
          *((_DWORD *)v120 + 1) = 0x100000;
          *((_QWORD *)v120 + 2) = ListEntry;
          *((_QWORD *)v120 + 1) = *((_QWORD *)StackLookasideListEntry + 1);
          *v99 |= 1u;
          v38 += 24;
          Size = v38;
          v157 = v38;
          if ( v107 )
            v107[2] |= 1u;
          v121 = v120;
          v174 = v120;
          v180 = v120;
        }
        else
        {
          v121 = v174;
        }
        v92 = v170;
      }
      else
      {
        v121 = v174;
      }
      v122 = v167;
      if ( (_WORD)v167 )
      {
        v123 = (unsigned __int16 *)(v92 + v38);
        v190 = v123;
        v124 = (v167 + 15) & 0xFFF8;
        *v123 = v124;
        *(_DWORD *)(v123 + 1) = 12;
        v123[3] = v122;
        v125 = v124 - v122 - 8;
        v161 = v125;
        memmove(v123 + 4, v186, v122);
        memset((char *)v123 + v122 + 8, 0, v125);
        v126 = Size;
        v127 = v174;
        *v99 |= 1u;
        v38 = *v123 + v126;
        v157 = v38;
        if ( v127 )
          v127[2] |= 1u;
        v121 = v123;
      }
      v128 = v160;
      v129 = v170;
      if ( v160 )
      {
        v130 = (unsigned __int16 *)(v170 + v38);
        v131 = v163;
        v132 = (v163 + 15) & 0xFFF8;
        *v130 = v132;
        *(_DWORD *)(v130 + 1) = 11;
        v130[3] = v131;
        v187 = v130 + 4;
        v201 = (char *)v130 + v131 + 8;
        memset(v201, 0, (unsigned __int16)(v132 - v131 - 8));
        *v99 |= 1u;
        v38 += *v130;
        v157 = v38;
        v128 = v160;
        if ( v121 )
          v121[2] |= 1u;
      }
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          v164 = i;
          if ( i >= a10 )
          {
            v141 = v165;
            if ( (*(_DWORD *)(v165 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v165, &v202);
            }
            if ( *(_QWORD *)(v141 + 1288) )
              EtwpInvokeEventCallback(v141, &v202, v182 + 40, 0LL);
            v20 = v172;
            v28 = v169;
            v32 = v177;
            v33 = 1LL;
            v31 = 80LL;
            if ( v195 )
              *(_DWORD *)(v195 + 4LL * (v176 >> 5)) |= 1 << (v176 & 0x1F);
            goto LABEL_24;
          }
          v134 = *(unsigned int *)(v166 + 16LL * i + 8);
          Size = *(_DWORD *)(v166 + 16LL * i + 8);
          v135 = *(_QWORD **)(v166 + 16LL * i);
          v136 = v171 ? *(_BYTE *)(v166 + 16LL * i + 12) : 0;
          if ( v136 )
            break;
          v140 = (void *)(v129 + v38);
          v184 = v140;
          v38 += v134;
          v157 = v38;
          if ( v38 > v60 )
            KeBugCheckEx(0x11Du, 5uLL, v38, v60, 0LL);
          memmove(v140, v135, v134);
          v128 = v160;
LABEL_260:
          ++i;
          v129 = v170;
        }
        v137 = v136 - 1;
        if ( v137 )
        {
          if ( v137 == 2 && (_DWORD)v134 == 8 )
            *(_QWORD *)(v129 + 16) = *v135;
          goto LABEL_260;
        }
        v138 = (char *)v187;
        if ( !v187 || (v139 = v134, v184 = (void *)v134, (char *)v187 + v134 > v201) || !v128 )
          KeBugCheckEx(0x11Du, 5uLL, v38, v60, 0LL);
        memmove(v187, v135, v134);
        v187 = &v138[v139];
        v128 = --v160;
        v129 = v170;
      }
    }
    break;
  }
  if ( (v27 & 2) != 0 )
    EtwpReleaseStackLookasideListEntry(StackLookasideListEntry);
  if ( v168 < 0 )
  {
    IsEnabled = Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabled(v34, v36, v33, v31);
    v143 = *(_QWORD *)(v20 + 8);
    if ( IsEnabled )
      EtwpFailLogging(*(_BYTE *)(v20 + 4), v143, v182, (__int64)v206, v153, v179, v168, v20, v155 < 2u, a10, v166, 0);
    else
      EtwpFailLoggingOld(
        *(unsigned __int8 *)(v20 + 4),
        v143,
        v182,
        (unsigned int)v206,
        v153,
        v168,
        v20,
        v155 < 2u,
        a10,
        v166,
        0);
  }
  else if ( LODWORD(v206[24]) )
  {
    v56 = (signed __int64 *)v206;
    v57 = LODWORD(v206[24]);
    do
    {
      EtwpReleaseTraceBuffer(v56 + 2);
      if ( (unsigned __int8)v175 < 2u )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v28 + 448) + 8LL * *(unsigned int *)*v56),
          1u);
      v56 += 6;
      --v57;
    }
    while ( v57 );
  }
  if ( v162 )
    KeLeaveCriticalRegionThread((__int64)v196);
  v144 = (struct _SLIST_ENTRY *)Src;
  if ( Src )
  {
    v145 = KeGetCurrentPrcb();
    v146 = v145->PPLookasideList[8].P;
    ++v146->TotalFrees;
    if ( LOWORD(v146->ListHead.Alignment) < v146->Depth
      || (++v146->FreeMisses,
          v146 = v145->PPLookasideList[8].L,
          ++v146->TotalFrees,
          LOWORD(v146->ListHead.Alignment) < v146->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v146->ListHead, v144);
    }
    else
    {
      ++v146->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))v146->FreeEx)(v144);
    }
  }
  return (unsigned int)v168;
}
