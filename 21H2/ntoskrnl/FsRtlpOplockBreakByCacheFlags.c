/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x14035FB50
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404F0230 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1405CD900 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlOplockBreakH @ 0x140617A40 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x14088BA10 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     IoReleaseCancelSpinLock @ 0x140202A00 (IoReleaseCancelSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140219A60 (IoAcquireCancelSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14022BE58 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140246634 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402AAA80 (FsRtlpComputeShareableOplockState.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x140360830 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403799C4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0ACC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0C70 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        _BYTE *a13,
        __int64 a14)
{
  unsigned int v14; // r10d
  __int64 v15; // r9
  unsigned int v17; // r14d
  char v18; // si
  char v19; // bl
  int v20; // r13d
  int v23; // eax
  int v24; // eax
  int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  bool v29; // zf
  __int64 v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  PIRP v33; // r15
  struct _IRP *MasterIrp; // rcx
  char v35; // r12
  int v36; // eax
  __int64 v37; // rax
  __int64 *v38; // rbx
  char v39; // al
  _QWORD *i; // rbx
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  _QWORD *v43; // rbx
  _QWORD *v44; // rax
  _QWORD *v45; // rbx
  int v46; // edx
  int v47; // eax
  __int16 v48; // cx
  __int64 *v49; // rbx
  char v50; // al
  _QWORD *v51; // rbx
  char v52; // al
  PVOID *v53; // rbx
  char v54; // al
  _QWORD *v55; // rbx
  PIRP v56; // r15
  struct _IRP *v57; // rcx
  PIRP v58; // r15
  struct _IRP *v59; // rdx
  int v60; // eax
  PIRP v61; // r15
  PIRP v62; // rax
  void *v63; // rcx
  struct _IRP *v64; // rcx
  int v65; // eax
  _QWORD *v66; // rbx
  int v67; // [rsp+30h] [rbp-98h]
  char v68; // [rsp+61h] [rbp-67h]
  char v69; // [rsp+62h] [rbp-66h]
  bool v70; // [rsp+63h] [rbp-65h]
  __int128 v71; // [rsp+78h] [rbp-50h] BYREF
  __int64 v72; // [rsp+88h] [rbp-40h]
  IRP *v74; // [rsp+E0h] [rbp+18h]
  int v76; // [rsp+F8h] [rbp+30h]

  v74 = a3;
  v14 = a4;
  v15 = a2;
  v17 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v18 = 0;
  v19 = 0;
  v68 = 0;
  v70 = 0;
  v69 = 1;
  v20 = v14 & 8;
  if ( a6 == 28672 || a6 == 20480 || a6 == 0x4000 || a6 == 0x2000 )
  {
    if ( !a1 )
      return v17;
    v23 = *(_DWORD *)(a1 + 144);
    if ( v23 == 1 || (v23 & a6) == 0 )
      return v17;
    if ( (v14 & 8) == 0 )
    {
      if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), v14) )
        return v17;
      v15 = a2;
      v14 = a4;
    }
    v24 = *(_DWORD *)(a1 + 144);
    v25 = v14 & 0x10010000;
    v76 = v14 & 0x10010000;
    if ( (v24 & 0x40) != 0 && v25 )
      return (unsigned int)-1073739511;
    v26 = v24 & 0x1F0FFDF;
    if ( (v24 & 0x1F0FFDFu) <= 0x105040 )
    {
      if ( v26 != 1069120 )
      {
        if ( v26 <= 0x5040 )
        {
          if ( v26 != 20544 )
          {
            v27 = v26 - 4096;
            if ( v27 )
            {
              v28 = v27 - 16;
              if ( v28 )
              {
                if ( v28 == 8176 )
                  goto LABEL_64;
                v29 = (v24 & 0x1000000) == 0;
LABEL_138:
                if ( v29 )
                  goto LABEL_140;
                goto LABEL_139;
              }
            }
            goto LABEL_51;
          }
          if ( (a6 & 0x5000) == 0x5000 )
          {
            v30 = *(_QWORD *)a1;
            IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
            _InterlockedExchange64((volatile __int64 *)(v30 + 104), 0LL);
            IoReleaseCancelSpinLock(*(_BYTE *)(v30 + 69));
            if ( !*(_BYTE *)(v30 + 68) )
            {
              v31 = *(_QWORD *)(v30 + 24);
              *(_OWORD *)v31 = 0LL;
              *(_QWORD *)(v31 + 16) = 0LL;
              *(_DWORD *)v31 = 1572865;
              *(_DWORD *)(v31 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              *(_DWORD *)(v31 + 12) |= 1u;
              *(_QWORD *)(v30 + 56) = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_120:
              *(_DWORD *)(a1 + 144) = v32;
              v18 = 1;
              v17 = 0;
              goto LABEL_140;
            }
          }
          else
          {
            if ( (a6 & 0x4000) == 0 )
              goto LABEL_140;
            v33 = *(PIRP *)a1;
            IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
            _InterlockedExchange64((volatile __int64 *)&v33->CancelRoutine, 0LL);
            IoReleaseCancelSpinLock(v33->CancelIrql);
            if ( !v33->Cancel )
            {
              MasterIrp = v33->AssociatedIrp.MasterIrp;
              *(_OWORD *)&MasterIrp->Type = 0LL;
              *(_QWORD *)&MasterIrp->Flags = 0LL;
              *(_DWORD *)&MasterIrp->Type = 1572865;
              *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(MasterIrp->MdlAddress) = 1;
              HIDWORD(MasterIrp->MdlAddress) |= 1u;
              v33->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
              v18 = 1;
              v17 = 0;
              goto LABEL_140;
            }
          }
          goto LABEL_128;
        }
        switch ( v26 )
        {
          case 0x7040u:
            if ( a6 == 0x4000 )
            {
              v56 = *(PIRP *)a1;
              IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)&v56->CancelRoutine, 0LL);
              IoReleaseCancelSpinLock(v56->CancelIrql);
              if ( !v56->Cancel )
              {
                v57 = v56->AssociatedIrp.MasterIrp;
                *(_OWORD *)&v57->Type = 0LL;
                *(_QWORD *)&v57->Flags = 0LL;
                *(_DWORD *)&v57->Type = 1572865;
                *(_DWORD *)(&v57->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v57->MdlAddress) = 3;
                HIDWORD(v57->MdlAddress) |= 1u;
                v56->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
                goto LABEL_120;
              }
            }
            else if ( a6 == 0x2000 )
            {
              v58 = *(PIRP *)a1;
              IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)&v58->CancelRoutine, 0LL);
              IoReleaseCancelSpinLock(v58->CancelIrql);
              if ( !v58->Cancel )
              {
                v59 = v58->AssociatedIrp.MasterIrp;
                *(_OWORD *)&v59->Type = 0LL;
                *(_QWORD *)&v59->Flags = 0LL;
                *(_DWORD *)&v59->Type = 1572865;
                *(_DWORD *)(&v59->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v59->MdlAddress) = 5;
                v60 = HIDWORD(v59->MdlAddress) | 1;
                HIDWORD(v59->MdlAddress) = v60;
                if ( !*(_BYTE *)a2 )
                {
                  HIDWORD(v59->MdlAddress) = v60 | 2;
                  v59->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                  *((_WORD *)&v59->Flags + 2) = *(_WORD *)(a2 + 26);
                }
                v58->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
                goto LABEL_120;
              }
            }
            else
            {
              if ( (a6 & 0x5000) != 0x5000 )
                goto LABEL_140;
              v61 = *(PIRP *)a1;
              IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)&v61->CancelRoutine, 0LL);
              IoReleaseCancelSpinLock(v61->CancelIrql);
              if ( !v61->Cancel )
              {
                v64 = v61->AssociatedIrp.MasterIrp;
                *(_OWORD *)&v64->Type = 0LL;
                *(_QWORD *)&v64->Flags = 0LL;
                *(_DWORD *)&v64->Type = 1572865;
                *(_DWORD *)(&v64->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                HIDWORD(v64->MdlAddress) |= 1u;
                v61->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v32 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
                goto LABEL_120;
              }
            }
