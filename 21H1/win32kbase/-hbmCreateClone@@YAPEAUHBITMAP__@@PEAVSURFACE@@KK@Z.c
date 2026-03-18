/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C00A9B18
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00A90C0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C001C360 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002EC90 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  int v3; // eax
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // r8d
  bool v9; // zf
  struct _ERESOURCE *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // [rsp+60h] [rbp-29h] BYREF
  char v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  PERESOURCE v21; // [rsp+70h] [rbp-19h] BYREF
  int v22; // [rsp+78h] [rbp-11h] BYREF
  int v23; // [rsp+7Ch] [rbp-Dh]
  int v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+84h] [rbp-5h]
  __int64 v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+94h] [rbp+Bh]
  __int64 v29; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+1Fh] BYREF
  int v32; // [rsp+B0h] [rbp+27h]
  int v33; // [rsp+B4h] [rbp+2Bh]

  v3 = *((_DWORD *)a1 + 24);
  v25 = 0;
  v28 = 0;
  v22 = v3;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v14 = *((_DWORD *)a1 + 15);
    v23 = a2;
    if ( v14 < a3 )
      a3 = v14;
    v24 = a3;
  }
  else
  {
    v23 = *((_DWORD *)a1 + 14);
    v24 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v26 = 0LL;
  if ( v5 )
    v26 = *v5;
  v6 = 0LL;
  v27 = 1;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v18,
                       (struct _DEVBITMAPINFO *)&v22,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v9 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v10 = 0LL;
    v32 = v23;
    v33 = v24;
    v29 = 0LL;
    v31 = 0LL;
    v21 = 0LL;
    if ( !v9 )
    {
      v30 = *((_QWORD *)a1 + 6);
      v10 = *(struct _ERESOURCE **)(v30 + 48);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v21, (struct PDEVOBJ *)&v30);
      EngAcquireSemaphore((HSEMAPHORE)v10);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemDevLock", (int)v10, 11);
    }
    if ( qword_1C0257140 )
      v11 = qword_1C0257140();
    else
      v11 = -1073741637;
    if ( v11 < 0
      || (!qword_1C0257148
        ? (v12 = 0)
        : (v12 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, void *, __int64 *, __int64 *))qword_1C0257148)(
                   (v18 + 24) & -(__int64)(v18 != 0),
                   ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
                   0LL,
                   &xloIdent,
                   &v31,
                   &v29)),
          v12) )
    {
      v19 |= 1u;
      v6 = *(_QWORD *)(v18 + 32);
    }
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"hsemDevLock", (int)v10, v8);
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v15);
      NEEDGRELOCK::vUnlock(&v21, v16, v17);
    }
    NEEDGRELOCK::vUnlock(&v21, v7, v8);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v18, v7, v8);
  return v6;
}
