/*
 * XREFs of CmpPostApc @ 0x1406CEBA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     CmpFreePostBlock @ 0x1407190AC (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x14071A400 (CmpFreeSubordinatePost.c)
 */

__int64 __fastcall CmpPostApc(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  _KPROCESS *Process; // rcx
  char v9; // al
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int16 v12; // ax
  char v13; // cl
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
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].Affinity.StaticBitmap[30]
    || ((v12 = WORD2(Process[2].Affinity.StaticBitmap[20]), v12 == 332) || v12 == 452
      ? (v9 = 1, v13 = 1)
      : (v13 = 0, v9 = 1),
        !v13) )
  {
    v9 = 0;
  }
  **(_DWORD **)(v6[8] + 104LL) = *a4;
  v10 = *(_QWORD *)(v6[8] + 104LL);
  if ( v9 )
    *(_DWORD *)(v10 + 4) = 0;
  else
    *(_QWORD *)(v10 + 8) = 0LL;
  v11 = (_QWORD *)v6[8];
  if ( (_QWORD *)v11[13] == v11 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v11);
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
    ObfDereferenceObject(*(PVOID *)(v6[8] + 8LL));
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
