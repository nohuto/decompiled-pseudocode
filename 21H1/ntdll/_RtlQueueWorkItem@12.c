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

int __stdcall RtlQueueWorkItem(int a1, int a2, unsigned int a3)
{
  int v3; // ebp
  int Heap; // eax
  int v5; // esi
  void *SubProcessTag; // ecx
  _GUID *p_ActivityId; // esi
  int v8; // edi
  int InformationActivationContext; // eax
  unsigned int v10; // eax
  int v11; // eax
  volatile signed __int32 *v13; // ecx
  void *v14; // edx
  int *v15; // ecx
  _DWORD v16[7]; // [esp+10h] [ebp-7Ch] BYREF
  int v17; // [esp+2Ch] [ebp-60h]
  int v18; // [esp+30h] [ebp-5Ch]
  int v19; // [esp+34h] [ebp-58h]
  int v20; // [esp+38h] [ebp-54h] BYREF
  int v21; // [esp+3Ch] [ebp-50h]
  int v22; // [esp+40h] [ebp-4Ch]
  int v23; // [esp+44h] [ebp-48h]
  int v24; // [esp+48h] [ebp-44h] BYREF
  int v25; // [esp+4Ch] [ebp-40h]
  volatile signed __int32 *v26; // [esp+50h] [ebp-3Ch]
  _DWORD *v27; // [esp+54h] [ebp-38h]
  HANDLE v28; // [esp+58h] [ebp-34h] BYREF
  int *v29; // [esp+5Ch] [ebp-30h]
  _DWORD *v30; // [esp+60h] [ebp-2Ch]
  int v31; // [esp+64h] [ebp-28h]
  int v32; // [esp+68h] [ebp-24h]
  int v33; // [esp+6Ch] [ebp-20h]
  char v34; // [esp+70h] [ebp-1Ch]
  char v35; // [esp+71h] [ebp-1Bh]
  char v36; // [esp+72h] [ebp-1Ah]
  char v37; // [esp+73h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v24 = 0;
  v25 = 0;
  v37 = 0;
  v35 = 0;
  v34 = 0;
  v36 = 0;
  v32 = -1073741823;
  v28 = 0;
  v33 = 0;
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    ms_exc.registration.TryLevel = 0;
    v32 = RtlpTpRevertCapture(&v28, a3 & 0x100);
    if ( v32 < 0 )
    {
      v5 = v33;
    }
    else
    {
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 72);
      v5 = Heap;
      v33 = Heap;
      if ( !Heap )
      {
        v32 = -1073741801;
        goto LABEL_21;
      }
      v32 = RtlpTpInitializeData((_DWORD *)(Heap + 24), a3, (int)v28);
      if ( v32 < 0 )
        goto LABEL_21;
      v34 = 1;
      SubProcessTag = NtCurrentTeb()->SubProcessTag;
      *(_DWORD *)(v33 + 52) = SubProcessTag;
      p_ActivityId = &NtCurrentTeb()->ActivityId;
      v31 = v33;
      v8 = v33 + 56;
      *(_DWORD *)(v33 + 56) = p_ActivityId->Data1;
      p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
      v8 += 4;
      *(_DWORD *)v8 = p_ActivityId->Data1;
      *(_QWORD *)(v8 + 4) = *(_QWORD *)&p_ActivityId->Data2;
      InformationActivationContext = RtlQueryInformationActivationContext(
                                       (int)SubProcessTag,
                                       v3,
                                       1,
                                       0,
                                       0,
                                       1,
                                       (int)&v24,
                                       8u,
                                       0);
      v32 = InformationActivationContext;
      v5 = v31;
      if ( InformationActivationContext < 0 )
      {
        if ( InformationActivationContext != -1072365557 )
          goto LABEL_21;
        *(_DWORD *)(v31 + 40) = -1;
        v32 = 0;
      }
      if ( (v25 & 1) != 0 )
      {
        RtlReleaseActivationContext((volatile signed __int32 *)v24);
        v24 = -1;
      }
      *(_DWORD *)(v5 + 40) = v24;
      v37 = 1;
      v26 = (volatile signed __int32 *)(v5 + 48);
      *(_DWORD *)(v5 + 48) = 2;
      v30 = (_DWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 32) = a1;
      v27 = (_DWORD *)(v5 + 36);
      *(_DWORD *)(v5 + 36) = a2;
      v29 = (int *)(v5 + 20);
      *(_DWORD *)(v5 + 20) = 0;
      v16[0] = 3;
      memset(&v16[1], 0, 24);
      v17 = 0;
      v18 = 1;
      v19 = 40;
      if ( (a3 & 0xC0) != 0 )
        v17 = 2;
      *(_DWORD *)v5 = RtlpTpWorkTaskCallbacks;
      *(_DWORD *)(v5 + 4) = 0;
      v32 = TpReserveTaskPost(v16);
      if ( v32 >= 0 )
      {
        v36 = 1;
        if ( *v30 < dword_4B3A9374[0] || *v30 >= (unsigned int)(dword_4B3A9374[0] + dword_4B3A9378[0]) )
        {
          RtlpxLookupFunctionTable(&v20, (_DWORD *)*v30, v3);
        }
        else
        {
          v20 = dword_4B3A9370[0];
          v21 = dword_4B3A9370[1];
          v22 = dword_4B3A9370[2];
          v23 = dword_4B3A9370[3];
          v5 = v31;
        }
        v10 = v21;
        *(_DWORD *)(v5 + 44) = v21;
        if ( v10 )
        {
          LdrAddRefDll(0, v10);
          v35 = 1;
          if ( RtlGetCurrentServiceSessionId() )
          {
            v11 = (int)NtCurrentPeb()->SharedData + 556;
            v5 = v33;
          }
          else
          {
            v11 = 2147353478;
          }
          if ( *(_BYTE *)v11 )
          {
            v5 = v33;
            RtlpTpETWCallbackEnqueue(*v30, *v27, NtCurrentTeb()->SubProcessTag);
          }
          TpPostTask(v5, *v29, 1, (int)v16);
          if ( !_InterlockedExchangeAdd(v26, 0xFFFFFFFF) )
            RtlpTpWorkUnposted(v5, *v29);
          v5 = 0;
          v33 = 0;
          v32 = 0;
        }
      }
    }
