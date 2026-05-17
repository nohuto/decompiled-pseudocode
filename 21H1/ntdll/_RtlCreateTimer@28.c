/*
 * XREFs of _RtlCreateTimer@28 @ 0x4B2AA4F0
 * Callers:
 *     _RtlSetTimer@28 @ 0x4B3851F0 (_RtlSetTimer@28.c)
 * Callees:
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpInitializeData@12 @ 0x4B2B1FE2 (_RtlpTpInitializeData@12.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpAllocTimer@16 @ 0x4B2B4570 (_TpAllocTimer@16.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlCreateTimer(int a1, _DWORD *a2, int a3, int a4, unsigned int a5, int a6, __int16 a7)
{
  int result; // eax
  int v8; // ebx
  int Heap; // eax
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD v14[6]; // [esp+10h] [ebp-5Ch] BYREF
  int (__stdcall *v15)(int, int); // [esp+28h] [ebp-44h]
  int v16; // [esp+2Ch] [ebp-40h]
  int v17; // [esp+30h] [ebp-3Ch]
  int v18; // [esp+34h] [ebp-38h]
  __int64 v19; // [esp+38h] [ebp-34h] BYREF
  int v20; // [esp+40h] [ebp-2Ch]
  int v21; // [esp+44h] [ebp-28h] BYREF
  int v22; // [esp+48h] [ebp-24h]
  int v23; // [esp+4Ch] [ebp-20h]
  char v24; // [esp+53h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v24 = 1;
  result = -1073741823;
  v23 = -1073741823;
  v21 = 0;
  v22 = 0;
  v20 = a1;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return result;
  *a2 = 0;
  ms_exc.registration.TryLevel = 0;
  v8 = RtlpTpRevertCapture(&v21, a7 & 0x100);
  v23 = v8;
  if ( v8 < 0 )
  {
    v10 = v22;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 52);
    v10 = Heap;
    v22 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 32) = 0;
      *(_DWORD *)(Heap + 48) = 0;
      v8 = RtlpTpInitializeData(v21);
      v23 = v8;
      if ( v8 < 0 )
        goto LABEL_13;
      v24 = 1;
      *(_DWORD *)(v10 + 16) = a3;
      *(_DWORD *)(v10 + 20) = a4;
      *(_DWORD *)(v10 + 24) = 0;
      *(_BYTE *)(v10 + 44) = a6 != 0;
      *(_DWORD *)(v10 + 28) = a1;
      *(_DWORD *)(v10 + 36) = 0;
      *(_DWORD *)(v10 + 40) = 0;
      v14[0] = 3;
      memset(&v14[1], 0, 20);
      v15 = 0;
      v16 = 0;
      v17 = 1;
      v18 = 40;
      v11 = 0;
      if ( (a7 & 0xE0) != 0 )
      {
        v11 = 2;
        v16 = 2;
      }
      if ( (a7 & 0x10) != 0 )
        v16 = v11 | 1;
      v15 = RtlpTpTimerFinalizationCallback;
      v8 = TpAllocTimer(v10 + 32, RtlpTpTimerCallback, v10, v14);
      v23 = v8;
      if ( v8 < 0 )
        goto LABEL_13;
      v19 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive(a1 + 4);
      ms_exc.registration.TryLevel = 1;
      v12 = (_DWORD *)(a1 + 12);
      v13 = *(_DWORD *)(a1 + 12);
      if ( *(_DWORD *)(v13 + 4) != a1 + 12 )
        __fastfail(3u);
      *(_DWORD *)v10 = v13;
      *(_DWORD *)(v10 + 4) = v12;
      *(_DWORD *)(v13 + 4) = v10;
      *v12 = v10;
      *a2 = v10;
      TpSetTimerEx(*(_DWORD *)(v10 + 32), &v19, a6, 0);
      ms_exc.registration.TryLevel = 0;
      RtlReleaseSRWLockExclusive(a1 + 4);
      v10 = 0;
      v22 = 0;
      v8 = 0;
    }
    else
    {
      v8 = -1073741801;
    }
    v23 = v8;
  }
LABEL_13:
  ms_exc.registration.TryLevel = -2;
  if ( v10 )
  {
    if ( v24 )
    {
      if ( *(_DWORD *)(v10 + 8) )
        NtClose(*(HANDLE *)(v10 + 8));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    v8 = v23;
  }
  RtlpTpResumeImpersonation(v21, 1261086354);
  return v8;
}
