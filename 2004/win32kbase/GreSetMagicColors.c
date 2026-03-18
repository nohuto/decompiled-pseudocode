/*
 * XREFs of GreSetMagicColors @ 0x1C014D18C
 * Callers:
 *     SetSysColor @ 0x1C00A6AF4 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C014D470 (NtGdiSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0030620 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C003D4B0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0071D3C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00C1630 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C8638 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C014D044 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rbx
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  int v10; // r12d
  int v11; // r8d
  __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v32; // [rsp+30h] [rbp-59h] BYREF
  struct PALETTE *v33; // [rsp+38h] [rbp-51h] BYREF
  PERESOURCE v34; // [rsp+40h] [rbp-49h] BYREF
  HSEMAPHORE v35; // [rsp+48h] [rbp-41h] BYREF
  HSEMAPHORE v36; // [rsp+50h] [rbp-39h] BYREF
  PERESOURCE v37; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v38[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v39[32]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v40; // [rsp+90h] [rbp+7h] BYREF
  int v41; // [rsp+98h] [rbp+Fh]
  int v42; // [rsp+9Ch] [rbp+13h]
  __int16 v43; // [rsp+A0h] [rbp+17h]
  __int64 v44; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v7 = v38[0];
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !v38[0] || a3 - 8 > 1 && a3 - 246 > 1 )
    goto LABEL_43;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v44, v5, v6);
  if ( (a2 & 0xFD000000) == 0 )
  {
    v12 = *(_QWORD *)(v7 + 48);
    v44 = v12;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v37, (struct PDEVOBJ *)&v44);
    v36 = *(HSEMAPHORE *)(v12 + 64);
    EngAcquireSemaphore(v36);
    v40 = 0LL;
    v41 = 0;
    v42 = 0;
    v43 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v39, (struct PDEVOBJ *)&v44);
    v14 = 256;
    if ( (*(_DWORD *)(v12 + 2172) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v12 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v39, v13, v14);
        v27 = v40;
        if ( v40 )
        {
          if ( (_BYTE)v43 )
          {
            *(_DWORD *)(v40 + 40) &= ~2u;
            v27 = v40;
            LOBYTE(v43) = 0;
          }
          if ( v27 )
            XDCOBJ::vUnlockFast((XDCOBJ *)&v40);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v36, v25, v26);
        NEEDGRELOCK::vUnlock(&v37, v28, v29);
        goto LABEL_41;
      }
      v15 = *(_QWORD *)(v12 + 1800);
      v16 = *(_QWORD **)v15;
      LODWORD(v13) = *(_DWORD *)(v15 + 16);
      while ( 1 )
      {
        v12 = v16[6];
        v44 = v12;
        if ( (*(_DWORD *)(v12 + 2172) & 0x100) != 0 )
          break;
        v16 = (_QWORD *)*v16;
        v13 = (unsigned int)(v13 - 1);
        if ( !(_DWORD)v13 )
          goto LABEL_35;
      }
      v10 = 1;
    }
    v32 = *(_QWORD *)(v12 + 1808);
    v35 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v34 = ghsemPalette;
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    v33 = ppalDefault;
    v17 = XEPALOBJ::ulDispatchGFPEFunction(&v33, *((_DWORD *)ppalDefault + 25), a2);
    v20 = v17;
    if ( v17 != -1 )
    {
      if ( v17 >= 0xA )
        v20 = v17 + 236;
      if ( v20 == a3 )
      {
        if ( !v10 )
        {
          v8 = 1;
          goto LABEL_29;
        }
      }
      else if ( v20 - 8 > 1 && v20 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v21 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v21 = 15780518;
        }
        else
        {
          v21 = 10789024;
          if ( a3 == 246 )
            v21 = 15793151;
        }
        v22 = bSetMagicColor((__int64)&v44, v32, a3, v21);
        goto LABEL_28;
      }
    }
    v22 = bSetMagicColor((__int64)&v44, v32, a3, a2);
    v8 = v22;
LABEL_28:
    v9 = v22;
LABEL_29:
    SEMOBJ::vUnlock((SEMOBJ *)&v34, v18, v19);
    if ( v9 && (*(_DWORD *)(v12 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v12 + 1768) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v12 + 1768))(
          *(_QWORD *)(*(_QWORD *)(v12 + 24) + 1800LL),
          &v32,
          0LL,
          0LL,
          *(_DWORD *)(v32 + 28));
      else
        v8 = 0;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v35, v23, v24);
    goto LABEL_35;
  }
LABEL_41:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v11);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v30);
  }
LABEL_43:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
  return v8;
}
