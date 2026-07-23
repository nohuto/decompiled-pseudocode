/*
 * XREFs of KiRaiseException @ 0x14051C390
 * Callers:
 *     NtRaiseException @ 0x1403F6840 (NtRaiseException.c)
 * Callees:
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     KeVerifyContextXStateCetU @ 0x14032BCE8 (KeVerifyContextXStateCetU.c)
 *     RtlInitializeExtendedContext @ 0x14032EDD0 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14032EE54 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength @ 0x14032FAF0 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextRecord @ 0x14032FB88 (KeVerifyContextRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x140369FD8 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x1403F5F70 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpReadExtendedContext @ 0x1406F27F0 (RtlpReadExtendedContext.c)
 */

int __fastcall KiRaiseException(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char PreviousMode; // r12
  __int64 v8; // rax
  int result; // eax
  ULONG v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  int v15; // edx
  int v16; // ecx
  CONTEXT_CHUNK *p_XState; // rsi
  __int64 v18; // rax
  unsigned int v19; // esi
  char *v20; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int v22; // r15d
  unsigned __int8 CurrentIrql; // r14
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int64 v26; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  EXCEPTION_RECORD *v29; // rcx
  unsigned __int8 v30; // si
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  __int64 v35; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  void *Src; // [rsp+38h] [rbp+8h]
  PCONTEXT_EX ContextEx; // [rsp+40h] [rbp+10h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp+18h] BYREF
  __int64 v41; // [rsp+50h] [rbp+20h]
  unsigned int v42; // [rsp+58h] [rbp+28h]
  __int128 v43; // [rsp+60h] [rbp+30h] BYREF
  __int64 v44; // [rsp+70h] [rbp+40h]
  _DWORD v45[40]; // [rsp+80h] [rbp+50h] BYREF

  v41 = a3;
  Src = a1;
  ContextEx = 0LL;
  v40 = 0LL;
  ContextFlags = 0;
  memset(v45, 0, 0x98uLL);
  ContextLength = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    v22 = 1;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
    }
    if ( PreviousMode )
    {
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        if ( (int)KeVerifyContextXStateCetU((__int64)CurrentThread, a2, &v40) < 0
          || (v43 = 0LL,
              v44 = 0LL,
              (int)KeVerifyContextRecord((__int64)CurrentThread, a2, v24, (__int64)&v43, (__int64)&v40) < 0) )
        {
          *((_DWORD *)Src + 1) |= 1u;
          v22 = 0;
        }
      }
    }
    v25 = v22 == 0;
    v26 = v41;
    if ( !v25 )
    {
      LOBYTE(v35) = PreviousMode;
      KeContextToKframes(a4, v41, a2, *(_DWORD *)(a2 + 48), v35);
    }
    if ( !CurrentIrql )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
          SchedulerAssist[5] &= 0xFFFF0001;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(0LL);
    }
    v29 = (EXCEPTION_RECORD *)Src;
    *(_DWORD *)Src &= ~0x10000000u;
    KiDispatchException(v29, v26, a4, PreviousMode, a5);
    if ( PreviousMode
      && (CurrentThread->Header.Reserved1 & 2) != 0
      && *(void **)(a4 + 360) != CurrentThread->Process->InstrumentationCallback )
    {
      v30 = KeGetCurrentIrql();
      __writecr8(1uLL);
      KiSetupForInstrumentationReturn(a4);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && v30 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << (v30 + 1));
            v25 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick((__int64)v32);
          }
        }
      }
      __writecr8(v30);
    }
    return 0;
  }
  v8 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  ContextFlags = *(_DWORD *)v8;
  result = RtlpSanitizeContextFlags(&ContextFlags, PreviousMode);
  if ( result >= 0 )
  {
    v10 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v11 = ContextLength + 15LL;
      if ( v11 <= ContextLength )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = alloca(v12);
      v14 = alloca(v12);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v10, &ContextEx);
      if ( result >= 0 )
      {
        p_XState = &ContextEx[-39].XState;
        LOBYTE(v15) = 1;
        result = RtlpReadExtendedContext(v16, v15, (_DWORD)ContextEx, v10, a2, 0LL);
        if ( result >= 0 )
        {
          a2 = (__int64)p_XState;
          v18 = (__int64)Src + 24;
          if ( (unsigned __int64)Src + 24 >= 0x7FFFFFFF0000LL )
            v18 = 0x7FFFFFFF0000LL;
          v19 = *(_DWORD *)v18;
          v42 = v19;
          if ( v19 > 0xF )
            return -1073741811;
          ContextLength = 8 * v19 + 32;
          v20 = (char *)Src + ContextLength;
          if ( (unsigned __int64)v20 > 0x7FFFFFFF0000LL || v20 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
          memmove(v45, Src, 8 * v19 + 32);
          Src = v45;
          v45[6] = v19;
          goto LABEL_18;
        }
      }
    }
  }
  return result;
}
