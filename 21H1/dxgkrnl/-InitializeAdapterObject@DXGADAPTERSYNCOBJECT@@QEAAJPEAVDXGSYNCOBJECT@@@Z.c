/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C01126EC
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0112488 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028C290 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(DXGADAPTERSYNCOBJECT *this, struct DXGSYNCOBJECT *a2)
{
  char *v2; // rbx
  char *v5; // r8
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rdi
  char *v26; // rsi
  char **v27; // rax

  v2 = (char *)this + 32;
  if ( *((_QWORD *)this + 4) )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v21 + 24) = 1669LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_BYTE *)a2 + 277)
    || ((unsigned int)(*((_DWORD *)a2 + 48) - 5) <= 1 ? (v5 = (char *)a2 + 120) : (v5 = 0LL),
        (*((_DWORD *)a2 + 49) & 4) != 0 ? (v6 = *((_QWORD *)a2 + 39)) : (v6 = 0LL),
        v7 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, _QWORD, __int64, _QWORD, char *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 616LL) + 8LL) + 608LL))(
               *(_QWORD *)(*((_QWORD *)this + 2) + 624LL),
               a2,
               (char *)a2 + 192,
               *((unsigned int *)a2 + 68),
               v6,
               0LL,
               v2,
               v5),
        v11 = v7,
        v7 >= 0) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
    v12 = *((_QWORD *)this + 2);
    v13 = v12 + 192;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 192));
    v16 = (__int64 *)(v12 + 232);
    v17 = *v16;
    if ( *(__int64 **)(*v16 + 8) == v16 )
    {
      *(_QWORD *)this = v17;
      *((_QWORD *)this + 1) = v16;
      *(_QWORD *)(v17 + 8) = this;
      *v16 = (__int64)this;
      if ( *(struct _KTHREAD **)(v13 + 16) != KeGetCurrentThread() )
      {
        v23 = WdLogNewEntry5_WdCriticalError(v15, v14);
        *(_QWORD *)(v23 + 24) = 275LL;
        *(_QWORD *)(v23 + 32) = 4LL;
        *(_QWORD *)(v23 + 40) = v13;
        *(_OWORD *)(v23 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v23);
      }
      v18 = *(_DWORD *)(v13 + 24);
      if ( v18 <= 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v15, v14);
        *(_QWORD *)(v24 + 24) = 703LL;
        WdLogEvent5_WdAssertion(v24);
        v18 = *(_DWORD *)(v13 + 24);
      }
      v19 = v18 - 1;
      *(_DWORD *)(v13 + 24) = v19;
      if ( !v19 )
      {
        *(_QWORD *)(v13 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
      }
      KeLeaveCriticalRegion();
      *((_BYTE *)this + 24) = 1;
      *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 49) & 4) != 0;
      if ( (*((_DWORD *)a2 + 49) & 4) == 0 )
        return 0LL;
      v25 = (char *)a2 + 296;
      v26 = (char *)this + 40;
      v27 = (char **)*((_QWORD *)v25 + 1);
      if ( *v27 == v25 )
      {
        *(_QWORD *)v26 = v25;
        *((_QWORD *)v26 + 1) = v27;
        *v27 = v26;
        *((_QWORD *)v25 + 1) = v26;
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  v22 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v22 + 24) = a2;
  *(_QWORD *)(v22 + 32) = v11;
  WdLogEvent5_WdWarning(v22);
  return (unsigned int)v11;
}
