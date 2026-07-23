/*
 * XREFs of KiInitializeMTRR @ 0x140A4DEC4
 * Callers:
 *     KiInitMachineDependent @ 0x1403B59FC (KiInitMachineDependent.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmLockPagableSectionByHandle @ 0x1407064A0 (MmLockPagableSectionByHandle.c)
 *     KiReadFixedMtrr @ 0x14099AA98 (KiReadFixedMtrr.c)
 *     KiMaskToLength @ 0x1409A0318 (KiMaskToLength.c)
 *     KeRestoreMtrrBroadcast @ 0x1409A0344 (KeRestoreMtrrBroadcast.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall KiInitializeMTRR(char a1)
{
  char v1; // di
  char v2; // r15
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  PVOID PoolWithTag; // rax
  size_t v15; // rbx
  PVOID v16; // rax

  v1 = a1;
  v2 = 1;
  if ( !KeGetPcr()->Prcb.Number )
  {
    qword_140C2B388 = __readmsr(0xFEu);
    KiMtrrInfo = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_140C2B391 = 0;
    if ( CurrentPrcb->CpuVendor == 1 )
      byte_140C2B391 = (__readmsr(0xC0010010) & 0x40000) != 0;
    if ( (((_BYTE)qword_140C2B388 != 0) & _bittest64(&KiMtrrInfo, 0xBu)) != 0 )
    {
      if ( (KeFeatureBits & 0x40) == 0 && (qword_140C2B388 & 0x400) != 0 )
        qword_140C2B388 &= ~0x400uLL;
      PoolWithTag = qword_140C2B398;
      v15 = 16 * (unsigned int)(unsigned __int8)qword_140C2B388;
      if ( qword_140C2B398
        || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v15, 0x2020654Bu),
            (qword_140C2B398 = PoolWithTag) != 0LL) )
      {
        memset(PoolWithTag, 0, v15);
      }
      v16 = qword_140C2B3A0;
      if ( qword_140C2B3A0
        || (qword_140C2B388 & 0x100) != 0
        && (v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x2020654Bu), (qword_140C2B3A0 = v16) != 0LL) )
      {
        memset(v16, 0, 0x58uLL);
      }
    }
    else
    {
      if ( (KeFeatureBits & 0x40) != 0
        && (qword_140C2B388 & 0x1FF) != 0
        && (KiMtrrInfo & 0x800) == 0
        && (CurrentPrcb->CpuVendor != 1 || (_BYTE)KiMtrrInfo != 6)
        && (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x65u, 0, "Caching is disabled by incorrect MTRR settings.\n");
        __debugbreak();
      }
      v2 = 0;
    }
  }
  if ( qword_140C2B398 && (qword_140C2B3A0 || (qword_140C2B388 & 0x100) == 0) )
  {
    v3 = __readmsr(0xFEu);
    if ( (KeFeatureBits & 0x40) == 0 && (v3 & 0x400) != 0 )
      v3 &= ~0x400uLL;
    if ( v3 != qword_140C2B388 )
      KeBugCheckEx(0x3Eu, 0x40uLL, 0LL, 0LL, 0LL);
    if ( __readmsr(0x2FFu) != KiMtrrInfo )
      DbgPrintEx(0x65u, 0, "KiInitializeMTRR: MTRR_MSR_DEFAULT is not consistent between processors.\n");
  }
  else
  {
    v2 = 0;
    LOBYTE(v3) = 0;
  }
  if ( !v2 )
    goto LABEL_50;
  if ( !KeGetPcr()->Prcb.Number )
  {
    if ( qword_140C2B3A0 )
      KiReadFixedMtrr(qword_140C2B3A0);
    v4 = (unsigned __int8)v3;
    v5 = 0;
    if ( (_BYTE)v3 )
    {
      v6 = 0LL;
      v7 = 513;
      do
      {
        v8 = __readmsr(v7 - 1);
        v9 = __readmsr(v7);
        v11 = v9;
        if ( (v9 & 0x800) != 0 )
        {
          v10 = v9 & KiMtrrMaskMask;
          if ( ((v10 + KiMaskToLength(v9 & KiMtrrMaskMask)) & ~(1LL << KiMtrrMaxRangeShift)) != 0 )
          {
            DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
            v2 = 0;
          }
          v12 = 2 * v6;
          *((_QWORD *)qword_140C2B398 + v12) = v8;
          *((_QWORD *)qword_140C2B398 + v12 + 1) = v11;
        }
        ++v5;
        v7 += 2;
        v6 = v5;
      }
      while ( v5 < v4 );
      v1 = a1;
    }
  }
  if ( v2 )
  {
    if ( v1 )
    {
      byte_140C2B390 = 1;
      if ( KeGetCurrentIrql() < 2u )
      {
        MmLockPagableSectionByHandle(ExPageLockHandle);
        KeRestoreMtrrBroadcast();
        MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
      }
    }
  }
  else
  {
LABEL_50:
    if ( qword_140C2B398 )
    {
      ExFreePoolWithTag(qword_140C2B398, 0);
      qword_140C2B398 = 0LL;
    }
    if ( qword_140C2B3A0 )
    {
      ExFreePoolWithTag(qword_140C2B3A0, 0);
      qword_140C2B3A0 = 0LL;
    }
  }
}
