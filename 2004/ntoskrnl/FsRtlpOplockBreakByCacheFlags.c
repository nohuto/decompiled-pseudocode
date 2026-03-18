/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1402922F0
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140291210 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1404EAE80 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x1406E3E40 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x1408887C0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     FsRtlpOplockKeysEqual @ 0x1402930C0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402976F0 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403323CC (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140332428 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140332A24 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x140377CE4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140378620 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404EB71C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB81C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB8C0 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 *a1,
        __int64 a2,
        IRP *a3,
        __int64 a4,
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
  unsigned int v14; // r15d
  unsigned int v17; // edi
  char v18; // r12
  int v19; // r14d
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  __int64 *v23; // rax
  __int64 *v24; // rcx
  void **v25; // rcx
  void **v26; // rax
  __int64 *v27; // rax
  __int64 *v28; // rcx
  int v29; // eax
  void *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  char v33; // al
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  PIRP v36; // rbx
  PIRP v37; // rax
  struct _IRP *v38; // rcx
  int v39; // eax
  PIRP v40; // rbx
  struct _IRP *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rcx
  struct _IRP *MasterIrp; // rcx
  PIRP v45; // rbx
  struct _IRP *v46; // rdx
  int v47; // eax
  PIRP v48; // rbx
  __int64 *v49; // rcx
  char v50; // dl
  int v51; // eax
  __int64 *v52; // rax
  __int64 *v53; // rcx
  char v54; // al
  _QWORD *v55; // rax
  _QWORD *v56; // rbx
  _QWORD *v57; // rcx
  _QWORD *i; // rax
  __int64 v59; // rdx
  int v60; // eax
  PVOID *v61; // rcx
  PVOID *v62; // rax
  int v63; // edx
  int v64; // eax
  __int16 v65; // cx
  int v67; // [rsp+30h] [rbp-B8h]
  char v68; // [rsp+60h] [rbp-88h]
  char v69; // [rsp+61h] [rbp-87h]
  bool v70; // [rsp+62h] [rbp-86h]
  char v71; // [rsp+63h] [rbp-85h]
  __int64 *v72; // [rsp+68h] [rbp-80h]
  void **v73; // [rsp+68h] [rbp-80h]
  __int64 *v74; // [rsp+68h] [rbp-80h]
  _QWORD *v75; // [rsp+68h] [rbp-80h]
  PVOID *v76; // [rsp+68h] [rbp-80h]
  char v77; // [rsp+70h] [rbp-78h]
  void **v78; // [rsp+78h] [rbp-70h]
  _QWORD *v79; // [rsp+78h] [rbp-70h]
  PVOID *v80; // [rsp+78h] [rbp-70h]
  __int64 *v81; // [rsp+80h] [rbp-68h]
  void *v82; // [rsp+90h] [rbp-58h]
  PVOID v83; // [rsp+90h] [rbp-58h]
  __int128 v84; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-38h]
  IRP *v86; // [rsp+100h] [rbp+18h]

  v86 = a3;
  v14 = a4;
  v17 = 0;
  v84 = 0LL;
  v85 = 0LL;
  v18 = 0;
  v68 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 1;
  v19 = a4 & 8;
  if ( a6 == 0x4000 || a6 == 20480 || a6 == 0x2000 || a6 == 28672 )
  {
    if ( !a1 )
      return v17;
    v20 = *((_DWORD *)a1 + 36);
    if ( v20 == 1 || (v20 & a6) == 0 )
      return 0;
    if ( (a4 & 8) == 0 && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), a1[1], (unsigned int)a4, a4) )
      return 0;
    v21 = *((_DWORD *)a1 + 36);
    if ( (v21 & 0x40) != 0 && (v14 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    v22 = v21 & 0x1F0FFDF;
    if ( (v21 & 0x1F0FFDF) == 0x3000 )
    {
LABEL_10:
      if ( a6 != 0x2000 )
      {
        if ( (a6 & 0x5000) == 0x5000 )
        {
          v23 = a1 + 9;
          v24 = (__int64 *)a1[9];
          while ( 1 )
          {
            v72 = v24;
            if ( v24 == v23 )
              break;
            if ( v19 || (v33 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v24[3], v14, a4), v24 = v72, !v33) )
            {
              if ( (v14 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              *((_DWORD *)v24 + 12) &= 0xFF0FFFFF;
              *((_DWORD *)v24 + 12) |= 0x800000u;
              if ( (a6 & 0x2000) != 0 )
              {
                v18 = 1;
                v68 = 1;
              }
            }
            v24 = (__int64 *)*v24;
            v23 = a1 + 9;
          }
          v25 = (void **)(a1 + 7);
          v26 = (void **)a1[7];
          while ( 1 )
          {
            v73 = v26;
            if ( v26 == v25 )
              break;
            v82 = v26[2];
            if ( !v19 )
            {
              if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v26[3], v14, a4) )
                goto LABEL_18;
              v26 = v73;
            }
            if ( (v14 & 0x10010000) != 0 )
              return (unsigned int)-1073739511;
            if ( !v26[7] )
            {
              v78 = (void **)v26[1];
              *((_BYTE *)v82 + 69) = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)v82 + 13, 0LL);
              KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v82 + 69));
              v73 = v78;
              v30 = *v78;
              if ( *((_BYTE *)v82 + 68) )
              {
                FsRtlpRemoveAndBreakRHIrp(v30, 0, 0, 0, 0);
                v71 = 1;
                v18 = v68;
              }
              else
              {
                FsRtlpRemoveAndBreakRHIrp(v30, 0, 1, 0, 0);
                v69 = 0;
                if ( (a6 & 0x2000) != 0 )
                {
                  v18 = 1;
                  v68 = 1;
                }
                else
                {
                  v18 = v68;
                }
                v70 = v19 != 0;
              }
              v17 = 0;
LABEL_18:
              v26 = v73;
              goto LABEL_19;
            }
            if ( (a6 & 0x2000) != 0 )
              v18 = 1;
            v68 = v18;
LABEL_19:
            v26 = (void **)*v26;
            v25 = (void **)(a1 + 7);
          }
        }