LABEL_128:
            FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
            FsRtlpClearOwner(a1, 0LL);
            *(_BYTE *)(a1 + 32) = 0;
            v62 = *(PIRP *)a1;
            if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
            {
              v62->IoStatus.Information = 0LL;
              v62 = *(PIRP *)a1;
            }
            v62->IoStatus.Status = -1073741536;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
            *(_QWORD *)(a1 + 8) = 0LL;
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
            while ( 1 )
            {
              v63 = *(void **)(a1 + 88);
              if ( v63 == (void *)(a1 + 88) )
                break;
              FsRtlpRemoveAndCompleteWaitingIrp(v63);
            }
            v70 = 0;
            v69 = 1;
            v17 = 0;
            goto LABEL_140;
          case 0xB000u:
LABEL_51:
            if ( (a6 & 0x1000) == 0 )
              goto LABEL_63;
            v41 = *(_QWORD **)(a1 + 40);
            while ( v41 != (_QWORD *)(a1 + 40) )
            {
              v42 = v41[2];
              if ( *(_DWORD *)(v42 + 24) == 590400 )
              {
                if ( v20 )
                  goto LABEL_59;
                if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v15 + 48), *(_QWORD *)(v42 + 48), v14) )
                {
                  v14 = a4;
                  v41 = (_QWORD *)*v41;
                  v15 = a2;
                }
                else
                {
                  v14 = a4;
LABEL_59:
                  if ( (v14 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  v43 = (_QWORD *)v41[1];
                  FsRtlpRemoveAndCompleteReadOnlyIrp(*v43, 0LL, 0LL);
                  v14 = a4;
                  v41 = (_QWORD *)*v43;
                  v15 = a2;
                }
              }
              else
              {
                v41 = (_QWORD *)*v41;
                v15 = a2;
              }
            }
            v25 = v76;
            v19 = 0;
