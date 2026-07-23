/*
 * XREFs of KiMcheckFastForward @ 0x140526900
 * Callers:
 *     KiNmiInterruptStart @ 0x14040AF40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040ECC0 (KiMcheckAbort.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiRspInIstStack @ 0x140518E38 (KiRspInIstStack.c)
 */

unsigned __int64 __fastcall KiMcheckFastForward(ULONG_PTR BugCheckParameter4, char a2)
{
  ULONG_PTR v3; // r11
  unsigned int v4; // r10d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 result; // rax
  int v9; // ecx
  __int64 v10; // r9
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v3 = BugCheckParameter4;
  v4 = 0;
  if ( (*(_BYTE *)(BugCheckParameter4 + 368) & 1) == 0 )
  {
    if ( KiRspInIstStack(3u, *(_QWORD *)(BugCheckParameter4 + 384)) )
      _InterlockedAdd(&KiMcheckRecursive, 1u);
    if ( KiRspInIstStack(2u, v5) )
    {
      v4 |= 2u;
      _InterlockedAdd(&dword_140C2AFC4, 1u);
    }
    v6 = *(_QWORD *)(v3 + 360);
    if ( v6 >= (unsigned __int64)&KiMcheckExitMceTailMceBegin && v6 < (unsigned __int64)&KiMcheckExitMceTailMceEnd )
    {
      v4 |= 4u;
      _InterlockedAdd(&dword_140C2AFC8, 1u);
    }
    if ( v6 >= (unsigned __int64)&KiMcheckExitMceTailNmiBegin && v6 < (unsigned __int64)KiMcheckExitMceTailNmiEnd )
    {
      v4 |= 4u;
      _InterlockedAdd(&dword_140C2AFC8, 1u);
    }
    if ( KiKvaShadow )
    {
      if ( v6 >= (unsigned __int64)&KiKernelIstMceExitMceTailMceBegin
        && v6 < (unsigned __int64)&KiKernelIstMceExitMceTailMceEnd )
      {
        v4 |= 4u;
        _InterlockedAdd(&dword_140C2AFCC, 1u);
      }
      if ( KiKvaShadow
        && v6 >= (unsigned __int64)&KiKernelIstMceExitMceTailNmiBegin
        && v6 < (unsigned __int64)&KiKernelIstMceExitMceTailNmiEnd )
      {
        v4 |= 4u;
        _InterlockedAdd(&dword_140C2AFCC, 1u);
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = v4 & 1;
  if ( a2 || (v4 & 1) != 0 )
  {
    _InterlockedAdd(&dword_140C2AFD8, 1u);
    if ( (v4 & 1) != 0 )
      _InterlockedAdd(&dword_140C2AFE0, 1u);
    v9 = 1;
  }
  else
  {
    _InterlockedAdd(&dword_140C2AFDC, 1u);
    v9 = 0;
  }
  v10 = 0LL;
  if ( KiKvaShadow )
  {
    v11 = CurrentPrcb[-1].PrcbPad141[473];
    if ( !a2 )
    {
      v10 = *(_QWORD *)(v11 + 44);
      goto LABEL_29;
    }
    v10 = *(_QWORD *)(v11 + 52);
  }
  if ( !a2 )
  {
LABEL_29:
    v12 = 36048LL;
    if ( v9 )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( (v4 & 1) != 0 )
    KeBugCheckEx(0x111u, v4, *(_QWORD *)(v3 + 384), *(_QWORD *)(v3 + 360), v3);
LABEL_30:
  v12 = 35968LL;
LABEL_31:
  if ( (v4 & 4) != 0 )
  {
    _InterlockedAdd(&dword_140C2AFE4, 1u);
    v13 = *(_QWORD *)(&CurrentPrcb->CpuType + v12);
    if ( KiKvaShadow )
    {
      *(_QWORD *)(v10 + 16) = v13;
      *(_QWORD *)(v10 + 24) = CurrentPrcb->HalReserved[(unsigned __int64)v12 / 8];
      if ( (CurrentPrcb->HalReserved[(unsigned __int64)v12 / 8] & 3) != 0
        && CurrentPrcb->CurrentThread->Process->AddressPolicy != 1 )
      {
        _InterlockedAdd(&dword_140C2AFE8, 1u);
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentPrcb->ShadowFlags, 0);
        v14 = __readcr4();
        if ( (v14 & 0x20080) != 0 )
        {
          __writecr4(v14 ^ 0x80);
          __writecr4(v14);
        }
        else
        {
          v15 = __readcr3();
          __writecr3(v15);
        }
      }
    }
    else
    {
      *(_QWORD *)(v3 + 104) = v13;
    }
    *(_OWORD *)(v3 + 360) = *(_OWORD *)((char *)&CurrentPrcb->MxCsr + v12);
    *(_OWORD *)(v3 + 376) = *(_OWORD *)((char *)&CurrentPrcb->NextThread + v12);
    *(_QWORD *)(v3 + 392) = *(_QWORD *)(&CurrentPrcb->NestingLevel + v12);
    *(_QWORD *)(v3 + 48) = *(unsigned __int64 *)((char *)&CurrentPrcb->RspBase + v12);
    *(_QWORD *)(v3 + 56) = *(unsigned __int64 *)((char *)&CurrentPrcb->PrcbLock + v12);
    result = *(unsigned __int64 *)((char *)&CurrentPrcb->PriorityState + v12);
    *(_QWORD *)(v3 + 64) = result;
    _InterlockedAdd(&dword_140C2AFD4, 1u);
    *(_WORD *)((char *)&CurrentPrcb->CurrentThread + v12) = 0;
  }
  if ( !a2 )
  {
    _InterlockedAdd(&dword_140C2AFD0, 1u);
    *(_OWORD *)((char *)&CurrentPrcb->MxCsr + v12) = *(_OWORD *)(v3 + 360);
    *(_OWORD *)((char *)&CurrentPrcb->NextThread + v12) = *(_OWORD *)(v3 + 376);
    *(_QWORD *)(&CurrentPrcb->NestingLevel + v12) = *(_QWORD *)(v3 + 392);
    *(unsigned __int64 *)((char *)&CurrentPrcb->RspBase + v12) = *(_QWORD *)(v3 + 48);
    *(unsigned __int64 *)((char *)&CurrentPrcb->PrcbLock + v12) = *(_QWORD *)(v3 + 56);
    *(char **)((char *)&CurrentPrcb->PriorityState + v12) = *(char **)(v3 + 64);
    result = *(_QWORD *)(v3 + 104);
    *(_QWORD *)(&CurrentPrcb->CpuType + v12) = result;
    if ( KiKvaShadow )
    {
      *(_QWORD *)(&CurrentPrcb->CpuType + v12) = *(_QWORD *)(v10 + 16);
      result = *(_QWORD *)(v10 + 24);
      CurrentPrcb->HalReserved[(unsigned __int64)v12 / 8] = result;
    }
  }
  return result;
}
