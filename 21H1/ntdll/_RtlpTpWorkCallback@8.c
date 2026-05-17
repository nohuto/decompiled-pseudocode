/*
 * XREFs of _RtlpTpWorkCallback@8 @ 0x4B2E9340
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlSetThreadSubProcessTag@4 @ 0x4B2DF1C0 (_RtlSetThreadSubProcessTag@4.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 *     _TpCallbackMayRunLong@4 @ 0x4B2E9600 (_TpCallbackMayRunLong@4.c)
 *     _TpPoolReferenceExistingGlobalPool@0 @ 0x4B2E9657 (_TpPoolReferenceExistingGlobalPool@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _RtlpTpImpersonate@4 @ 0x4B385B57 (_RtlpTpImpersonate@4.c)
 *     _RtlTpETWCallbackDequeue@20 @ 0x4B385BB5 (_RtlTpETWCallbackDequeue@20.c)
 *     _RtlpTpETWCallbackStart@20 @ 0x4B385CA6 (_RtlpTpETWCallbackStart@20.c)
 *     _RtlpTpETWCallbackStop@20 @ 0x4B385D1F (_RtlpTpETWCallbackStop@20.c)
 */

void __stdcall RtlpTpWorkCallback(int a1, int a2)
{
  int v2; // ecx
  volatile signed __int32 *v3; // ecx
  unsigned int v4; // edx
  void *v5; // eax
  _GUID *p_ActivityId; // edi
  int v7; // esi
  int v8; // eax
  void (__thiscall *v9)(_DWORD, int); // edi
  int v10; // edi
  int v11; // esi
  void *v12; // edi
  int v13[9]; // [esp+10h] [ebp-6Ch] BYREF
  _DWORD *v14; // [esp+34h] [ebp-48h] BYREF
  _DWORD v15[4]; // [esp+38h] [ebp-44h] BYREF
  int v16; // [esp+48h] [ebp-34h]
  int v17; // [esp+4Ch] [ebp-30h]
  void *v18; // [esp+50h] [ebp-2Ch]
  unsigned int v19; // [esp+54h] [ebp-28h]
  void (__thiscall *v20)(_DWORD, int); // [esp+58h] [ebp-24h]
  int v21; // [esp+5Ch] [ebp-20h]
  volatile signed __int32 *v22; // [esp+60h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]

  v13[0] = 36;
  v13[1] = 1;
  memset(&v13[2], 0, 0x1Cu);
  v17 = 0;
  v16 = 0;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478;
  if ( *(_BYTE *)v2 )
    RtlTpETWCallbackDequeue(*(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 52));
  if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 28) & 0xC0) == 0 )
  {
    v11 = *(_DWORD *)(a2 + 20);
    if ( !v11 )
    {
      v11 = TpPoolReferenceExistingGlobalPool();
      v17 = v11;
      v16 = v11;
    }
    *(_DWORD *)(a1 + 72) = v11;
    TpCallbackMayRunLong(a1);
  }
  if ( *(_DWORD *)(a2 + 24) )
    RtlpTpImpersonate();
  v20 = *(void (__thiscall **)(_DWORD, int))(a2 + 32);
  v21 = *(_DWORD *)(a2 + 36);
  v3 = *(volatile signed __int32 **)(a2 + 40);
  v22 = v3;
  v15[2] = v3;
  v4 = *(_DWORD *)(a2 + 44);
  v19 = v4;
  v15[1] = v4;
  v5 = *(void **)(a2 + 52);
  v18 = v5;
  v15[3] = v5;
  if ( v5 )
  {
    RtlSetThreadSubProcessTag(v5);
    v3 = v22;
    v4 = v19;
  }
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 56);
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 60);
  *(_QWORD *)&p_ActivityId->Data2 = *(_QWORD *)(a2 + 64);
  if ( v3 != (volatile signed __int32 *)-1 )
    *(_DWORD *)(a2 + 40) = -1;
  if ( v4 )
    *(_DWORD *)(a2 + 44) = 0;
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 48), 0xFFFFFFFF) )
  {
    RtlpTpWorkUnposted(a2, *(_DWORD *)(a2 + 20));
    v3 = v22;
  }
  if ( v3 != (volatile signed __int32 *)-1 )
    RtlActivateActivationContextUnsafeFast(v13, (int)v3);
  v7 = 2147353478;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478;
  v9 = v20;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(v20, v21, v18);
  TppStartThreadData((int *)&v14, (int)v9, v21, (int)NtCurrentTeb()->SubProcessTag);
  ms_exc.registration.TryLevel = 0;
  v9(v9, v21);
  ms_exc.registration.TryLevel = -2;
  v10 = v17;
  if ( v22 != (volatile signed __int32 *)-1 )
  {
    RtlDeactivateActivationContextUnsafeFast(v13);
    RtlReleaseActivationContext(v22);
  }
  if ( v19 )
    LdrUnloadDll(v19);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v15[0] = 0;
    ZwSetInformationThread(-2, 5, v15, 4);
  }
  if ( v10 )
  {
    if ( v10 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TppRaiseInvalidParameter();
    }
    else
    {
      TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, (int)&TppPoolpGlobalPoolLock);
    }
  }
  v12 = v18;
  if ( v18 )
  {
    RtlSetThreadSubProcessTag(0);
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStop(v20, v21, v12);
    TppCompleteThreadData(v14);
  }
}
