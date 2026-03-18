/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C00039D0
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C00F58B0 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct PRESENTHISTORYBITS *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r12
  __int64 v16; // r15
  size_t v17; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+10h]

  if ( a3 && a4 )
  {
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      v19 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v19 + 24) = 237LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      v20 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v20 + 24) = 238LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v10 = *((_DWORD *)this + 4);
    if ( v10 >= 0x800 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v21 + 24) = 239LL;
      WdLogEvent5_WdAssertion(v21);
      v10 = *((_DWORD *)this + 4);
    }
    v11 = *((_DWORD *)this + 2);
    v12 = *a3;
    if ( v11 < v10 )
    {
      v14 = *a3;
      if ( 2048 - v10 < v12 )
        v14 = 2048 - v10;
      v15 = v12 - v14;
      if ( v11 < (unsigned int)v15 )
        v15 = v11;
    }
    else
    {
      v13 = v11 - v10;
      if ( v13 < v12 )
        v12 = v13;
      v14 = v12;
      v15 = 0LL;
    }
    v16 = v14;
    v24 = v14;
    v17 = 8LL * v14;
    memmove(a4, &this[v10 + 10], v17);
    memmove(a5, (char *)this + v10 + 16464, (unsigned int)v16);
    memmove((char *)a4 + v17, this + 10, 8 * v15);
    memmove((char *)a5 + v16, this + 2058, (unsigned int)v15);
    *((_DWORD *)this + 4) = ((_WORD)v24 + (_WORD)v15 + (_WORD)v10) & 0x7FF;
    *a3 = v15 + v24;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
}
