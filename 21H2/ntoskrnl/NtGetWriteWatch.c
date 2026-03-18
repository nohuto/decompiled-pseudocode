/*
 * XREFs of NtGetWriteWatch @ 0x1402CF630
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetVadMandatoryPageSize @ 0x14028ECC8 (MiGetVadMandatoryPageSize.c)
 *     MiMakePteClean @ 0x14028ECFC (MiMakePteClean.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiUnlockVadCore @ 0x1403106A4 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1403106E0 (MiLockVadCore.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtGetWriteWatch(
        void *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        __int64 *a6,
        unsigned __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  _BYTE *Pool; // rax
  int v19; // edi
  _KPROCESS *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 VadMandatoryPageSize; // rax
  int v25; // r8d
  unsigned __int64 v26; // r9
  __int64 v27; // r10
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // r10
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r15
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r10
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 Flink; // rdx
  __int64 LeafVa; // r8
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r11
  unsigned __int64 v46; // r14
  int v47; // r15d
  __int64 v48; // rbx
  bool v49; // zf
  __int64 v50; // rdx
  NTSTATUS v51; // ebx
  _BYTE *v52; // rdi
  __int64 v53; // rsi
  unsigned __int64 v54; // rax
  __int64 *v55; // r14
  unsigned int j; // ebx
  char v57; // al
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rax
  unsigned __int64 v61; // r14
  __int64 v62; // rcx
  unsigned __int64 v63; // r10
  char v64; // al
  __int64 v65; // rax
  char v66; // [rsp+40h] [rbp-9F8h]
  unsigned __int64 v67; // [rsp+48h] [rbp-9F0h] BYREF
  int v68; // [rsp+50h] [rbp-9E8h]
  unsigned __int64 i; // [rsp+58h] [rbp-9E0h]
  unsigned __int64 v70; // [rsp+60h] [rbp-9D8h]
  unsigned __int64 *v71; // [rsp+68h] [rbp-9D0h]
  unsigned __int64 v72; // [rsp+70h] [rbp-9C8h]
  void *Src; // [rsp+78h] [rbp-9C0h]
  unsigned int v74; // [rsp+80h] [rbp-9B8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-9B0h]
  __int64 *v76; // [rsp+90h] [rbp-9A8h]
  unsigned __int64 v77; // [rsp+98h] [rbp-9A0h]
  PVOID Object; // [rsp+A0h] [rbp-998h] BYREF
  unsigned __int64 v79; // [rsp+A8h] [rbp-990h]
  __int64 v80; // [rsp+B0h] [rbp-988h]
  __int64 LockedVadEvent; // [rsp+B8h] [rbp-980h]
  unsigned __int64 v82; // [rsp+C0h] [rbp-978h]
  __int64 v83; // [rsp+C8h] [rbp-970h]
  PVOID P; // [rsp+D0h] [rbp-968h]
  HANDLE Handle; // [rsp+D8h] [rbp-960h]
  void *v86; // [rsp+E0h] [rbp-958h]
  __int64 *v87; // [rsp+E8h] [rbp-950h]
  _DWORD *v88; // [rsp+F0h] [rbp-948h]
  _OWORD v89[3]; // [rsp+F8h] [rbp-940h] BYREF
  int v90; // [rsp+130h] [rbp-908h] BYREF
  __int16 v91; // [rsp+134h] [rbp-904h]
  __int16 v92; // [rsp+136h] [rbp-902h]
  __int64 v93; // [rsp+138h] [rbp-900h]
  __int64 v94; // [rsp+140h] [rbp-8F8h]
  __int64 v95; // [rsp+148h] [rbp-8F0h]
  _BYTE v96[152]; // [rsp+150h] [rbp-8E8h] BYREF
  _BYTE v97[2048]; // [rsp+1F0h] [rbp-848h] BYREF

  v68 = a2;
  Handle = a1;
  v86 = (void *)Address;
  v87 = a6;
  v88 = (_DWORD *)a7;
  Object = 0LL;
  v74 = 0;
  LODWORD(v67) = 0;
  memset(v89, 0, sizeof(v89));
  v92 = 0;
  memset(v96, 0, sizeof(v96));
  v93 = 20LL;
  v90 = 1;
  v91 = 0;
  v94 = 0LL;
  v95 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a3 > 0x7FFFFFFEFFFFLL )
      return 3221225713LL;
    if ( 0x7FFFFFFF0000LL - a3 < a4 )
      return 3221225714LL;
    v13 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = *a6;
    v79 = v14;
    if ( !v14 )
      return 3221225715LL;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return 3221225715LL;
    ProbeForWrite(Address, 8 * v14, 8u);
    v15 = a7;
    if ( a7 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v79;
  }
  else
  {
    v16 = *a6;
    v79 = *a6;
  }
  Pool = v97;
  Src = v97;
  if ( v16 > 0x100 )
  {
    Pool = MiAllocatePool(65, 8 * v16, 0x63476D4Du);
    Src = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  v72 = 1LL;
  v70 = 0LL;
  v76 = (__int64 *)Pool;
  P = 0LL;
  v19 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    v20 = Process;
    Object = Process;
  }
  else
  {
    v51 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(v67) = v51;
    if ( v51 < 0 )
      goto LABEL_130;
    v20 = (_KPROCESS *)Object;
  }
  v75 = 0LL;
  v21 = a4 + a3 - 1;
  if ( a3 > v21 )
  {
    v51 = -1073741582;
    goto LABEL_65;
  }
  if ( Process != v20 )
  {
    KiStackAttachProcess((ULONG_PTR)v20);
    v19 = 1;
  }
  v71 = &v20[1].ActiveProcessors.StaticBitmap[26];
  v22 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v77 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = MiObtainReferencedVadEx(a3, 0LL, &v67);
  v80 = v23;
  if ( !v23 )
  {
    v51 = v67;
    if ( (_DWORD)v67 != -1073741664 )
      goto LABEL_65;
LABEL_64:
    v51 = -1073741585;
    goto LABEL_65;
  }
  P = (PVOID)v23;
  if ( (*(_DWORD *)(v23 + 48) & 0x600000) != 0x600000
    || v21 > (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF) )
  {
    goto LABEL_64;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize(v23);
  v28 = VadMandatoryPageSize;
  v72 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize > 1 )
  {
    v59 = (VadMandatoryPageSize << 12) - 1;
    if ( (v59 & a3) != 0 )
    {
      v51 = -1073741583;
      goto LABEL_65;
    }
    if ( (v59 & a4) != 0 )
    {
      v51 = -1073741582;
      goto LABEL_65;
    }
  }
  if ( (v25 & 0xA00000) == 0xA00000 )
  {
    v29 = 16LL;
    if ( MiVadPageSizes[(v26 >> 19) & 3] != 16 )
      v29 = 1LL;
  }
  else
  {
    v29 = 1LL;
  }
  LockedVadEvent = MiLocateLockedVadEvent(v27, 4LL);
  v67 = ((a3 >> 12) - (*(unsigned int *)(v30 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v30 + 32) << 32))) / v28;
  v66 = MiLockWorkingSetShared((__int64)v71);
  v31 = v77;
  if ( v22 > v77 )
    goto LABEL_59;
  v32 = v70;
  while ( 1 )
  {
    if ( v32 )
    {
      MiFlushTbList(&v90);
      MiUnlockPageTableInternal((__int64)v71, v32);
      v32 = 0LL;
      v70 = 0LL;
    }
    if ( (unsigned int)MiWorkingSetIsContended(v71) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v71, v66);
      MiLockWorkingSetShared((__int64)v71);
    }
    NextPageTable = MiGetNextPageTable(v22, v31, 0LL, v66, 1, &v74);
    v34 = NextPageTable;
    if ( NextPageTable )
    {
      v32 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v70 = v32;
    }
    else
    {
      v34 = v31 + 8;
    }
    v35 = ((__int64)(v34 - v22) >> 3) % v28;
    v36 = ((__int64)(v34 - v22) >> 3) / v28;
    v19 |= 4u;
    MiLockVadCore(v80, v35);
    v37 = v67;
    if ( v36 )
    {
      v58 = v72;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(LockedVadEvent + 16), v37) == 1 )
        {
          if ( (v68 & 1) != 0 )
            _bittestandreset64(*(signed __int64 **)(LockedVadEvent + 16), v37);
          v60 = v76;
          *v76 = (__int64)(v22 << 25) >> 16;
          v76 = v60 + 1;
          if ( ++v75 == v16 )
            goto LABEL_58;
        }
        v67 = ++v37;
        v22 += 8 * v58;
        --v36;
      }
      while ( v36 );
    }
    if ( v22 > v31 )
      goto LABEL_58;
    v38 = v31;
    i = v31;
    if ( v74 )
    {
      v22 = v32;
      v61 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39 = 512LL;
      if ( v74 > 1 )
      {
        v62 = v74 - 1;
        do
        {
          v39 <<= 9;
          v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v61 = ((v61 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v62;
        }
        while ( v62 );
      }
      v32 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v70 = v32;
      v63 = v22 + 8;
      for ( i = v22 + 8; (v63 & 0xFFF) != 0; i = v63 )
      {
        if ( v63 > v61 )
          break;
        v64 = MI_READ_PTE_LOCK_FREE(v63);
        v63 = i;
        if ( (v64 & 0x81) != 0x81 )
          break;
        v63 = i + 8;
      }
      v38 = v63 - 8;
      i = v38;
      v31 = v77;
    }
    else
    {
      v39 = v29;
    }
    v40 = v39;
    v28 = v72;
    Flink = v40 % v72;
    v82 = v40 / v72;
    if ( v22 <= v38 )
      break;
LABEL_57:
    LOBYTE(Flink) = 2;
    MiUnlockVadCore(v80, Flink);
    v19 &= ~4u;
    v22 = (((unsigned __int64)MiGetLeafVa(v22) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v22 > v31 )
      goto LABEL_58;
  }
  while ( 1 )
  {
    LeafVa = MiGetLeafVa(v22);
    v83 = LeafVa;
    v19 &= ~2u;
    v46 = v22;
    Flink = *(_QWORD *)(LockedVadEvent + 16);
    if ( _bittest64((const signed __int64 *)Flink, v43) != 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        v48 = *(_QWORD *)v46;
        if ( (unsigned int)MiPteInShadowRange(v46)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v48 & 1) != 0 )
        {
          if ( (v48 & 0x20) != 0 )
          {
            v49 = (v48 & 0x42) == 0;
            if ( (v48 & 0x42) != 0 )
              goto LABEL_47;
          }
          Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v65 = *(_QWORD *)(Flink + 8 * ((v46 >> 3) & 0x1FF));
            Flink = v48 | 0x20;
            if ( (v65 & 0x20) == 0 )
              Flink = v48;
            LOBYTE(v48) = Flink;
            if ( (v65 & 0x42) != 0 )
              LOBYTE(v48) = Flink | 0x42;
          }
        }
        v49 = (v48 & 0x42) == 0;
LABEL_47:
        if ( !v49 && (v48 & 1) != 0 )
        {
          v19 |= 2u;
          if ( (v68 & 1) == 0 )
            goto LABEL_51;
          MiMakePteClean(v46, (__int64)&v90);
        }
        v46 += 8LL;
        if ( (unsigned int)++v47 >= v29 )
        {
LABEL_51:
          v16 = v79;
          goto LABEL_52;
        }
      }
    }
    v19 |= 2u;
    if ( (v68 & 1) != 0 )
    {
      _bittestandreset64((signed __int64 *)Flink, v43);
      for ( j = 0; j < v29; ++j )
      {
        v57 = MI_READ_PTE_LOCK_FREE(v46);
        if ( (v57 & 0x42) != 0 && (v57 & 1) != 0 )
          MiMakePteClean(v46, (__int64)&v90);
        v46 += 8LL;
      }
LABEL_52:
      LeafVa = v83;
      v45 = v82;
      v44 = i;
      v28 = v72;
      v43 = v67;
    }
    if ( (v19 & 2) != 0 )
    {
      v54 = 0LL;
      if ( v45 )
        break;
    }
LABEL_54:
    v67 = v45 + v43;
    v22 += 8 * v29;
    if ( (v22 & 0xFFF) == 0 || v22 > v44 )
    {
      v31 = v77;
      v32 = v70;
      goto LABEL_57;
    }
  }
  Flink = v75;
  v55 = v76;
  while ( 1 )
  {
    *v55++ = LeafVa;
    v76 = v55;
    v75 = ++Flink;
    if ( Flink == v16 )
      break;
    ++v54;
    LeafVa += v28 << 12;
    if ( v54 >= v45 )
      goto LABEL_54;
  }
LABEL_58:
  v20 = (_KPROCESS *)Object;
LABEL_59:
  MiFlushTbList(&v90);
  if ( (v19 & 4) != 0 )
  {
    LOBYTE(v50) = 2;
    MiUnlockVadCore(v80, v50);
  }
  if ( v70 )
    MiUnlockPageTableInternal((__int64)v71, v70);
  MiUnlockWorkingSetShared((__int64)v71, v66);
  v51 = 0;
LABEL_65:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v19 & 1) != 0 )
    KiUnstackDetachProcess(v89, 0LL);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v20, 0x77576D4Du);
  if ( v51 )
  {
LABEL_130:
    v52 = Src;
    goto LABEL_75;
  }
  v52 = Src;
  if ( v86 )
  {
    v53 = v75;
    memmove(v86, Src, 8 * v75);
    *v87 = v53;
  }
  *v88 = (_DWORD)v72 << 12;
LABEL_75:
  if ( v52 != v97 )
    ExFreePoolWithTag(v52, 0);
  return (unsigned int)v51;
}
