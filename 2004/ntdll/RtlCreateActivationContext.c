/*
 * XREFs of RtlCreateActivationContext @ 0x180072D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180072EB4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180072F38 (RtlpValidateActivationContextData.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DF994 (RtlpPlaceActivationContextOnLiveList.c)
 */

__int64 __fastcall RtlCreateActivationContext(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  int v10; // ebx
  _QWORD *Heap; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v6 = 0LL;
  v7 = a3;
  if ( (char *)a2 == "Actx " )
  {
    DbgPrintEx(51, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return (unsigned int)-1073741811;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( !a1 && a2 && a3 <= 0x10000 && a6 )
  {
    v10 = RtlpValidateActivationContextData();
    if ( v10 < 0 )
      return (unsigned int)v10;
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7 + 528);
    v6 = (__int64)Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v12 = Heap + 1;
    *Heap = 1733124929LL;
    v13 = Heap + 15;
    v14 = 0LL;
    v15 = *(unsigned int *)(*(unsigned int *)(a2 + 24) + a2 + 8);
    v16 = Heap + 17;
    if ( (unsigned int)v15 <= 0x20 )
      v14 = v16;
    v10 = RtlpInitializeAssemblyStorageMap(v13, v15, v14);
    if ( v10 >= 0 )
    {
      *((_DWORD *)v12 + 1) = 0;
      v12[5] = a5;
      *(_DWORD *)v12 = 1;
      v12[3] = a2;
      v12[4] = a4;
      *((_OWORD *)v12 + 3) = 0LL;
      *((_OWORD *)v12 + 4) = 0LL;
      *((_OWORD *)v12 + 5) = 0LL;
      *((_OWORD *)v12 + 6) = 0LL;
      memset(v12 + 49, 0, 0x80uLL);
      *((_DWORD *)v12 + 96) = 0;
      if ( g_SxsKeepActivationContextsAlive )
        RtlpPlaceActivationContextOnLiveList(v12);
      *a6 = v12;
      return 0;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return (unsigned int)v10;
}
