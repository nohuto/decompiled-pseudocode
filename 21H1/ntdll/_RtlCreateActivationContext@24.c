/*
 * XREFs of _RtlCreateActivationContext@24 @ 0x4B2E3290
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeAssemblyStorageMap@12 @ 0x4B2E33A0 (_RtlpInitializeAssemblyStorageMap@12.c)
 *     _RtlpValidateActivationContextData@12 @ 0x4B2E33ED (_RtlpValidateActivationContextData@12.c)
 *     @RtlpPlaceActivationContextOnLiveList@4 @ 0x4B33DA1A (@RtlpPlaceActivationContextOnLiveList@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __stdcall RtlCreateActivationContext(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // edi
  int v7; // esi
  _DWORD *Heap; // eax
  _DWORD *v9; // ebx

  v6 = 0;
  if ( (char *)a2 == "Actx " )
  {
    DbgPrintEx(51, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return -1073741811;
  }
  if ( a6 )
    *a6 = 0;
  if ( !a1 && a2 && a3 <= 0x10000 && a6 )
  {
    v7 = RtlpValidateActivationContextData(a6);
    if ( v7 < 0 )
      return v7;
    Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, a3 + 304);
    v6 = (int)Heap;
    if ( !Heap )
      return -1073741801;
    v9 = Heap + 1;
    *Heap = 1733124929;
    v7 = RtlpInitializeAssemblyStorageMap(*(_DWORD *)(*(_DWORD *)(a2 + 24) + a2 + 8) <= 0x20u ? Heap + 27 : 0);
    if ( v7 >= 0 )
    {
      v9[1] = 0;
      v9[4] = a2;
      v9[5] = a4;
      v9[6] = a5;
      *v9 = 1;
      memset((void *)(v6 + 32), 0, 0x20u);
      memset(v9 + 15, 0, 0x20u);
      memset(v9 + 59, 0, 0x40u);
      v9[58] = 0;
      if ( g_SxsKeepActivationContextsAlive )
        RtlpPlaceActivationContextOnLiveList(v9);
      v7 = 0;
      *a6 = v9;
      return v7;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v6 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
  return v7;
}