LABEL_63:
            if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0xB000 )
            {
LABEL_64:
              if ( a6 == 0x2000 )
              {
                v44 = (_QWORD *)(a1 + 56);
                v45 = *(_QWORD **)(a1 + 56);
                while ( 1 )
                {
                  if ( v45 == v44 )
                    goto LABEL_105;
                  if ( !v20 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v15 + 48), v45[3], 0LL) )
                      goto LABEL_78;
                    v25 = v76;
                  }
                  if ( v25 )
                    return (unsigned int)-1073739511;
                  if ( v45[7] )
                  {
                    v18 = 1;
                    v45 = (_QWORD *)*v45;
                    v15 = a2;
                    v44 = (_QWORD *)(a1 + 56);
                  }
                  else
                  {
                    v45 = (_QWORD *)v45[1];
                    v46 = 1;
                    v47 = 0;
                    v48 = 0;
                    if ( !*(_BYTE *)a2 )
                    {
                      v46 = 3;
                      v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                      v48 = *(_WORD *)(a2 + 26);
                    }
                    if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp((PVOID)*v45, v46, v47, v48) )
                    {
                      v69 = 0;
                      v18 = 1;
                      v70 = v20 != 0;
                    }
                    else
                    {
                      v68 = 1;
                    }
LABEL_78:
                    v25 = v76;
                    v45 = (_QWORD *)*v45;
                    v15 = a2;
                    v44 = (_QWORD *)(a1 + 56);
                  }
                }
              }
              if ( (a6 & 0x5000) == 0x5000 )
              {
                v49 = *(__int64 **)(a1 + 72);
                while ( v49 != (__int64 *)(a1 + 72) )
                {
                  if ( v20 || (v50 = FsRtlpOplockKeysEqual(*(_QWORD *)(v15 + 48), v49[3], v14), v14 = a4, !v50) )
                  {
                    if ( (v14 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    *((_DWORD *)v49 + 12) &= 0xFF0FFFFF;
                    *((_DWORD *)v49 + 12) |= 0x800000u;
                    if ( (a6 & 0x2000) != 0 )
                      v18 = 1;
                  }
                  v49 = (__int64 *)*v49;
                  v15 = a2;
                }
                v51 = *(_QWORD **)(a1 + 56);
                while ( 1 )
                {
                  while ( 1 )
                  {
                    if ( v51 == (_QWORD *)(a1 + 56) )
                    {
LABEL_105:
                      v19 = v68;
                      goto LABEL_106;
                    }
                    if ( !v20 )
                      break;
LABEL_94:
                    if ( (v14 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    if ( v51[7] )
                    {
                      v52 = v18;
                      if ( (a6 & 0x2000) != 0 )
                        v52 = 1;
                      v18 = v52;
                      v51 = (_QWORD *)*v51;
                      v15 = a2;
                    }
                    else
                    {
                      v53 = (PVOID *)v51[1];
                      if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp(*v53, 1, 0, 0) )
                      {
                        v69 = 0;
                        v54 = v18;
                        if ( (a6 & 0x2000) != 0 )
                          v54 = 1;
                        v18 = v54;
                        v70 = v20 != 0;
                      }
                      else
                      {
                        v68 = 1;
                      }
                      v14 = a4;
                      v51 = *v53;
                      v15 = a2;
                    }
                  }
                  if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v15 + 48), v51[3], v14) )
                  {
                    v14 = a4;
                    goto LABEL_94;
                  }
                  v14 = a4;
                  v51 = (_QWORD *)*v51;
                  v15 = a2;
                }
              }
