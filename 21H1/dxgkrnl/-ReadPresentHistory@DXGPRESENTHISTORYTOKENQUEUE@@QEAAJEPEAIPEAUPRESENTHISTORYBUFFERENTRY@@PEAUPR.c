/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C0006350
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C00D7510 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct PRESENTHISTORYBITS *a5)
{
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r12
  __int64 v14; // r15
  size_t v15; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+10h]

  if ( a3 && a4 )
  {
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      v17 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v17 + 24) = 237LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      v18 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v18 + 24) = 238LL;
      WdLogEvent5_WdAssertion(v18);
    }
    v8 = *((_DWORD *)this + 4);
    if ( v8 >= 0x800 )
    {
      v19 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v19 + 24) = 239LL;
      WdLogEvent5_WdAssertion(v19);
      v8 = *((_DWORD *)this + 4);
    }
    v9 = *((_DWORD *)this + 2);
    v10 = *a3;
    if ( v9 < v8 )
    {
      v12 = *a3;
      if ( 2048 - v8 < v10 )
        v12 = 2048 - v8;
      v13 = v10 - v12;
      if ( v9 < (unsigned int)v13 )
        v13 = v9;
    }
    else
    {
      v11 = v9 - v8;
      if ( v11 < v10 )
        v10 = v11;
      v12 = v10;
      v13 = 0LL;
    }
    v14 = v12;
    v22 = v12;
    v15 = 8LL * v12;
    memmove(a4, &this[v8 + 10], v15);
    memmove(a5, (char *)this + v8 + 16464, (unsigned int)v14);
    memmove((char *)a4 + v15, this + 10, 8 * v13);
    memmove((char *)a5 + v14, this + 2058, (unsigned int)v13);
    *((_DWORD *)this + 4) = ((_WORD)v22 + (_WORD)v13 + (_WORD)v8) & 0x7FF;
    *a3 = v13 + v22;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
}
