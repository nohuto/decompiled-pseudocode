/*
 * XREFs of ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BD240
 * Callers:
 *     GreAnimatePalette @ 0x1C02B7870 (GreAnimatePalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XEPALOBJ::ulAnimatePalette(
        struct PALETTE **this,
        __int64 a2,
        __int64 a3,
        const struct tagPALETTEENTRY *a4)
{
  __int64 v5; // rdi
  int v7; // ebx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  struct PALETTE *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int8 *v15; // rdi
  struct PALETTE *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // r15
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rax
  __int64 v25; // rdx
  void (__fastcall *v26)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v30[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+80h] [rbp+30h] BYREF

  v5 = (unsigned int)a2;
  v7 = a3;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31, a2, a3, (__int64)a4);
  v9 = *this;
  if ( *this == ppalDefault )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_26;
  v10 = *((_DWORD *)v9 + 7);
  if ( (unsigned int)v5 >= v10 )
    goto LABEL_26;
  if ( (int)v5 + v7 > v10 )
    v7 = v10 - v5;
  if ( v7 )
  {
    v11 = *((_QWORD *)v9 + 14);
    v12 = 0;
    v13 = v5;
    v28 = 0LL;
    v14 = v11 + 4 * v5;
    v15 = 0LL;
    v29 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v16 = *this;
    if ( *((_DWORD *)*this + 14) )
    {
      v17 = *((_QWORD *)v16 + 6);
      if ( (*(_DWORD *)(v17 + 2172) & 0x100) != 0 )
      {
        v28 = *(_QWORD *)(v17 + 1808);
        v18 = *((_QWORD *)v16 + 10);
        if ( v18 )
          v15 = (unsigned __int8 *)(v18 + v13 + 4);
      }
    }
    v19 = (char *)a4 - v14;
    do
    {
      v20 = *(_DWORD *)&v19[v14];
      --v7;
      v21 = (*(_BYTE *)(v14 + 3) & 1) == 0;
      LODWORD(v31) = v20;
      if ( !v21 )
      {
        ++v12;
        *(_DWORD *)v14 = v20;
        if ( v15 )
        {
          v22 = *v15;
          v23 = *(_QWORD *)(v28 + 112);
          if ( (*(_BYTE *)(v23 + 4 * v22 + 3) & 1) != 0 )
          {
            BYTE3(v31) = *(_BYTE *)(v23 + 4 * v22 + 3);
            *(_DWORD *)(v23 + 4 * v22) = v31;
          }
        }
      }
      v24 = v15 + 1;
      if ( !v15 )
        v24 = 0LL;
      v14 += 4LL;
      v15 = v24;
    }
    while ( v7 );
    SEMOBJ::vUnlock((SEMOBJ *)&v29);
    if ( v15 )
    {
      v31 = *((_QWORD *)*this + 6);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v30, (struct PDEVOBJ *)&v31);
      v29 = *(_QWORD *)(v31 + 64);
      GreAcquireSemaphore(v29);
      GreAcquireSemaphore(*(_QWORD *)(v31 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v31 + 48), 11LL);
      v25 = v31;
      if ( (*(_DWORD *)(v31 + 2172) & 0x100) != 0 && (*(_DWORD *)(v31 + 40) & 0x400) == 0 )
      {
        v26 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v31 + 1768);
        if ( v26 )
        {
          v26(*(_QWORD *)(*(_QWORD *)(v31 + 24) + 1800LL), &v28, 0LL, 0LL, *(_DWORD *)(v28 + 28));
          v25 = v31;
        }
        else
        {
          v12 = 0;
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v25 + 48));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v31 + 48));
      SEMOBJ::vUnlock((SEMOBJ *)&v29);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v30);
    }
  }
  else
  {
LABEL_26:
    v12 = 0;
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v12;
}