LABEL_106:
              if ( v19 )
                FsRtlpReleaseIrpsWaitingForRH(a1);
              if ( !v18 )
              {
                v55 = *(_QWORD **)(a1 + 72);
                if ( v55 != (_QWORD *)(a1 + 72) && (a6 & 0x2000) != 0 )
                {
                  if ( v20 )
                  {
LABEL_115:
                    v18 = 1;
                  }
                  else
                  {
                    while ( v55 != (_QWORD *)(a1 + 72) )
                    {
                      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(v55[3], *(_QWORD *)(a2 + 48), 0LL) )
                        goto LABEL_115;
                      v55 = (_QWORD *)*v55;
                    }
                  }
                }
              }
            }
            FsRtlpComputeShareableOplockState(a1);
            goto LABEL_140;
          case 0x103000u:
            v35 = 0;
            v36 = a6 & 0x1000;
            if ( (a6 & 0x1000) != 0 )
            {
              v37 = a1 + 72;
              v38 = *(__int64 **)(a1 + 72);
              while ( v38 != (__int64 *)v37 )
              {
                if ( v20 || (v39 = FsRtlpOplockKeysEqual(*(_QWORD *)(v15 + 48), v38[3], v14), v14 = a4, !v39) )
                {
                  v35 = 1;
                  if ( (v14 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  *((_DWORD *)v38 + 12) &= 0xFF0FFFFF;
                  *((_DWORD *)v38 + 12) |= 0x800000u;
                }
                v38 = (__int64 *)*v38;
                v37 = a1 + 72;
                v15 = a2;
              }
              FsRtlpComputeShareableOplockState(a1);
              v36 = a6 & 0x1000;
            }
            if ( (a6 & 0x2000) == 0 )
              goto LABEL_140;
            if ( !v35 )
            {
              if ( !v36 )
              {
                for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
                {
                  if ( v20 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), i[3], 0LL) )
                    goto LABEL_139;
                }
              }
              goto LABEL_140;
            }
            goto LABEL_139;
        }
LABEL_168:
        v29 = (v24 & 0x1000000) == 0;
        goto LABEL_138;
      }
      if ( (a6 & 0x1000) != 0 )
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_137:
      v29 = (a6 & 0x5000) == 0;
      goto LABEL_138;
    }
    if ( v26 > 0x803000 )
    {
      if ( v26 == 8409152 )
        goto LABEL_137;
      if ( v26 != 8417344 )
        goto LABEL_168;
    }
    else
    {
      switch ( v26 )
      {
        case 0x803000u:
          if ( (a6 & 0x3000) != 0 )
          {
            if ( v25 )
              return (unsigned int)-1073739511;
            if ( (a6 & 0x2000) != 0 )
            {
              v66 = *(_QWORD **)(a1 + 72);
              while ( v66 != (_QWORD *)(a1 + 72) )
              {
                if ( v20 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v15 + 48), v66[3], 0LL) )
                  goto LABEL_139;
                v66 = (_QWORD *)*v66;
                v15 = a2;
              }
            }
          }
LABEL_140:
          if ( v18 )
          {
            if ( (a4 & 1) != 0 )
            {
              v65 = *(_DWORD *)(a1 + 144);
              if ( (v65 & 0x10000) != 0 )
                *(_DWORD *)(a1 + 144) = v65 | 0x20000;
              return 264;
            }
            else
            {
              if ( v69 )
              {
                LOBYTE(a3) = 1;
                FsRtlpModifyThreadPriorities(a1, 0LL, a3);
                FsRtlpOplockSendModernAppTermination(a1, 0LL);
              }
              *a13 = 0;
              LOBYTE(v67) = v70;
              return (unsigned int)FsRtlpWaitOnIrp(a1, v74, a7, a8, a9, &v71, v67, a10, a11, a12, a14);
            }
          }
          return v17;
        case 0x107040u:
          goto LABEL_152;
        case 0x307040u:
          if ( a6 == 0x4000 )
          {
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
          }
          else if ( (a6 & 0x5000) == 0x5000 )
          {
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
          }
          goto LABEL_139;
      }
      if ( v26 != 5271616 )
        goto LABEL_168;
      if ( a6 != 0x2000 )
      {
LABEL_152:
        if ( (a6 & 0x1000) != 0 )
          *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
      }
      else
      {
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
      }
    }
LABEL_139:
    v18 = 1;
    goto LABEL_140;
  }
  if ( a3 )
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
  }
  return 3221225699LL;
}
