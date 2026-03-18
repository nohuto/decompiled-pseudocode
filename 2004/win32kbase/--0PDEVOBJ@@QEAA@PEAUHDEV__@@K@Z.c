/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01416B4
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0147884 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C0014440 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0023660 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDeleteSemaphore @ 0x1C00A55E0 (GreDeleteSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C00A56B4 (GreCreateSemaphoreInternal.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00BDD60 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C8638 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  struct PDEV *v4; // rax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  HDEV v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  HDEV v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r14d
  void *v19; // rcx
  __int64 v20; // rdx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  HDEV v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int64 SemaphoreInternal; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  signed __int32 v31; // ett
  signed __int32 v32; // ett
  _QWORD *v33; // rax
  int v34; // r8d
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _BYTE v40[32]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v42; // [rsp+50h] [rbp-20h]
  char *v43; // [rsp+A0h] [rbp+30h] BYREF

  v43 = a2;
  *(_QWORD *)this = 0LL;
  if ( !a2 || (*((_DWORD *)a2 + 10) & 1) == 0 )
    return this;
  v41[0] = 0LL;
  v41[1] = 0LL;
  v42 = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v40, (struct PDEVOBJ *)&v43);
  v4 = PDEV::Allocate(0);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    v7 = 2LL;
    *((_QWORD *)v4 + 224) = *((_QWORD *)a2 + 224);
    v8 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
    v9 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1728LL) = *((_QWORD *)a2 + 216);
    *(_QWORD *)(*(_QWORD *)this + 1736LL) = *((_QWORD *)a2 + 217);
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *((_QWORD *)a2 + 219);
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *((_QWORD *)a2 + 220);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 221);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *((_QWORD *)a2 + 222);
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 225);
    *(_QWORD *)(*(_QWORD *)this + 1808LL) = *((_QWORD *)a2 + 226);
    *(_QWORD *)(*(_QWORD *)this + 1816LL) = *((_QWORD *)a2 + 227);
    v10 = (HDEV)(a2 + 1824);
    v11 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v11 = *(_OWORD *)v10;
      v11[1] = *((_OWORD *)v10 + 1);
      v11[2] = *((_OWORD *)v10 + 2);
      v11[3] = *((_OWORD *)v10 + 3);
      v11[4] = *((_OWORD *)v10 + 4);
      v11[5] = *((_OWORD *)v10 + 5);
      v11[6] = *((_OWORD *)v10 + 6);
      v11 += 8;
      v12 = *((_OWORD *)v10 + 7);
      v10 += 32;
      *(v11 - 1) = v12;
      --v8;
    }
    while ( v8 );
    *v11 = *(_OWORD *)v10;
    v11[1] = *((_OWORD *)v10 + 1);
    v11[2] = *((_OWORD *)v10 + 2);
    *((_QWORD *)v11 + 6) = *((_QWORD *)v10 + 6);
    v13 = (HDEV)(a2 + 2136);
    v14 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    do
    {
      *v14 = *(_OWORD *)v13;
      v14[1] = *((_OWORD *)v13 + 1);
      v14[2] = *((_OWORD *)v13 + 2);
      v14[3] = *((_OWORD *)v13 + 3);
      v14[4] = *((_OWORD *)v13 + 4);
      v14[5] = *((_OWORD *)v13 + 5);
      v14[6] = *((_OWORD *)v13 + 6);
      v14 += 8;
      v15 = *((_OWORD *)v13 + 7);
      v13 += 32;
      *(v14 - 1) = v15;
      --v7;
    }
    while ( v7 );
    *v14 = *(_OWORD *)v13;
    v14[1] = *((_OWORD *)v13 + 1);
    v14[2] = *((_OWORD *)v13 + 2);
    v14[3] = *((_OWORD *)v13 + 3);
    v16 = *(_QWORD *)this;
    *(_OWORD *)(v16 + 2456) = *(_OWORD *)(a2 + 2456);
    *(_OWORD *)(v16 + 2472) = *(_OWORD *)(a2 + 2472);
    *(_OWORD *)(v16 + 2488) = *(_OWORD *)(a2 + 2488);
    *(_OWORD *)(v16 + 2504) = *(_OWORD *)(a2 + 2504);
    *(_OWORD *)(v16 + 2520) = *(_OWORD *)(a2 + 2520);
    *(_OWORD *)(v16 + 2536) = *(_OWORD *)(a2 + 2536);
    *(_QWORD *)(*(_QWORD *)this + 2560LL) = *((_QWORD *)a2 + 320);
    *(_QWORD *)(*(_QWORD *)this + 2568LL) = *((_QWORD *)a2 + 321);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    *(_QWORD *)(*(_QWORD *)this + 2584LL) = *((_QWORD *)a2 + 323);
    *(_DWORD *)(*(_QWORD *)this + 2644LL) = *((_DWORD *)a2 + 661);
    *(_QWORD *)(*(_QWORD *)this + 2648LL) = *((_QWORD *)a2 + 331);
    *(_QWORD *)(*(_QWORD *)this + 2656LL) = *((_QWORD *)a2 + 332);
    *(_QWORD *)(*(_QWORD *)this + 2672LL) = *((_QWORD *)a2 + 334);
    *(_QWORD *)(*(_QWORD *)this + 2680LL) = *((_QWORD *)a2 + 335);
    *(_QWORD *)(*(_QWORD *)this + 2664LL) = *((_QWORD *)a2 + 333);
    *(_DWORD *)(*(_QWORD *)this + 3552LL) = *((_DWORD *)a2 + 888);
    v17 = *((_QWORD *)a2 + 324);
    if ( v17 )
    {
      v18 = *(unsigned __int16 *)(v17 + 68) + *(unsigned __int16 *)(v17 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2592LL) = PALLOCMEM2(v18, 0x76656447u, 0);
      v19 = *(void **)(*(_QWORD *)this + 2592LL);
      if ( !v19 )
        goto LABEL_36;
      memmove(v19, *((const void **)a2 + 324), v18);
    }
    v20 = 1456LL;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = *((_DWORD *)a2 + 11);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = *((_QWORD *)a2 + 9);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = *((_QWORD *)a2 + 179);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = *((_QWORD *)a2 + 180);
    *(_QWORD *)(*(_QWORD *)this + 1448LL) = *((_QWORD *)a2 + 181);
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = *((_QWORD *)a2 + 319);
    do
    {
      *(_QWORD *)(v20 + *(_QWORD *)this) = *(_QWORD *)&a2[v20];
      v20 += 8LL;
    }
    while ( v20 < 1504 );
    *(_QWORD *)(*(_QWORD *)this + 1504LL) = *((_QWORD *)a2 + 188);
    if ( *((_QWORD *)a2 + 211) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = PALLOCMEM2(0x600uLL, 0x6D636947u, 0);
      v21 = *(void **)(*(_QWORD *)this + 1688LL);
      if ( !v21 )
        goto LABEL_36;
      memmove(v21, *((const void **)a2 + 211), 0x600uLL);
    }
    if ( *((_QWORD *)a2 + 212) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1696LL) = PALLOCMEM2(0x600uLL, 0x61676947u, 0);
      v22 = *(void **)(*(_QWORD *)this + 1696LL);
      if ( !v22 )
        goto LABEL_36;
      memmove(v22, *((const void **)a2 + 212), 0x600uLL);
    }
    if ( *((_QWORD *)a2 + 213) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = PALLOCMEM2(0x600uLL, 0x676F6947u, 0);
      v23 = *(void **)(*(_QWORD *)this + 1704LL);
      if ( !v23 )
        goto LABEL_36;
      memmove(v23, *((const void **)a2 + 213), 0x600uLL);
    }
    v24 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1720LL) = *((_QWORD *)a2 + 215);
    *(_QWORD *)(*(_QWORD *)this + 2600LL) = *((_QWORD *)a2 + 325);
    *(_DWORD *)(*(_QWORD *)this + 2608LL) = *((_DWORD *)a2 + 652);
    *(_DWORD *)(*(_QWORD *)this + 2612LL) = *((_DWORD *)a2 + 653);
    v25 = (HDEV)(a2 + 2688);
    v26 = (_OWORD *)(*(_QWORD *)this + 2688LL);
    do
    {
      *v26 = *(_OWORD *)v25;
      v26[1] = *((_OWORD *)v25 + 1);
      v26[2] = *((_OWORD *)v25 + 2);
      v26[3] = *((_OWORD *)v25 + 3);
      v26[4] = *((_OWORD *)v25 + 4);
      v26[5] = *((_OWORD *)v25 + 5);
      v26[6] = *((_OWORD *)v25 + 6);
      v26 += 8;
      v27 = *((_OWORD *)v25 + 7);
      v25 += 32;
      *(v26 - 1) = v27;
      --v24;
    }
    while ( v24 );
    *v26 = *(_OWORD *)v25;
    v26[1] = *((_OWORD *)v25 + 1);
    v26[2] = *((_OWORD *)v25 + 2);
    v26[3] = *((_OWORD *)v25 + 3);
    if ( *((_DWORD *)a2 + 292) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2800LL) = *((_QWORD *)a2 + 161);
      *(_QWORD *)(*(_QWORD *)this + 2808LL) = *((_QWORD *)a2 + 162);
      *(_QWORD *)(*(_QWORD *)this + 2832LL) = *((_QWORD *)a2 + 164);
      *(_QWORD *)(*(_QWORD *)this + 2840LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2848LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2872LL) = *((_QWORD *)a2 + 167);
      *(_QWORD *)(*(_QWORD *)this + 2936LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 3280LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 3256LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 3248LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 3232LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3240LL) = *((_QWORD *)a2 + 174);
      *(_QWORD *)(*(_QWORD *)this + 3008LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 3408LL) = *((_QWORD *)a2 + 175);
    }
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = *((_DWORD *)a2 + 10) & 0x60001;
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 48LL) = SemaphoreInternal;
    if ( SemaphoreInternal )
    {
      v29 = GreCreateSemaphoreInternal(0);
      *(_QWORD *)(*(_QWORD *)this + 56LL) = v29;
      if ( v29 )
      {
        v30 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v31 = *(_DWORD *)(v30 + 40);
        while ( v31 != _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 40), v31 & 0xFFFFFFBF, v31) );
        *(_QWORD *)(*(_QWORD *)this + 64LL) = GreCreateSemaphoreInternal(0);
        if ( *(_QWORD *)(*(_QWORD *)this + 64LL) )
        {
          _m_prefetchw((const void *)(v9 + 40));
          do
            v32 = *(_DWORD *)(v9 + 40);
          while ( v32 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 40), v32 | 0x80000, v32) );
          v33 = (_QWORD *)(*(_QWORD *)this + 2624LL);
          v33[1] = v33;
          *v33 = v33;
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          **(_QWORD **)this = gppdevList;
          gppdevList = *(struct PDEV **)this;
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v34);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v35);
          }
          v36 = (_QWORD *)(*(_QWORD *)this + 3528LL);
          v36[1] = v36;
          *v36 = v36;
          goto LABEL_49;
        }
      }
    }
