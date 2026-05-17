/*
 * XREFs of _TppDirectExecuteCallback@8 @ 0x4B2AB3E0
 * Callers:
 *     <none>
 * Callees:
 *     _TpPostTask@16 @ 0x4B2C1C3F (_TpPostTask@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall TppDirectExecuteCallback(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ecx
  bool v5; // bl
  int result; // eax
  _DWORD *v7; // eax
  int *v8; // esi
  int v9; // ecx
  int v10; // [esp+14h] [ebp-Ch]
  _DWORD v11[2]; // [esp+18h] [ebp-8h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 20);
  v2 = (_DWORD *)(a2 + 24);
  v3 = *(_DWORD **)(a2 + 24);
  if ( v3 == (_DWORD *)(a2 + 24) )
  {
    v3 = 0;
  }
  else
  {
    if ( (_DWORD *)v3[1] != v2 || (v4 = *v3, *(_DWORD **)(*v3 + 4) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_DWORD *)(v4 + 4) = v2;
  }
  v5 = *v2 != (_DWORD)v2;
  result = RtlReleaseSRWLockExclusive(a2 + 20);
  if ( v5 )
    result = TpPostTask(1, 0);
  if ( v3 )
  {
    v7 = v3 - 4;
    v8 = v3 - 3;
    v10 = *v8++;
    v11[0] = *v8;
    v11[1] = v8[1];
    v9 = v7[6];
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4), 0xFFFFFFFF) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_DWORD *)v9);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 52) = a2;
    return (*(int (__thiscall **)(_DWORD, int, int, int, _DWORD *))(a2 + 32))(*(_DWORD *)(a2 + 32), a1, a2, v10, v11);
  }
  return result;
}
