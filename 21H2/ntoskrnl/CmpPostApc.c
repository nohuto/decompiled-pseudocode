/*
 * XREFs of CmpPostApc @ 0x1405FBC50
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     CmpFreeSubordinatePost @ 0x1405FBDE0 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x14065C880 (CmpFreePostBlock.c)
 */

__int64 __fastcall CmpPostApc(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rcx
  bool v9; // cl
  bool v10; // zf
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int16 v13; // ax
  _QWORD *v14; // rdx
  struct _KEVENT *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx

  v6 = *(_QWORD **)a5;
  v7 = *(_QWORD **)(*(_QWORD *)a5 + 64LL);
  if ( (_QWORD *)v7[13] == v7 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v7);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v8 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  v9 = 0;
  if ( v8 )
  {
    v13 = *(_WORD *)(v8 + 8);
    if ( v13 == 332 || v13 == 452 )
      v9 = 1;
  }
  **(_DWORD **)(v6[8] + 104LL) = *a4;
  v10 = !v9;
  v11 = *(_QWORD *)(v6[8] + 104LL);
  if ( v10 )
    *(_QWORD *)(v11 + 8) = 0LL;
  else
    *(_DWORD *)(v11 + 4) = 0;
  v12 = (_QWORD *)v6[8];
  if ( (_QWORD *)v12[13] == v12 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  *(_QWORD *)a4 = *(_QWORD *)(v6[8] + 104LL);
  v14 = (_QWORD *)v6[8];
  if ( (_QWORD *)v14[13] == v14 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v14);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v15 = *(struct _KEVENT **)(v6[8] + 8LL);
  if ( v15 )
  {
    KeSetEvent(v15, 0, 0);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(v6[8] + 8LL));
  }
  v16 = v6[2];
  v17 = (_QWORD *)v6[3];
  if ( *(_QWORD **)(v16 + 8) != v6 + 2 || (_QWORD *)*v17 != v6 + 2 )
    __fastfail(3u);
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  CmpFreeSubordinatePost(v6);
  return CmpFreePostBlock(v6);
}