LABEL_20:
        if ( v71 )
          FsRtlpReleaseIrpsWaitingForRH(a1);
        if ( !v18 )
        {
          v27 = a1 + 9;
          v28 = (__int64 *)a1[9];
          v81 = v28;
          if ( v28 != a1 + 9 && (a6 & 0x2000) != 0 )
          {
            if ( v19 )
            {
LABEL_175:
              v18 = 1;
            }
            else
            {
              while ( v28 != v27 )
              {
                if ( !(unsigned __int8)FsRtlpOplockKeysEqual(v28[3], *(_QWORD *)(a2 + 48), 0LL, a4) )
                  goto LABEL_175;
                v28 = (__int64 *)*v81;
                v81 = (__int64 *)*v81;
                v27 = a1 + 9;
              }
            }
          }
        }
        goto LABEL_24;
      }
      v61 = (PVOID *)(a1 + 7);
      v62 = (PVOID *)a1[7];
      while ( 1 )
      {
        v76 = v62;
        if ( v62 == v61 )
          goto LABEL_20;
        v83 = v62[2];
        if ( !v19 )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v62[3], 0LL, a4) )
            goto LABEL_168;
          v62 = v76;
        }
        if ( (v14 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        if ( v62[7] )
        {
          v18 = 1;
          v68 = 1;
          goto LABEL_169;
        }
        v80 = (PVOID *)v62[1];
        *((_BYTE *)v83 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)v83 + 13, 0LL);
        KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v83 + 69));
        if ( *((_BYTE *)v83 + 68) )
        {
          v76 = v80;
          FsRtlpRemoveAndBreakRHIrp(*v80, 0, 0, 0, 0);
          v71 = 1;
          v18 = v68;
        }
        else
        {
          v63 = 1;
          v64 = 0;
          v65 = 0;
          if ( !*(_BYTE *)a2 )
          {
            v63 = 3;
            v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
            v65 = *(_WORD *)(a2 + 26);
          }
          v76 = v80;
          FsRtlpRemoveAndBreakRHIrp(*v80, 4096, v63, v64, v65);
          v69 = 0;
          v18 = 1;
          v68 = 1;
          v70 = v19 != 0;
        }
        v17 = 0;
LABEL_168:
        v62 = v76;
