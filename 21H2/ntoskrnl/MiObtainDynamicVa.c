/*
 * XREFs of MiObtainDynamicVa @ 0x1402319B8
 * Callers:
 *     MiReservePoolMemory @ 0x140231024 (MiReservePoolMemory.c)
 *     MiObtainSystemVa @ 0x140231990 (MiObtainSystemVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReclaimSystemVa @ 0x140232338 (MiReclaimSystemVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x140321750 (RtlSetBitsEx.c)
 *     MiFindNextAlignedForwardRunClearEx @ 0x1403C5E54 (MiFindNextAlignedForwardRunClearEx.c)
 *     MiExtendDynamicBitMap @ 0x1403C99EC (MiExtendDynamicBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, int a3)
{
  int v3; // r13d
  unsigned int v4; // r11d
  __int64 *v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 *v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rsi
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 NextAlignedForwardRunClear; // rdx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  __int64 v22; // r12
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r15
  unsigned __int64 *v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  int v32; // r12d
  unsigned __int64 v33; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 *v39; // r11
  bool v40; // zf
  __int64 v41; // rax
  unsigned int v42; // r10d
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 *v47; // r11
  __int64 v48; // rax
  unsigned int v49; // r10d
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r10
  __int64 v56; // rax
  unsigned int v57; // ecx
  unsigned __int64 v58; // r10
  __int64 v59; // rax
  unsigned int v60; // ecx
  unsigned int v61; // r9d
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int64 *v64; // r9
  __int64 v65; // rdx
  unsigned __int64 *v66; // r9
  unsigned int v67; // r9d
  __int64 v68; // rcx
  bool v69; // sf
  __int64 v70; // rcx
  unsigned int v71; // eax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rax
  bool v74; // sf
  __int64 v75; // rcx
  unsigned int v76; // eax
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r10
  unsigned __int64 v80; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r9
  _DWORD *v88; // r8
  int v89; // eax
  unsigned __int64 v90; // [rsp+38h] [rbp-69h]
  unsigned __int64 v91; // [rsp+38h] [rbp-69h]
  __int64 *v92; // [rsp+80h] [rbp-21h]
  __int64 v93; // [rsp+88h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-11h] BYREF
  _OWORD v95[5]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 1LL;
  v93 = 1LL;
  v95[0] = 0LL;
  while ( 1 )
  {
    v7 = v5[3];
    v92 = v5;
    v8 = v5;
    if ( v3 == 13 )
    {
      v8 = (__int64 *)v95;
      v92 = (__int64 *)v95;
      v35 = v5[1] + 8 * ((unsigned __int64)v5[2] >> 6);
      v7 = v5[6];
      v36 = -(__int64)((unsigned __int64)v5[5] >> 6);
      *(_QWORD *)&v95[0] = v5[5];
      *((_QWORD *)&v95[0] + 1) = v35 + 8 * v36;
      if ( v4 >= 0x200 )
      {
        if ( (MiFlags & 0x20000000) != 0 )
          v6 = 512LL;
        v93 = v6;
      }
    }
    if ( !*v8 )
      goto LABEL_86;
    v9 = v4;
    if ( v6 == 1 )
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = v7 & -(__int64)(v7 < *v8);
      v13 = *v8 - 1;
      v90 = v12;
      if ( v4 )
      {
        while ( 1 )
        {
          if ( v13 - v12 + 1 < v9 )
            goto LABEL_67;
          v14 = v13 - v9 + 1;
          v15 = (unsigned __int64 *)(v11 + 8 * (v12 >> 6));
          v16 = ((1LL << (v12 & 0x3F)) - 1) | *v15;
          v17 = v11 + 8 * (v14 >> 6);
          if ( v9 > 0x7F )
          {
            v55 = v17 + 8;
            if ( (v14 & 0x3F) == 0 )
              v55 = v11 + 8 * (v14 >> 6);
            if ( v16 )
            {
              if ( *++v15 )
                goto LABEL_104;
              v40 = !_BitScanReverse64((unsigned __int64 *)&v56, v16);
              if ( v40 )
                v57 = 64;
              else
                v57 = 63 - v56;
            }
            else
            {
              v57 = 0;
            }
LABEL_108:
            NextAlignedForwardRunClear = (((__int64)v15 - v11) >> 3 << 6) - v57;
            if ( NextAlignedForwardRunClear > v14 )
              goto LABEL_67;
            v64 = &v15[(v9 - v57) >> 6];
            while ( ++v15 != v64 )
            {
              if ( *v15 )
                goto LABEL_104;
            }
            v61 = ((_BYTE)v4 - (_BYTE)v57) & 0x3F;
            if ( (((_BYTE)v4 - (_BYTE)v57) & 0x3F) != 0 )
            {
              v40 = !_BitScanForward64((unsigned __int64 *)&v62, *v15);
              if ( v40 )
                LODWORD(v62) = 64;
              if ( (unsigned int)v62 < v61 )
              {
LABEL_104:
                while ( (unsigned __int64)v15 <= v55 )
                {
                  if ( !*++v15 )
                  {
                    v40 = !_BitScanReverse64((unsigned __int64 *)&v63, *(v15 - 1));
                    if ( v40 )
                      v57 = 64;
                    else
                      v57 = 63 - v63;
                    goto LABEL_108;
                  }
                }
                goto LABEL_67;
              }
            }
          }
          else if ( v9 >= 0x40 )
          {
            do
            {
LABEL_133:
              v69 = v16 < 0;
              do
              {
                if ( v69 )
                {
                  if ( (unsigned __int64)++v15 > v17 )
                    goto LABEL_67;
                  v16 = *v15;
                  goto LABEL_133;
                }
                v40 = !_BitScanReverse64((unsigned __int64 *)&v70, v16);
                if ( v40 )
                  v71 = 64;
                else
                  v71 = 63 - v70;
                NextAlignedForwardRunClear = (((((__int64)v15 - v11) >> 3) + 1) << 6) - v71;
                if ( NextAlignedForwardRunClear > v14 )
                  goto LABEL_67;
                v72 = v9 - v71;
                if ( v9 == v71 )
                  goto LABEL_15;
                v16 = *++v15;
                if ( v72 < 0x40 )
                  goto LABEL_142;
                v69 = v16 < 0;
              }
              while ( v16 );
              v72 -= 64LL;
              if ( !v72 )
                break;
              v16 = *++v15;
LABEL_142:
              v40 = !_BitScanForward64(&v73, v16);
              if ( v40 )
                v73 = 64LL;
            }
            while ( v73 < v72 );
          }
          else
          {
            if ( v9 > 1 )
            {
              v38 = 0LL;
              v39 = (unsigned __int64 *)(v11 + 8 * (v13 >> 6));
              while ( v16 != -1 )
              {
LABEL_49:
                v40 = !_BitScanForward64((unsigned __int64 *)&v41, v16);
                if ( v40 )
                  LODWORD(v41) = 64;
                if ( (unsigned int)(v38 + v41) >= v9 )
                {
                  v45 = -v38;
LABEL_56:
                  NextAlignedForwardRunClear = (((__int64)v15 - v11) >> 3 << 6) + v45;
                  goto LABEL_14;
                }
                v42 = a2;
                v43 = ~v16;
                while ( 1 )
                {
                  v43 &= v43 >> (v42 >> 1);
                  if ( !v43 )
                    break;
                  v42 -= v42 >> 1;
                  if ( v42 <= 1 )
                  {
                    _BitScanForward64(&v44, v43);
                    v45 = (unsigned int)v44;
                    goto LABEL_56;
                  }
                }
                if ( v15 == v39 )
                  goto LABEL_67;
                v40 = !_BitScanReverse64((unsigned __int64 *)&v53, v16);
                if ( v40 )
                  v38 = 64LL;
                else
                  v38 = (unsigned int)(63 - v53);
                v16 = *++v15;
              }
              while ( (unsigned __int64)++v15 <= v17 )
              {
                v16 = *v15;
                if ( *v15 != -1LL )
                {
                  v38 = 0LL;
                  goto LABEL_49;
                }
              }
LABEL_67:
              NextAlignedForwardRunClear = -1LL;
              goto LABEL_170;
            }
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v15 > v17 )
                goto LABEL_67;
              v16 = *v15;
            }
            _BitScanForward64(&v18, ~v16);
            NextAlignedForwardRunClear = v18 + (((__int64)v15 - v11) >> 3 << 6);
LABEL_14:
            if ( NextAlignedForwardRunClear > v14 )
              goto LABEL_67;
          }
LABEL_15:
          if ( NextAlignedForwardRunClear != -1LL )
            goto LABEL_16;
LABEL_170:
          if ( !v90 )
          {
LABEL_16:
            v8 = v92;
            v6 = v93;
            goto LABEL_17;
          }
          LOBYTE(v4) = a2;
          v79 = v9 + v7;
          if ( v9 + v7 > v10 )
            v79 = v10;
          v13 = v79 - 1;
          v12 = 0LL;
          v90 = 0LL;
        }
      }
      NextAlignedForwardRunClear = v12 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_17:
      v5 = a1;
      v3 = a3;
      v91 = NextAlignedForwardRunClear;
    }
    else
    {
      NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v8, v4, v6);
      v91 = NextAlignedForwardRunClear;
    }
    if ( NextAlignedForwardRunClear == -1LL )
    {
LABEL_86:
      if ( !(unsigned int)MiExtendDynamicBitMap((_DWORD)v5, (_DWORD)v8, 0, v3, 0) )
        return 0LL;
      goto LABEL_87;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5 + 8, &LockHandle);
    if ( v6 == 1 )
    {
      v20 = *v8;
      v21 = v91;
      v22 = v8[1];
      v23 = *v8 - 1;
      v24 = v91 & -(__int64)(v91 < *v8);
      if ( v9 )
      {
        while ( v23 - v24 + 1 < v9 )
        {
          v30 = -1LL;
LABEL_176:
          if ( !v24 )
          {
LABEL_31:
            v5 = a1;
            v31 = v30;
            v8 = v92;
            goto LABEL_32;
          }
          v80 = v9 + v21;
          if ( v9 + v21 > v20 )
            v80 = v20;
          v23 = v80 - 1;
          v24 = 0LL;
        }
        v25 = v23 - v9 + 1;
        v26 = (unsigned __int64 *)(v22 + 8 * (v24 >> 6));
        v27 = ((1LL << (v24 & 0x3F)) - 1) | *v26;
        v28 = v22 + 8 * (v25 >> 6);
        if ( v9 > 0x7F )
        {
          v58 = v28 + 8;
          if ( (v25 & 0x3F) == 0 )
            v58 = v22 + 8 * (v25 >> 6);
          if ( v27 )
          {
            if ( *++v26 )
              goto LABEL_113;
            v40 = !_BitScanReverse64((unsigned __int64 *)&v59, v27);
            if ( v40 )
              v60 = 64;
            else
              v60 = 63 - v59;
          }
          else
          {
            v60 = 0;
          }
LABEL_118:
          v30 = (((__int64)v26 - v22) >> 3 << 6) - v60;
          if ( v30 > v25 )
            goto LABEL_68;
          v66 = &v26[(v9 - v60) >> 6];
          while ( ++v26 != v66 )
          {
            if ( *v26 )
              goto LABEL_113;
          }
          v67 = ((_BYTE)a2 - (_BYTE)v60) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v60) & 0x3F) != 0 )
          {
            v40 = !_BitScanForward64((unsigned __int64 *)&v68, *v26);
            if ( v40 )
              LODWORD(v68) = 64;
            if ( (unsigned int)v68 < v67 )
            {
LABEL_113:
              while ( (unsigned __int64)v26 <= v58 )
              {
                if ( !*++v26 )
                {
                  v40 = !_BitScanReverse64((unsigned __int64 *)&v65, *(v26 - 1));
                  if ( v40 )
                    v60 = 64;
                  else
                    v60 = 63 - v65;
                  goto LABEL_118;
                }
              }
              goto LABEL_68;
            }
          }
        }
        else
        {
          if ( v9 < 0x40 )
          {
            if ( v9 > 1 )
            {
              v46 = 0LL;
              v47 = (unsigned __int64 *)(v22 + 8 * (v23 >> 6));
              while ( v27 != -1 )
              {
LABEL_59:
                v40 = !_BitScanForward64((unsigned __int64 *)&v48, v27);
                if ( v40 )
                  LODWORD(v48) = 64;
                if ( (unsigned int)(v46 + v48) >= v9 )
                {
                  v52 = -v46;
LABEL_66:
                  v30 = (((__int64)v26 - v22) >> 3 << 6) + v52;
                  goto LABEL_29;
                }
                v49 = a2;
                v50 = ~v27;
                while ( 1 )
                {
                  v50 &= v50 >> (v49 >> 1);
                  if ( !v50 )
                    break;
                  v49 -= v49 >> 1;
                  if ( v49 <= 1 )
                  {
                    _BitScanForward64(&v51, v50);
                    v52 = (unsigned int)v51;
                    goto LABEL_66;
                  }
                }
                if ( v26 == v47 )
                  goto LABEL_68;
                v40 = !_BitScanReverse64((unsigned __int64 *)&v54, v27);
                if ( v40 )
                  v46 = 64LL;
                else
                  v46 = (unsigned int)(63 - v54);
                v27 = *++v26;
              }
              while ( (unsigned __int64)++v26 <= v28 )
              {
                v27 = *v26;
                if ( *v26 != -1LL )
                {
                  v46 = 0LL;
                  goto LABEL_59;
                }
              }
            }
            else
            {
              while ( v27 == -1 )
              {
                if ( (unsigned __int64)++v26 > v28 )
                  goto LABEL_68;
                v27 = *v26;
              }
              _BitScanForward64(&v29, ~v27);
              v30 = v29 + (((__int64)v26 - v22) >> 3 << 6);
LABEL_29:
              if ( v30 <= v25 )
                goto LABEL_30;
            }
LABEL_68:
            v30 = -1LL;
LABEL_69:
            v21 = v91;
            goto LABEL_176;
          }
          do
          {
LABEL_149:
            v74 = v27 < 0;
            do
            {
              if ( v74 )
              {
                if ( (unsigned __int64)++v26 > v28 )
                  goto LABEL_68;
                v27 = *v26;
                goto LABEL_149;
              }
              v40 = !_BitScanReverse64((unsigned __int64 *)&v75, v27);
              if ( v40 )
                v76 = 64;
              else
                v76 = 63 - v75;
              v30 = (((((__int64)v26 - v22) >> 3) + 1) << 6) - v76;
              if ( v30 > v25 )
                goto LABEL_68;
              v77 = v9 - v76;
              if ( v9 == v76 )
                goto LABEL_30;
              v27 = *++v26;
              if ( v77 < 0x40 )
                goto LABEL_158;
              v74 = v27 < 0;
            }
            while ( v27 );
            v77 -= 64LL;
            if ( !v77 )
              break;
            v27 = *++v26;
LABEL_158:
            v40 = !_BitScanForward64(&v78, v27);
            if ( v40 )
              v78 = 64LL;
          }
          while ( v78 < v77 );
        }
LABEL_30:
        if ( v30 != -1LL )
          goto LABEL_31;
        goto LABEL_69;
      }
      v31 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
    }
    else
    {
      v31 = MiFindNextAlignedForwardRunClearEx(v8, v9, v6);
    }
LABEL_32:
    if ( v31 != -1LL )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v85 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v40 = (v85 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v85;
          if ( v40 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v3 = a3;
    if ( !(unsigned int)MiExtendDynamicBitMap((_DWORD)v5, (_DWORD)v8, 0, a3, 0) )
      return 0LL;
    v6 = v93;
LABEL_87:
    v4 = a2;
  }
  RtlSetBitsEx(v8, v31, v9);
  v32 = a3;
  if ( a3 == 13 )
  {
    v37 = 8 * (v8[1] - v5[1]);
    if ( a2 == 1 )
      v5[6] = v31 + 1;
    v31 += v37;
    v32 = 9;
  }
  else if ( a2 == 1 )
  {
    v5[3] = v31 + 1;
  }
  if ( v5 == &qword_140C4E1F8 )
  {
    qword_140C4E088 -= v9 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_140C4F988[v32], v9);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v33 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v86 = KeGetCurrentIrql();
      if ( v86 <= 0xFu && LockHandle.OldIrql <= 0xFu && v86 >= 2u )
      {
        v87 = KeGetCurrentPrcb();
        v88 = v87->SchedulerAssist;
        v89 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v40 = (v89 & v88[5]) == 0;
        v88[5] &= v89;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick(v87);
      }
    }
  }
  __writecr8(v33);
  return v5[4] + (v31 << 21);
}
