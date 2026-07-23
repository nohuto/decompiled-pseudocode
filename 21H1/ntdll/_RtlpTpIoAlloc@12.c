/*
 * XREFs of _RtlpTpIoAlloc@12 @ 0x4B3855A8
 * Callers:
 *     _RtlpTpIoLookup@12 @ 0x4B385A3D (_RtlpTpIoLookup@12.c)
 * Callees:
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TpBindFileToDirect@12 @ 0x4B2E713D (_TpBindFileToDirect@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 *     _RtlpTpIoAlloc@12 @ 0x4B3855A8 (_RtlpTpIoAlloc@12.c)
 */

NTSTATUS __fastcall RtlpTpIoAlloc(unsigned __int8 **a1, int a2, HANDLE FileHandle)
{
  unsigned __int8 *Heap; // esi
  int v5; // ecx
  char v6; // dl
  int v7; // eax
  SIZE_T v9; // [esp-4h] [ebp-40h]
  int v11; // [esp+18h] [ebp-24h] BYREF
  unsigned __int8 *v12; // [esp+1Ch] [ebp-20h]
  NTSTATUS v13; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v11 = 0;
  v13 = -1073741823;
  v12 = 0;
  ms_exc.registration.TryLevel = 0;
  LODWORD(v9) = 108;
  Heap = (unsigned __int8 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  v12 = Heap;
  if ( Heap )
  {
    v13 = TppPoolpReferenceGlobalPool(
            (volatile signed __int32 **)&TppPoolpGlobalPool,
            &TppPoolpGlobalPoolLock,
            (volatile signed __int32 **)&v11);
    if ( v13 >= 0 )
    {
      *(_DWORD *)Heap = a2;
      *((_DWORD *)Heap + 9) = RtlpTpIoCallback;
      if ( v11 )
      {
        TppGetCurrentThreadNumaNode((_RTL_SRWLOCK *)v11, (_DWORD *)Heap + 10, Heap + 44);
        v5 = *((_DWORD *)Heap + 10);
        v6 = Heap[44];
      }
      else
      {
        *((_DWORD *)Heap + 10) = 0;
        Heap[44] = 0;
        v5 = 0;
        v6 = 0;
      }
      *((_DWORD *)Heap + 6) = 0;
      *((_DWORD *)Heap + 8) = Heap + 28;
      *((_DWORD *)Heap + 7) = Heap + 28;
      *((_DWORD *)Heap + 1) = TppDirectTaskVFuncs;
      *((_DWORD *)Heap + 2) = v5;
      Heap[12] = v6;
      v7 = v11;
      *((_DWORD *)Heap + 12) = v11;
      v13 = TpBindFileToDirect(FileHandle, (int)(Heap + 4), v7);
      if ( v13 >= 0 )
      {
        ++*((_DWORD *)Heap + 13);
        *((_DWORD *)Heap + 14) = Heap + 56;
        *((_DWORD *)Heap + 15) = 0;
        *((_DWORD *)Heap + 16) = 0;
        *a1 = Heap;
        v13 = 0;
      }
    }
  }
  else
  {
    v13 = -1073741801;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v13 < 0 )
  {
    if ( v11 )
    {
      if ( v11 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
          TppRaiseInvalidParameter();
      }
      else
      {
        TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
      }
      Heap = v12;
    }
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return v13;
}
