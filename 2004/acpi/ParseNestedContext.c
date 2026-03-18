/*
 * XREFs of ParseNestedContext @ 0x1C006BB60
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C000A040 (DupObjData.c)
 *     AsyncCallBack @ 0x1C0068148 (AsyncCallBack.c)
 */

__int64 __fastcall ParseNestedContext(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx

  v3 = a3;
  if ( !a3 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    if ( v6 )
      v3 = DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v6, a2 + 48);
  }
  AsyncCallBack((_QWORD *)a1, v3);
  FreeDataBuffs(a2 + 48, 1u);
  *(_DWORD *)(a1 + 64) &= ~0x100u;
  *(_DWORD *)(a1 + 64) |= *(_DWORD *)(a2 + 112) & 0x100;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 120);
  DereferenceObjectEx(*(_QWORD *)(a2 + 32));
  v7 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  DereferenceObjectEx(v7);
  *(_QWORD *)(a2 + 40) = 0LL;
  v8 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v8[1];
  HeapFree(v8);
  return 0x8000LL;
}