LABEL_21:
    ms_exc.registration.TryLevel = -2;
    if ( !v5 )
    {
LABEL_22:
      RtlpTpResumeImpersonation(v28);
      return v32;
    }
    if ( v37 && *(_DWORD *)(v5 + 40) != -1 )
      RtlReleaseActivationContext(*(volatile signed __int32 **)(v5 + 40));
    if ( v36 )
    {
      v13 = *(volatile signed __int32 **)(v5 + 20);
      if ( !v13 )
      {
        v13 = (volatile signed __int32 *)TppPoolpSerializedPool;
        if ( (v17 & 2) == 0 )
          v13 = (volatile signed __int32 *)TppPoolpGlobalPool;
      }
      if ( v13 == (volatile signed __int32 *)TppPoolpGlobalPool )
      {
        v14 = &TppPoolpGlobalPoolLock;
        v15 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( v13 != (volatile signed __int32 *)TppPoolpSerializedPool )
        {
          if ( !_InterlockedDecrement(v13) )
            TppPoolpFree((int)v13);
          goto LABEL_45;
        }
        v14 = &TppPoolpSerializedPoolLock;
        v15 = &TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool((signed __int32 **)v15, (int)v14);
    }
LABEL_45:
    if ( v35 )
      LdrUnloadDll(*(_DWORD *)(v5 + 44));
    if ( v34 )
    {
      if ( *(_DWORD *)(v5 + 24) )
        NtClose(*(HANDLE *)(v5 + 24));
    }
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
    goto LABEL_22;
  }
  return -1073741823;
}
