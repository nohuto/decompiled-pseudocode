/*
 * XREFs of ObpCaptureObjectName @ 0x14064B4D0
 * Callers:
 *     ObpCaptureObjectCreateInformation @ 0x14064B260 (ObpCaptureObjectCreateInformation.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureObjectName(char a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int16 v7; // di
  unsigned int v8; // r14d
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // rdi
  _DWORD *PoolWithTag; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  unsigned int v14; // [rsp+24h] [rbp-64h]
  void *Src[2]; // [rsp+48h] [rbp-40h]

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)a3 = 0;
  v14 = 0;
  if ( a1 && KeGetCurrentThread()->PreviousMode )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    LODWORD(Src[0]) = *(_DWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
    Src[1] = (void *)v5;
    if ( (unsigned __int16)*(_DWORD *)a2 )
    {
      if ( (v5 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = v5 + (unsigned __int16)*(_DWORD *)a2;
      if ( v6 > 0x7FFFFFFF0000LL || v6 < v5 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a2;
  }
  if ( LOWORD(Src[0]) )
  {
    v7 = (__int16)Src[0];
    if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) == 65534 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      if ( (unsigned int)LOWORD(Src[0]) + 2 < LOWORD(Src[0]) )
        return (unsigned int)-1073741670;
      v8 = LOWORD(Src[0]) + 2;
      if ( a4 && v8 <= 0xF8 )
      {
        LOWORD(v8) = 248;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[5].P;
        ++P->TotalAllocates;
        PoolWithTag = RtlpInterlockedPopEntrySList(&P->ListHead);
        if ( !PoolWithTag )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[5].L;
          ++L->TotalAllocates;
          PoolWithTag = RtlpInterlockedPopEntrySList(&L->ListHead);
          if ( !PoolWithTag )
          {
            ++L->AllocateMisses;
            PoolWithTag = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                      (unsigned int)L->Type,
                                      L->Size,
                                      L->Tag);
          }
        }
        if ( PoolWithTag )
          *PoolWithTag = CurrentPrcb->Number;
        v7 = (__int16)Src[0];
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x6D4E624Fu);
      }
      *(_WORD *)a3 = v7;
      *(_WORD *)(a3 + 2) = v8;
      *(_QWORD *)(a3 + 8) = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src[1], LOWORD(Src[0]));
        *((_WORD *)PoolWithTag + ((unsigned __int64)LOWORD(Src[0]) >> 1)) = 0;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v14;
}
