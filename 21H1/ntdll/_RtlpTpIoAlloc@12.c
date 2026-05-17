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

int __fastcall RtlpTpIoAlloc(int *a1, int a2, int a3)
{
  int Heap; // esi
  int v5; // ecx
  char v6; // dl
  volatile signed __int32 *v7; // eax
  volatile signed __int32 *v10; // [esp+18h] [ebp-24h] BYREF
  int v11; // [esp+1Ch] [ebp-20h]
  int v12; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v10 = 0;
  v12 = -1073741823;
  v11 = 0;
  ms_exc.registration.TryLevel = 0;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 108);
  v11 = Heap;
  if ( Heap )
  {
    v12 = TppPoolpReferenceGlobalPool(
            (volatile signed __int32 **)&TppPoolpGlobalPool,
            (int)&TppPoolpGlobalPoolLock,
            &v10);
    if ( v12 >= 0 )
    {
      *(_DWORD *)Heap = a2;
      *(_DWORD *)(Heap + 36) = RtlpTpIoCallback;
      if ( v10 )
      {
        TppGetCurrentThreadNumaNode(v10, (_DWORD *)(Heap + 40), (unsigned __int8 *)(Heap + 44));
        v5 = *(_DWORD *)(Heap + 40);
        v6 = *(_BYTE *)(Heap + 44);
      }
      else
      {
        *(_DWORD *)(Heap + 40) = 0;
        *(_BYTE *)(Heap + 44) = 0;
        v5 = 0;
        v6 = 0;
      }
      *(_DWORD *)(Heap + 24) = 0;
      *(_DWORD *)(Heap + 32) = Heap + 28;
      *(_DWORD *)(Heap + 28) = Heap + 28;
      *(_DWORD *)(Heap + 4) = TppDirectTaskVFuncs;
      *(_DWORD *)(Heap + 8) = v5;
      *(_BYTE *)(Heap + 12) = v6;
      v7 = v10;
      *(_DWORD *)(Heap + 48) = v10;
      v12 = TpBindFileToDirect(a3, Heap + 4, (int)v7);
      if ( v12 >= 0 )
      {
        ++*(_DWORD *)(Heap + 52);
        *(_DWORD *)(Heap + 56) = Heap + 56;
        *(_DWORD *)(Heap + 60) = 0;
        *(_DWORD *)(Heap + 64) = 0;
        *a1 = Heap;
        v12 = 0;
      }
    }
  }
  else
  {
    v12 = -1073741801;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v12 < 0 )
  {
    if ( v10 )
    {
      if ( v10 != (volatile signed __int32 *)TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
          TppRaiseInvalidParameter();
      }
      else
      {
        TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, (int)&TppPoolpGlobalPoolLock);
      }
      Heap = v11;
    }
    if ( Heap )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return v12;
}
