/*
 * XREFs of KxInitializeProcessorState @ 0x14079FF80
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x1403B5C48 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x1403B604C (KiCommitNodeAssignment.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiEnableKvaShadowing @ 0x1409A0790 (KiEnableKvaShadowing.c)
 */

__int64 __fastcall KxInitializeProcessorState(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        size_t Size,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  KPCR *Pcr; // rbx
  unsigned __int64 v22; // rbp
  unsigned __int16 Limit; // ax
  const void *v24; // rdx
  void *v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rbx
  _OWORD *v29; // rcx
  int v30; // ecx
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  char v34; // cl
  unsigned __int64 v35; // rcx
  __int64 result; // rax
  __int64 v37; // rdx
  _OWORD *v38; // rax
  __int128 v39; // xmm1

  Pcr = KeGetPcr();
  memset((void *)a3, 0, (unsigned int)Size);
  memset(a1, 0, 0x5C0uLL);
  *((_WORD *)a1 + 43) = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v22 = a3 + a9;
  a1[11] = v22;
  memmove(
    (void *)v22,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1LL);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v24 = KiBootProcessorIdt;
  v25 = (void *)(a3 + a10);
  a1[13] = (unsigned __int64)v25;
  *((_WORD *)a1 + 51) = Limit;
  memmove(v25, v24, (unsigned int)KiBootProcessorIdtSize);
  v26 = v22 - 8112;
  *(_BYTE *)(a3 + 82) = a7;
  v27 = a3 + (((a8 << 6) + 45183) & 0xFFFFFFC0);
  *(_DWORD *)(a3 + 420) = a7;
  *(_DWORD *)(a3 + 452) = KeGetCurrentPrcb()->MHz;
  v28 = KeNodeBlock[a6];
  *(_QWORD *)(a3 + 11904) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  *(_QWORD *)(v22 - 8000) = a3;
  *(_BYTE *)(v22 + 68) = (unsigned int)(v22 - 8112) >> 16;
  *(_BYTE *)(v22 + 71) = (unsigned int)(v22 - 8112) >> 24;
  *(_DWORD *)(v22 + 72) = (v22 - 8112) >> 32;
  *(_WORD *)(v22 + 66) = v22 - 8112;
  *(_QWORD *)(v26 + 36) = a16;
  *(_QWORD *)(v26 + 44) = a17;
  *(_QWORD *)(v26 + 60) = a18;
  *(_QWORD *)(v26 + 52) = a15;
  *(_QWORD *)(a14 - 80 + 40) = &KiExceptionDispatchOnExceptionStackContinue;
  *(_QWORD *)(a3 + 34648) = a13;
  *(_QWORD *)(a3 + 32936) = a14 - 80;
  *(_QWORD *)(v26 + 4) = a11;
  v29 = (_OWORD *)((char *)&KiNodeInit + 384 * a6);
  if ( (_OWORD *)v28 == v29 )
  {
    v37 = 3LL;
    v28 = v27 + 2240;
    v38 = (_OWORD *)(v27 + 2240);
    do
    {
      *v38 = *v29;
      v38[1] = v29[1];
      v38[2] = v29[2];
      v38[3] = v29[3];
      v38[4] = v29[4];
      v38[5] = v29[5];
      v38[6] = v29[6];
      v38 += 8;
      v39 = v29[7];
      v29 += 8;
      *(v38 - 1) = v39;
      --v37;
    }
    while ( v37 );
    KeNodeBlock[a6] = v28;
  }
  if ( (*(_BYTE *)(v28 + 181) & 4) == 0 )
    KiCommitNodeAssignment(v28);
  if ( !(unsigned int)KiEnableKvaShadowing(a3 + 384, v22 - 12208) )
    return 0LL;
  *(_QWORD *)(a3 + 576) = v28;
  KiAddProcessorToGroupDatabase(a3 + 384, a4);
  v30 = *(unsigned __int8 *)(a3 + 592) | (*(unsigned __int8 *)(a3 + 593) << 14) | 0x3C00;
  v31 = *(_DWORD *)(v22 + 84);
  *(_WORD *)(v22 + 80) = v30;
  *(_DWORD *)(v22 + 84) ^= (v30 ^ v31) & 0xF0000;
  *(_QWORD *)(a11 - 8) = 0LL;
  a1[46] = (unsigned __int64)a2;
  a1[61] = (unsigned __int64)KiSystemStartup;
  a1[49] = a11 - 8;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  a1[38] = 1572907LL;
  if ( KeSmapEnabled )
    *((_DWORD *)a1 + 77) = 0x40000;
  v32 = __readcr0();
  *a1 = v32;
  v33 = __readcr3();
  a1[2] = v33 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v22 + 69) = -119;
  v34 = *(_BYTE *)(v22 + 69);
  if ( VslVsmEnabled )
    v34 = -117;
  *(_BYTE *)(v22 + 69) = v34;
  v35 = __readcr4();
  a1[3] = v35 & 0xFFFFFFFFFF7FFFFFuLL;
  a2[18] = &KiInitialProcess;
  result = a3 + 384;
  a2[16] = a12;
  a2[19] = v27;
  a2[17] = a3 + 384;
  return result;
}
