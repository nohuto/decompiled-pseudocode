/*
 * XREFs of ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0115DB8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0080B34 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00C607C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 * Callees:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C009B670 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0115F04 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 */

SURFACE **__fastcall SpCreateSurface(SURFACE **a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // r8
  SURFACE *v11; // rbx
  __int64 v12; // [rsp+80h] [rbp-49h] BYREF
  char v13; // [rsp+88h] [rbp-41h]
  int v14; // [rsp+8Ch] [rbp-3Dh]
  _DWORD v15[4]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-29h]
  __int64 v17; // [rsp+A8h] [rbp-21h]
  __int128 v18; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-9h]
  int v20; // [rsp+C8h] [rbp-1h]
  __int64 v21; // [rsp+D0h] [rbp+7h]
  __int64 v22; // [rsp+D8h] [rbp+Fh]
  __int16 v23; // [rsp+E0h] [rbp+17h]
  __int64 v24; // [rsp+E8h] [rbp+1Fh]
  __int64 v25; // [rsp+F0h] [rbp+27h]
  SURFACE *v26; // [rsp+138h] [rbp+6Fh] BYREF

  v26 = (SURFACE *)a2;
  if ( gfEnableDeviceBitmapsForNonHintedShapes && g_pDwmState && gfDwmDeviceBitmapsEnabled
    || (unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v26) )
  {
    v22 = 0LL;
    v18 = 0LL;
    v23 = 256;
    v25 = 0LL;
    v24 = 0LL;
    v21 = 0LL;
    v20 = 1;
    if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v18 = *(_QWORD *)(a2 + 48);
      v19 = a2;
      GreAcquireSemaphore(v18);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v18, 11LL);
    }
    CreateCompatibleSurface(&v26, a2, 6, 0LL, *a3, a3[1], 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
    v11 = v26;
    if ( v26 )
    {
      LOBYTE(v10) = 5;
      HmgSetOwner(*((_QWORD *)v26 + 4), 0LL, v10);
      GreMarkUndeletableBitmap(*((_QWORD *)v11 + 4));
      *a1 = v11;
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v18);
      return a1;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v18);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v15[1] = *a3;
  v7 = a3[1];
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v15[3] = 0;
  v17 = 2049LL;
  v15[0] = 6;
  v15[2] = v7;
  v16 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v12, (struct _DEVBITMAPINFO *)v15, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0, 0) )
  {
    *(_QWORD *)(v12 + 48) = a2;
    v13 |= 1u;
    *(_DWORD *)(v12 + 112) |= 0x800u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v12 + 32), 0LL, 0LL, v6);
    v8 = v12;
    if ( v12 )
    {
      *a1 = (SURFACE *)v12;
      INC_SHARE_REF_CNT(v8);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v12);
  return a1;
}
