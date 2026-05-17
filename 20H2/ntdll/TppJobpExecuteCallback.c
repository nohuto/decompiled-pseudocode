/*
 * XREFs of TppJobpExecuteCallback @ 0x18007FE90
 * Callers:
 *     <none>
 * Callees:
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180020450 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppStartThreadData @ 0x1800205F0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180020680 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x18005299C (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801128D4 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112970 (RtlpTpETWCallbackStop.c)
 */

void __fastcall TppJobpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  volatile signed __int64 *v9; // r14
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = (volatile signed __int64 *)(a2 + 128);
  TppBarrierAdjust((volatile signed __int64 *)(a2 + 128), 1, 0LL, a4);
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 208);
    if ( !v12 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(a1, v5);
      v13 = 2147353478LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v14 = 2147353478LL;
      if ( *(_BYTE *)v14 )
        RtlpTpETWCallbackStart(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v16, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v15 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v15;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
        v15,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 556;
      if ( *(_BYTE *)v13 )
        RtlpTpETWCallbackStop(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v16);
      return;
    }
    if ( (int)LdrAddRefDll(0, *(_QWORD *)(a2 + 208)) >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v12;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, -1, 0LL, v10);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
