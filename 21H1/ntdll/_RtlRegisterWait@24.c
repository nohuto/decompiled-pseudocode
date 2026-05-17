/*
 * XREFs of _RtlRegisterWait@24 @ 0x4B2B2020
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpInitializeData@12 @ 0x4B2B1FE2 (_RtlpTpInitializeData@12.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlRegisterWait(_DWORD *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int result; // eax
  int v7; // esi
  _DWORD *Heap; // eax
  _DWORD *v9; // edi
  int v10; // eax
  _DWORD v11[6]; // [esp+10h] [ebp-50h] BYREF
  int (__stdcall *v12)(int, int); // [esp+28h] [ebp-38h]
  int v13; // [esp+2Ch] [ebp-34h]
  int v14; // [esp+30h] [ebp-30h]
  int v15; // [esp+34h] [ebp-2Ch]
  int v16; // [esp+38h] [ebp-28h] BYREF
  _DWORD *v17; // [esp+3Ch] [ebp-24h]
  int v18; // [esp+40h] [ebp-20h]
  char v19; // [esp+47h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v19 = 0;
  result = -1073741823;
  v18 = -1073741823;
  v16 = 0;
  v17 = 0;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return result;
  if ( !a2 || a2 == -1 || a2 == -2 || !a3 )
    return -1073741811;
  *a1 = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = RtlpTpRevertCapture((HANDLE *)&v16, a6 & 0x100);
  v18 = v7;
  if ( v7 < 0 )
  {
    v9 = v17;
  }
  else
  {
    Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56);
    v9 = Heap;
    v17 = Heap;
    if ( Heap )
    {
      Heap[6] = 0;
      v7 = RtlpTpInitializeData(Heap, a6, v16);
      v18 = v7;
      if ( v7 < 0 )
        goto LABEL_18;
      v19 = 1;
      v9[2] = 0;
      v9[3] = 0;
      v9[4] = a3;
      v9[5] = a4;
      v9[7] = a2;
      if ( a5 == -1 )
      {
        v9[8] = 0;
        v9[9] = 0;
        v9[10] = 0;
      }
      else
      {
        v9[8] = a5;
        v9[9] = 0;
        *((_QWORD *)v9 + 4) = -10000LL * a5;
        v9[10] = v9 + 8;
      }
      v9[11] = 0;
      v9[12] = 0;
      v11[0] = 3;
      memset(&v11[1], 0, 20);
      v12 = 0;
      v13 = 0;
      v14 = 1;
      v15 = 40;
      v10 = 0;
      if ( (a6 & 0xC4) != 0 )
      {
        v10 = 2;
        v13 = 2;
      }
      if ( (a6 & 0x10) != 0 )
        v13 = v10 | 1;
      v12 = RtlpTpWaitFinalizationCallback;
      v7 = TpAllocWait(v9 + 6, RtlpTpWaitCallback, v9, v11);
      v18 = v7;
      if ( v7 < 0 )
        goto LABEL_18;
      RtlAcquireSRWLockExclusive(v9 + 2);
      ms_exc.registration.TryLevel = 1;
      *a1 = v9;
      TpSetWaitEx(v9[6], a2, v9[10], 0);
      ms_exc.registration.TryLevel = 0;
      RtlReleaseSRWLockExclusive(v9 + 2);
      v9 = 0;
      v17 = 0;
      v7 = 0;
    }
    else
    {
      v7 = -1073741801;
    }
    v18 = v7;
  }
LABEL_18:
  ms_exc.registration.TryLevel = -2;
  if ( v9 )
  {
    if ( v19 )
    {
      if ( *v9 )
        NtClose((HANDLE)*v9);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    v17 = 0;
    v7 = v18;
  }
  RtlpTpResumeImpersonation(v16, 1261117879);
  return v7;
}
