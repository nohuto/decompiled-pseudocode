/*
 * XREFs of _TppDirectUnposted@8 @ 0x4B384310
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

signed __int32 __stdcall TppDirectUnposted(int a1, int a2)
{
  volatile signed __int32 *v2; // ebx
  _DWORD **v3; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  signed __int32 result; // eax
  _DWORD *v7; // esi
  int v8; // ecx

  v2 = (volatile signed __int32 *)(a1 + 20);
  v3 = (_DWORD **)(a1 + 24);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v2);
    v4 = *v3;
    if ( *v3 == v3 )
    {
      v4 = 0;
    }
    else
    {
      if ( (_DWORD **)v4[1] != v3 || (v5 = (_DWORD *)*v4, *(_DWORD **)(*v4 + 4) != v4) )
        __fastfail(3u);
      *v3 = v5;
      v5[1] = v3;
    }
    result = RtlReleaseSRWLockExclusive(v2);
    if ( !v4 )
      break;
    v7 = v4 - 4;
    if ( v7 )
    {
      v8 = v7[6];
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF) )
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_DWORD *)v8);
    }
  }
  return result;
}