LABEL_169:
        v62 = (PVOID *)*v62;
        v61 = (PVOID *)(a1 + 7);
      }
    }
    if ( v22 > 0x105040 )
    {
      if ( v22 <= 0x803000 )
      {
        switch ( v22 )
        {
          case 0x803000u:
            if ( (a6 & 0x3000) != 0 )
            {
              if ( (v14 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              if ( (a6 & 0x2000) != 0 )
              {
                v31 = a1 + 9;
                v32 = (_QWORD *)a1[9];
                while ( v32 != v31 )
                {
                  if ( v19 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v32[3], 0LL, a4) )
                    goto LABEL_119;
                  v32 = (_QWORD *)*v32;
                  v31 = a1 + 9;
                }
              }
            }
LABEL_25:
            if ( v18 )
            {
              if ( (v14 & 1) != 0 )
              {
                v29 = *((_DWORD *)a1 + 36);
                if ( (v29 & 0x10000) != 0 )
                  *((_DWORD *)a1 + 36) = v29 | 0x20000;
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
                return (unsigned int)FsRtlpWaitOnIrp(a1, v86, a7, a8, a9, &v84, v67, a10, a11, a12, a14);
              }
            }
            return v17;
          case 0x107040u:
LABEL_142:
            if ( (a6 & 0x1000) == 0 )
              goto LABEL_149;
            goto LABEL_147;
          case 0x307040u:
            if ( a6 == 0x4000 )
            {
              v60 = a1[18] & 0x20 | 0x107040;
              goto LABEL_148;
            }
            if ( (a6 & 0x5000) != 0x5000 )
            {
LABEL_149:
              v18 = 1;
              goto LABEL_25;
            }
LABEL_147:
            v60 = a1[18] & 0x20 | 0x807040;
            goto LABEL_148;
          case 0x507040u:
            if ( a6 == 0x2000 )
            {
              v60 = a1[18] & 0x20 | 0x107040;
LABEL_148:
              *((_DWORD *)a1 + 36) = v60;
              goto LABEL_149;
            }
            goto LABEL_142;
        }
LABEL_152:
        if ( (v21 & 0x1000000) != 0 )
          v18 = 1;
        goto LABEL_25;
      }
      if ( v22 != 8409152 )
      {
        if ( v22 != 8417344 )
          goto LABEL_152;
LABEL_119:
        v18 = 1;
        goto LABEL_25;
      }
LABEL_135:
      if ( (a6 & 0x5000) != 0 )
        v18 = 1;
      goto LABEL_25;
    }
    if ( v22 == 1069120 )
    {
      if ( (a6 & 0x1000) != 0 )
        *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 0x805040;
      goto LABEL_135;
    }
    if ( v22 > 0x7040 )
    {
      if ( v22 != 45056 )
      {
        if ( v22 != 1060864 )
          goto LABEL_152;
        v50 = 0;
        v77 = 0;
        v51 = a6 & 0x1000;
        if ( (a6 & 0x1000) != 0 )
        {
          v52 = a1 + 9;
          v53 = (__int64 *)a1[9];
          while ( 1 )
          {
            v74 = v53;
            if ( v53 == v52 )
              break;
            if ( v19 || (v54 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v53[3], v14, a4), v53 = v74, !v54) )
            {
              v77 = 1;
              if ( (v14 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              *((_DWORD *)v53 + 12) &= 0xFF0FFFFF;
              *((_DWORD *)v53 + 12) |= 0x800000u;
            }
            v53 = (__int64 *)*v53;
            v52 = a1 + 9;
          }
          FsRtlpComputeShareableOplockState(a1);
          v50 = v77;
          v51 = a6 & 0x1000;
        }
        if ( (a6 & 0x2000) == 0 )
          goto LABEL_25;
        if ( !v50 )
        {
          if ( !v51 )
          {
            v55 = a1 + 9;
            v56 = (_QWORD *)a1[9];
            while ( v56 != v55 )
            {
              if ( v19 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v56[3], 0LL, a4) )
                goto LABEL_119;
              v56 = (_QWORD *)*v56;
              v55 = a1 + 9;
            }
          }
          goto LABEL_25;
        }
        goto LABEL_119;
      }
    }
    else
    {
      if ( v22 == 28736 )
      {
        if ( a6 == 0x4000 )
        {
          v42 = *a1;
          *(_BYTE *)(v42 + 69) = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)(v42 + 104), 0LL);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v42 + 69));
          if ( !*(_BYTE *)(v42 + 68) )
          {
            v43 = *(_QWORD *)(v42 + 24);
            *(_OWORD *)v43 = 0LL;
            *(_QWORD *)(v43 + 16) = 0LL;
            *(_DWORD *)v43 = 1572865;
            *(_DWORD *)(v43 + 4) = (*((_DWORD *)a1 + 36) >> 12) & 7;
            *(_DWORD *)(v43 + 8) = 3;
            *(_DWORD *)(v43 + 12) |= 1u;
            *(_QWORD *)(v42 + 56) = 24LL;
            *(_DWORD *)(*a1 + 48) = 0;
            IofCompleteRequest((PIRP)*a1, 1);
            *a1 = 0LL;
            v39 = a1[18] & 0x20 | 0x507040;
            goto LABEL_85;
          }
          FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
          FsRtlpClearOwner(a1, 0LL);
          *((_BYTE *)a1 + 32) = 0;
          v37 = (PIRP)*a1;
          if ( *(__int64 **)(*a1 + 56) == a1 )
            goto LABEL_95;
        }
        else
        {
          if ( a6 != 0x2000 )
          {
            v48 = (PIRP)*a1;
            v48->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v48->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v48->CancelIrql);
            if ( v48->Cancel )
            {
              FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
              FsRtlpClearOwner(a1, 0LL);
              *((_BYTE *)a1 + 32) = 0;
              v37 = (PIRP)*a1;
              if ( *(__int64 **)(*a1 + 56) != a1 )
                goto LABEL_96;
              goto LABEL_95;
            }
            MasterIrp = v48->AssociatedIrp.MasterIrp;
            *(_OWORD *)&MasterIrp->Type = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            *(_DWORD *)(&MasterIrp->Size + 1) = (*((_DWORD *)a1 + 36) >> 12) & 7;
            HIDWORD(MasterIrp->MdlAddress) |= 1u;
            v48->IoStatus.Information = 24LL;
            *(_DWORD *)(*a1 + 48) = 0;
            IofCompleteRequest((PIRP)*a1, 1);
            *a1 = 0LL;
            v39 = a1[18] & 0x20 | 0x807040;
            goto LABEL_85;
          }
          v45 = (PIRP)*a1;
          v45->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)&v45->CancelRoutine, 0LL);
          KeReleaseQueuedSpinLock(7uLL, v45->CancelIrql);
          if ( !v45->Cancel )
          {
            v46 = v45->AssociatedIrp.MasterIrp;
            *(_OWORD *)&v46->Type = 0LL;
            *(_QWORD *)&v46->Flags = 0LL;
            *(_DWORD *)&v46->Type = 1572865;
            *(_DWORD *)(&v46->Size + 1) = (*((_DWORD *)a1 + 36) >> 12) & 7;
            LODWORD(v46->MdlAddress) = 5;
            v47 = HIDWORD(v46->MdlAddress) | 1;
            HIDWORD(v46->MdlAddress) = v47;
            if ( !*(_BYTE *)a2 )
            {
              HIDWORD(v46->MdlAddress) = v47 | 2;
              v46->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
              *((_WORD *)&v46->Flags + 2) = *(_WORD *)(a2 + 26);
            }
            v45->IoStatus.Information = 24LL;
            *(_DWORD *)(*a1 + 48) = 0;
            IofCompleteRequest((PIRP)*a1, 1);
            *a1 = 0LL;
            v39 = a1[18] & 0x20 | 0x307040;
            goto LABEL_85;
          }
          FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
          FsRtlpClearOwner(a1, 0LL);
          *((_BYTE *)a1 + 32) = 0;
          v37 = (PIRP)*a1;
          if ( *(__int64 **)(*a1 + 56) == a1 )
            goto LABEL_95;
        }
