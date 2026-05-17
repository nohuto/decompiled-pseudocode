/*
 * XREFs of TppAlpcpExecuteCallback @ 0x1800200D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x180020500 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlSetThreadSubProcessTag @ 0x180020570 (RtlSetThreadSubProcessTag.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppIteWakeWaiters @ 0x1800549DC (TppIteWakeWaiters.c)
 *     TpCallbackMayRunLong @ 0x18006FF70 (TpCallbackMayRunLong.c)
 *     NtAlpcSetInformation @ 0x18009E240 (NtAlpcSetInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801128D4 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180112970 (RtlpTpETWCallbackStop.c)
 */

struct _PEB *__fastcall TppAlpcpExecuteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  signed __int32 v7; // r8d
  int v8; // eax
  signed __int32 v9; // edx
  signed __int32 v10; // r9d
  char v11; // r15
  signed __int64 v12; // rbx
  signed __int64 v13; // rdi
  signed __int64 v14; // rbx
  __int64 v15; // r13
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  _DWORD *SharedData; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v25; // eax
  unsigned int v26; // eax
  _QWORD *v27; // r8
  struct _PEB *result; // rax
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbx
  int v33; // [rsp+88h] [rbp+10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h]

  v34 = a3;
  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    result = (struct _PEB *)LdrAddRefDll(0, *(_QWORD *)(a2 + 208));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a2 + 216);
      v7 = *(_DWORD *)(a2 + 284);
      if ( !v6 || (v8 = *(_DWORD *)(v6 + 440)) == 0 )
        v8 = MEMORY[0x7FFE03C0];
      v9 = v8 + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v10 = v8 + v9;
      if ( v7 >= v9 && v7 <= v8 + v10 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v10, v7) )
      {
        v31 = *(_QWORD *)(a2 + 272);
        v33 = v8 + v9;
        NtAlpcSetInformation(v31, 8LL, &v33);
      }
    }
  }
  v11 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v12 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v11 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
      v11 = 0;
    }
    v13 = v12;
    v14 = (v12 ^ (v12 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v12;
    if ( v13 < 0 && (v14 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v14 &= ~0x8000000000000000uLL;
      v11 = 1;
      RtlAcquireSRWLockExclusive(a2 + 136);
    }
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v14, v13);
  }
  while ( v13 != v12 );
  v15 = v34;
  v16 = 0LL;
  if ( v11 )
  {
    v32 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 136));
    TppIteWakeWaiters(v32);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v17 = *(_QWORD *)(a2 + 176);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 80) = v17;
    RtlSetThreadSubProcessTag();
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  RtlSetThreadWorkOnBehalfTicket(a2 + 200);
  v18 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v20 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v20 = 2147353478LL;
  if ( *(_BYTE *)v20 )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(a2 + 216),
      a2,
      *(_QWORD *)(a2 + 152),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 176));
  v21 = *(_QWORD *)(a2 + 176);
  v22 = *(_QWORD *)(a2 + 160);
  v23 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v25 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v26 = ((_BYTE)v25 - 1) & 1;
    ThreadPoolData[3] = v26;
    v27 = &ThreadPoolData[8 * v26];
    v16 = v27 + 4;
    v27[4] = v23;
    v27[5] = v22;
    v27[6] = v21;
    v27[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v23 = *(_QWORD *)(a2 + 152);
  }
  *(_QWORD *)(a1 + 88) = v23;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = a2;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, v15);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(a2 + 152))(a1, *(_QWORD *)(a2 + 160), a2, v21);
  }
  result = NtCurrentPeb();
  v29 = result->SharedData;
  if ( v29 && *v29 )
  {
    result = NtCurrentPeb();
    v18 = (__int64)result->SharedData + 556;
  }
  if ( *(_BYTE *)v18 )
    result = (struct _PEB *)RtlpTpETWCallbackStop(
                              *(_QWORD *)(a2 + 216),
                              a2,
                              *(_QWORD *)(a2 + 152),
                              *(_QWORD *)(a2 + 160),
                              *(_QWORD *)(a2 + 176));
  if ( v16 )
  {
    v30 = v16[3];
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v30 )
    {
      result = (struct _PEB *)((char *)result - v30);
      v16[3] = result;
    }
  }
  return result;
}