LABEL_36:
    v37 = *(_QWORD *)this;
    if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(*(_QWORD *)this + 56LL));
      v37 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v37 + 48) )
    {
      GreDeleteSemaphore(*(PERESOURCE *)(v37 + 48));
      v37 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v37 + 2592) )
    {
      Win32FreePool(*(_QWORD *)(v37 + 2592));
      v37 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v37 + 1688) )
    {
      Win32FreePool(*(_QWORD *)(v37 + 1688));
      *(_QWORD *)(*(_QWORD *)this + 1688LL) = 0LL;
      v37 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v37 + 1696) )
    {
      Win32FreePool(*(_QWORD *)(v37 + 1696));
      *(_QWORD *)(*(_QWORD *)this + 1696LL) = 0LL;
      v37 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v37 + 1704) )
    {
      Win32FreePool(*(_QWORD *)(v37 + 1704));
      *(_QWORD *)(*(_QWORD *)this + 1704LL) = 0LL;
      v37 = *(_QWORD *)this;
    }
    PDEV::Free((struct PDEV *)v37);
    *(_QWORD *)this = 0LL;
  }
LABEL_49:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v40, v5, v6);
  v38 = v41[0];
  if ( v41[0] )
  {
    if ( (_BYTE)v42 )
    {
      *(_DWORD *)(v41[0] + 40LL) &= ~2u;
      v38 = v41[0];
      LOBYTE(v42) = 0;
    }
    if ( v38 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  }
  return this;
}