LABEL_96:
        v37->IoStatus.Status = -1073741536;
        IofCompleteRequest((PIRP)*a1, 1);
        *a1 = 0LL;
        ObfDereferenceObjectWithTag((PVOID)a1[1], 0x746C6644u);
        a1[1] = 0LL;
        *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
        while ( 1 )
        {
          v49 = (__int64 *)a1[11];
          if ( v49 == a1 + 11 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v49);
        }
        v70 = 0;
        v69 = 1;
        v17 = 0;
        goto LABEL_25;
      }
      v34 = v22 - 4096;
      if ( v34 )
      {
        v35 = v34 - 16;
        if ( v35 )
        {
          if ( v35 != 16432 )
            goto LABEL_152;
          if ( (a6 & 0x5000) == 0x5000 )
          {
            v36 = (PIRP)*a1;
            v36->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v36->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v36->CancelIrql);
            if ( v36->Cancel )
            {
              FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
              FsRtlpClearOwner(a1, 0LL);
              *((_BYTE *)a1 + 32) = 0;
              v37 = (PIRP)*a1;
              if ( *(__int64 **)(*a1 + 56) != a1 )
                goto LABEL_96;
LABEL_95:
              v37->IoStatus.Information = 0LL;
              v37 = (PIRP)*a1;
              goto LABEL_96;
            }
            v38 = v36->AssociatedIrp.MasterIrp;
            *(_OWORD *)&v38->Type = 0LL;
            *(_QWORD *)&v38->Flags = 0LL;
            *(_DWORD *)&v38->Type = 1572865;
            *(_DWORD *)(&v38->Size + 1) = (*((_DWORD *)a1 + 36) >> 12) & 7;
            HIDWORD(v38->MdlAddress) |= 1u;
            v36->IoStatus.Information = 24LL;
            *(_DWORD *)(*a1 + 48) = 0;
            IofCompleteRequest((PIRP)*a1, 1);
            *a1 = 0LL;
            v39 = a1[18] & 0x20 | 0x805040;
LABEL_85:
            *((_DWORD *)a1 + 36) = v39;
            v18 = 1;
            v17 = 0;
            goto LABEL_25;
          }
          if ( (a6 & 0x4000) == 0 )
            goto LABEL_25;
          v40 = (PIRP)*a1;
          v40->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)&v40->CancelRoutine, 0LL);
          KeReleaseQueuedSpinLock(7uLL, v40->CancelIrql);
          if ( !v40->Cancel )
          {
            v41 = v40->AssociatedIrp.MasterIrp;
            *(_OWORD *)&v41->Type = 0LL;
            *(_QWORD *)&v41->Flags = 0LL;
            *(_DWORD *)&v41->Type = 1572865;
            *(_DWORD *)(&v41->Size + 1) = (*((_DWORD *)a1 + 36) >> 12) & 7;
            LODWORD(v41->MdlAddress) = 1;
            HIDWORD(v41->MdlAddress) |= 1u;
            v40->IoStatus.Information = 24LL;
            *(_DWORD *)(*a1 + 48) = 0;
            IofCompleteRequest((PIRP)*a1, 1);
            *a1 = 0LL;
            v39 = a1[18] & 0x20 | 0x105040;
            goto LABEL_85;
          }
          FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
          FsRtlpClearOwner(a1, 0LL);
          *((_BYTE *)a1 + 32) = 0;
          v37 = (PIRP)*a1;
          if ( *(__int64 **)(*a1 + 56) == a1 )
            goto LABEL_95;
          goto LABEL_96;
        }
      }
    }
    if ( (a6 & 0x1000) == 0 )
    {
LABEL_131:
      if ( (a1[18] & 0x1F0FFDF) != 0xB000 )
      {
LABEL_24:
        FsRtlpComputeShareableOplockState(a1);
        goto LABEL_25;
      }
      goto LABEL_10;
    }
    v57 = a1 + 5;
    for ( i = (_QWORD *)a1[5]; ; i = (_QWORD *)*i )
    {
      v75 = i;
      if ( i == v57 )
        goto LABEL_131;
      v59 = i[2];
      if ( *(_DWORD *)(v59 + 24) == 590400 )
      {
        if ( !v19 )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v59 + 48), v14, a4) )
          {
            i = v75;
            v57 = a1 + 5;
            continue;
          }
          i = v75;
        }
        if ( (v14 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        v79 = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v79, 0LL, 0LL);
        i = v79;
        v57 = a1 + 5;
      }
    }
  }
  if ( a3 )
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
  }
  return 3221225699LL;
}
