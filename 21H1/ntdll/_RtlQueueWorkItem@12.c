/*
 * XREFs of _RtlQueueWorkItem@12 @ 0x4B2E8AE0
 * Callers:
 *     <none>
 * Callees:
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpInitializeData@12 @ 0x4B2B1FE2 (_RtlpTpInitializeData@12.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _TpPostTask@16 @ 0x4B2C1C3F (_TpPostTask@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _TpReserveTaskPost@12 @ 0x4B2E8D1F (_TpReserveTaskPost@12.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpTpETWCallbackEnqueue@20 @ 0x4B385C2D (_RtlpTpETWCallbackEnqueue@20.c)
 */

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  int v3; // ebp
  HANDLE *Heap; // eax
  char *v5; // esi
  _GUID *p_ActivityId; // esi
  _DWORD *v7; // edi
  NTSTATUS v8; // eax
  PVOID v9; // eax
  int v10; // eax
  volatile signed __int32 *v12; // ecx
  _RTL_SRWLOCK *v13; // edx
  int *v14; // ecx
  SIZE_T v15; // [esp-4h] [ebp-90h]
  ULONG_PTR *v16; // [esp+0h] [ebp-8Ch]
  _DWORD v17[7]; // [esp+10h] [ebp-7Ch] BYREF
  int v18; // [esp+2Ch] [ebp-60h]
  int v19; // [esp+30h] [ebp-5Ch]
  int v20; // [esp+34h] [ebp-58h]
  int v21; // [esp+38h] [ebp-54h] BYREF
  PVOID DllHandle; // [esp+3Ch] [ebp-50h]
  int v23; // [esp+40h] [ebp-4Ch]
  int v24; // [esp+44h] [ebp-48h]
  int ActivationContextInformation; // [esp+48h] [ebp-44h] BYREF
  int v26; // [esp+4Ch] [ebp-40h]
  volatile signed __int32 *v27; // [esp+50h] [ebp-3Ch]
  _DWORD *v28; // [esp+54h] [ebp-38h]
  HANDLE TokenHandle; // [esp+58h] [ebp-34h] BYREF
  _RTL_SRWLOCK **v30; // [esp+5Ch] [ebp-30h]
  PVOID *v31; // [esp+60h] [ebp-2Ch]
  PVOID BaseAddress; // [esp+64h] [ebp-28h]
  int v33; // [esp+68h] [ebp-24h]
  HANDLE *v34; // [esp+6Ch] [ebp-20h]
  char v35; // [esp+70h] [ebp-1Ch]
  char v36; // [esp+71h] [ebp-1Bh]
  char v37; // [esp+72h] [ebp-1Ah]
  char v38; // [esp+73h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  ActivationContextInformation = 0;
  v26 = 0;
  v38 = 0;
  v36 = 0;
  v35 = 0;
  v37 = 0;
  v33 = -1073741823;
  TokenHandle = 0;
  v34 = 0;
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    ms_exc.registration.TryLevel = 0;
    v33 = RtlpTpRevertCapture(&TokenHandle, Flags & 0x100);
    if ( v33 < 0 )
    {
      v5 = (char *)v34;
    }
    else
    {
      LODWORD(v15) = 72;
      Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      v5 = (char *)Heap;
      v34 = Heap;
      if ( !Heap )
      {
        v33 = -1073741801;
        goto LABEL_21;
      }
      v33 = RtlpTpInitializeData(Heap + 6, Flags, TokenHandle);
      if ( v33 < 0 )
        goto LABEL_21;
      v35 = 1;
      v34[13] = NtCurrentTeb()->SubProcessTag;
      p_ActivityId = &NtCurrentTeb()->ActivityId;
      BaseAddress = v34;
      v7 = v34 + 14;
      v34[14] = (HANDLE)p_ActivityId->Data1;
      p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
      *++v7 = p_ActivityId->Data1;
      *(_QWORD *)(v7 + 1) = *(_QWORD *)&p_ActivityId->Data2;
      v8 = RtlQueryInformationActivationContext(
             1u,
             0,
             0,
             ActivationContextBasicInformation,
             &ActivationContextInformation,
             8uLL,
             v16);
      v33 = v8;
      v5 = (char *)BaseAddress;
      if ( v8 < 0 )
      {
        if ( v8 != -1072365557 )
          goto LABEL_21;
        *((_DWORD *)BaseAddress + 10) = -1;
        v33 = 0;
      }
      if ( (v26 & 1) != 0 )
      {
        RtlReleaseActivationContext((PACTIVATION_CONTEXT)ActivationContextInformation);
        ActivationContextInformation = -1;
      }
      *((_DWORD *)v5 + 10) = ActivationContextInformation;
      v38 = 1;
      v27 = (volatile signed __int32 *)(v5 + 48);
      *((_DWORD *)v5 + 12) = 2;
      v31 = (PVOID *)(v5 + 32);
      *((_DWORD *)v5 + 8) = Function;
      v28 = v5 + 36;
      *((_DWORD *)v5 + 9) = Context;
      v30 = (_RTL_SRWLOCK **)(v5 + 20);
      *((_DWORD *)v5 + 5) = 0;
      v17[0] = 3;
      memset(&v17[1], 0, 24);
      v18 = 0;
      v19 = 1;
      v20 = 40;
      if ( (Flags & 0xC0) != 0 )
        v18 = 2;
      *(_DWORD *)v5 = &RtlpTpWorkTaskCallbacks;
      *((_DWORD *)v5 + 1) = 0;
      v33 = TpReserveTaskPost(v17);
      if ( v33 >= 0 )
      {
        v37 = 1;
        if ( (unsigned int)*v31 < dword_4B3A9374[0] || (unsigned int)*v31 >= dword_4B3A9374[0] + dword_4B3A9378[0] )
        {
          RtlpxLookupFunctionTable(*v31, (int)&v21, v3, 0);
        }
        else
        {
          v21 = dword_4B3A9370[0];
          DllHandle = (PVOID)dword_4B3A9370[1];
          v23 = dword_4B3A9370[2];
          v24 = dword_4B3A9370[3];
          v5 = (char *)BaseAddress;
        }
        v9 = DllHandle;
        *((_DWORD *)v5 + 11) = DllHandle;
        if ( v9 )
        {
          LdrAddRefDll(0, v9);
          v36 = 1;
          if ( RtlGetCurrentServiceSessionId() )
          {
            v10 = (int)NtCurrentPeb()->SharedData + 556;
            v5 = (char *)v34;
          }
          else
          {
            v10 = 2147353478;
          }
          if ( *(_BYTE *)v10 )
          {
            v5 = (char *)v34;
            RtlpTpETWCallbackEnqueue(*v31, *v28, NtCurrentTeb()->SubProcessTag);
          }
          TpPostTask((int)v5, *v30, 1, (int)v17);
          if ( !_InterlockedExchangeAdd(v27, 0xFFFFFFFF) )
            RtlpTpWorkUnposted(v5, (int)*v30);
          v5 = 0;
          v34 = 0;
          v33 = 0;
        }
      }
    }
