/*
 * XREFs of KiMcheckAbort @ 0x14040ECC0
 * Callers:
 *     KiMcheckAbortShadow @ 0x140A159C0 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402F1E00 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x140402D20 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x14040F200 (KxMcheckAbort.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140519C60 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 *     KiMcheckFastForward @ 0x140526900 (KiMcheckFastForward.c)
 */

void __fastcall KiMcheckAbort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v15; // zf
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int64 v25; // rcx
  __int64 v26; // r10
  unsigned __int8 CurrentIrql; // al
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int v32; // r9d
  int v33; // r8d
  __int64 (__fastcall **v34)(); // rcx
  __int64 (__fastcall *v35)(); // rax
  _KIDTENTRY64 *IdtBase; // rax
  int v37; // edx
  int v38; // ecx
  __m128i v39; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[5]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v41; // [rsp+38h] [rbp-58h]
  unsigned __int8 v42; // [rsp+39h] [rbp-57h]
  char v43; // [rsp+3Bh] [rbp-55h]
  unsigned int v44; // [rsp+3Ch] [rbp-54h]
  __int64 v45; // [rsp+40h] [rbp-50h]
  __int64 v46; // [rsp+48h] [rbp-48h]
  __int64 v47; // [rsp+50h] [rbp-40h]
  __int64 v48; // [rsp+58h] [rbp-38h]
  __int64 v49; // [rsp+60h] [rbp-30h]
  __int64 v50; // [rsp+68h] [rbp-28h]
  __int64 v51; // [rsp+70h] [rbp-20h]
  unsigned __int64 v52; // [rsp+78h] [rbp-18h]
  _OWORD v53[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v54; // [rsp+E0h] [rbp+50h]
  __int16 v55; // [rsp+110h] [rbp+80h]
  unsigned int v56; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v58; // [rsp+180h] [rbp+F0h]
  unsigned int v59; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v60; // [rsp+190h] [rbp+100h]
  unsigned __int16 v61; // [rsp+198h] [rbp+108h]

  v43 = 0;
  v45 = v8;
  v46 = a1;
  v47 = a2;
  v48 = a3;
  v49 = a4;
  v50 = v9;
  v51 = v10;
  if ( (v58 & 1) == 0 )
  {
    v52 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v15 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( !MEMORY[0xFFFFF78000000294] )
      {
        __sgdt(v53);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v53 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v54 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_13;
      }
      __asm { rdtscp }
      v18 = 1;
      v19 = 805306432;
    }
    v17 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 | v18]] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  KiSetSpecCtrlNmi(a1, a2);
  v15 = (*(_BYTE *)(v26 + 3) & 3) == 0;
  v55 = 0;
  if ( !v15 )
    *(double *)&v11 = KiSaveDebugRegisterState(v25);
LABEL_13:
  v44 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v53[0] = v11;
  v53[1] = v12;
  v53[2] = v13;
  v53[3] = v14;
  v53[4] = v23;
  v53[5] = v24;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x8000u);
  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(15LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v42 = CurrentIrql;
  _enable();
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4);
  __incgsbyte(0x7D67u);
  if ( (v58 & 1) == 0 )
  {
    v29 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v60 <= v29 )
    {
      v28 = 24576LL;
      if ( (KiKvaShadow & 1) != 0 )
        v28 = 464LL;
      if ( v60 > v29 - v28 )
        goto LABEL_31;
    }
    if ( (KiKvaShadow & 1) != 0 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v60 <= v30 && v60 > v30 - 24544 )
      {
LABEL_31:
        v61 |= 4u;
        _InterlockedIncrement64(&KiMcheckNmiBlocking);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v59 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)())((char *)retaddr - 1);
      _InterlockedIncrement64(&KiMcheckStiBlocking);
    }
  }
  KxMcheckAbort(BugCheckParameter4, v28, &v39);
  if ( (v39.m128i_i8[0] & 1) != 0 )
  {
    *((__m128i *)KeGetCurrentThread()->InitialStack - 26) = _mm_load_si128(&v39);
    v43 = 1;
  }
  __writegsbyte(0x7D67u, KeGetPcr()->Prcb.MceActive - 1);
  _disable();
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v42);
  else
    __writecr8(v42);
  _disable();
  if ( (v58 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v44);
    if ( v55 )
      KiRestoreDebugRegisterState(CurrentThread);
    v32 = v49;
    v33 = v48;
    if ( v43 )
    {
      v34 = (__int64 (__fastcall **)())((char *)KeGetCurrentThread()->InitialStack - 40);
      *v34 = retaddr;
      v34[1] = (__int64 (__fastcall *)())v58;
      v34[2] = (__int64 (__fastcall *)())v59;
      v34[3] = (__int64 (__fastcall *)())v60;
      v34[4] = (__int64 (__fastcall *)())v61;
      v35 = KxMcheckAlternateReturn;
      if ( (KiKvaShadow & 1) != 0 )
      {
        IdtBase = KeGetPcr()->IdtBase;
        *(&IdtBase[1118].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
        IdtBase[1118].Alignment = (unsigned __int64)KeGetPcr();
        IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
        IdtBase->Alignment = (unsigned __int64)*v34;
        *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v34 + 1);
        *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v34[3];
        IdtBase[2].Alignment = (unsigned __int64)v34;
        v35 = KxMcheckAlternateReturnShadow;
      }
      retaddr = v35;
    }
    else
    {
      __writegsbyte(0x856u, v41);
      if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
        __writemsr(0x48u, v56);
    }
    v37 = v47;
    v38 = v46;
    if ( (KiKvaShadow & 1) != 0 )
    {
LABEL_55:
      KiKernelIstMceExit(v38, v37, v33, v32, a5, a6, a7, a8);
      return;
    }
    __asm { swapgs }
    _mm_lfence();
  }
  else
  {
    _mm_setcsr(v44);
    __writegsbyte(0x856u, v41);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v56);
    __writemsr(0xC0000101, v52);
    __writecr2(v54);
    v32 = v49;
    v33 = v48;
    v37 = v47;
    v38 = v46;
    if ( (KiKvaShadow & 1) != 0 )
      goto LABEL_55;
  }
  KiMcheckExit();
}
