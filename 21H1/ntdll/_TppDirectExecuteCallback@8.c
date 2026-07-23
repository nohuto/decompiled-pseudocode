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

void __stdcall TppDirectExecuteCallback(_RTL_SRWLOCK *a1, _RTL_SRWLOCK *a2)
{
  unsigned int *v2; // eax
  _RTL_SRWLOCK *Value; // esi
  unsigned int v4; // ecx
  bool v5; // bl
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  unsigned int v8; // ecx
  int v9; // [esp+14h] [ebp-Ch]
  _DWORD v10[2]; // [esp+18h] [ebp-8h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 5);
  v2 = (unsigned int *)&a2[6];
  Value = (_RTL_SRWLOCK *)a2[6].Value;
  if ( Value == &a2[6] )
  {
    Value = 0;
  }
  else
  {
    if ( (unsigned int *)Value[1].Value != v2 || (v4 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 4) != Value) )
      __fastfail(3u);
    *v2 = v4;
    *(_DWORD *)(v4 + 4) = v2;
  }
  v5 = *v2 != (_DWORD)v2;
  RtlReleaseSRWLockExclusive(a2 + 5);
  if ( v5 )
    TpPostTask(1, 0);
  if ( Value )
  {
    v6 = (unsigned int *)&Value[-4];
    v7 = (unsigned int *)&Value[-3];
    v9 = *v7++;
    v10[0] = *v7;
    v10[1] = v7[1];
    v8 = v6[6];
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v8);
    a1[12].0 = a2[8].0;
    a1[13].Value = (unsigned int)a2;
    ((void (__thiscall *)(unsigned int, _RTL_SRWLOCK *, _RTL_SRWLOCK *, int, _DWORD *))a2[8].Value)(
      a2[8].Value,
      a1,
      a2,
      v9,
      v10);
  }
}