LABEL_21:
    ms_exc.registration.TryLevel = -2;
    if ( !v5 )
    {
LABEL_22:
      RtlpTpResumeImpersonation(TokenHandle);
      return v33;
    }
    if ( v38 && *((_DWORD *)v5 + 10) != -1 )
      RtlReleaseActivationContext(*((PACTIVATION_CONTEXT *)v5 + 10));
    if ( v37 )
    {
      v12 = (volatile signed __int32 *)*((_DWORD *)v5 + 5);
      if ( !v12 )
      {
        v12 = (volatile signed __int32 *)TppPoolpSerializedPool;
        if ( (v18 & 2) == 0 )
          v12 = (volatile signed __int32 *)TppPoolpGlobalPool;
      }
      if ( v12 == (volatile signed __int32 *)TppPoolpGlobalPool )
      {
        v13 = &TppPoolpGlobalPoolLock;
        v14 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( v12 != (volatile signed __int32 *)TppPoolpSerializedPool )
        {
          if ( !_InterlockedDecrement(v12) )
            TppPoolpFree((int)v12);
          goto LABEL_45;
        }
        v13 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
        v14 = &TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool((signed __int32 **)v14, v13);
    }
LABEL_45:
    if ( v36 )
      LdrUnloadDll(*((PVOID *)v5 + 11));
    if ( v35 )
    {
      if ( *((_DWORD *)v5 + 6) )
        NtClose(*((HANDLE *)v5 + 6));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    goto LABEL_22;
  }
  return -1073741823;
}
