/*
 * XREFs of GreSetMagicColors @ 0x1C014AD44
 * Callers:
 *     SetSysColor @ 0x1C001BDF4 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C014B020 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00183F0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C00964E0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A0850 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C52A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C014AB64 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // r12d
  int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-59h] BYREF
  struct PALETTE *v23; // [rsp+38h] [rbp-51h] BYREF
  HSEMAPHORE v24; // [rsp+40h] [rbp-49h] BYREF
  HSEMAPHORE v25; // [rsp+48h] [rbp-41h] BYREF
  HSEMAPHORE v26; // [rsp+50h] [rbp-39h] BYREF
  PERESOURCE v27; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v29[32]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v30; // [rsp+90h] [rbp+7h] BYREF
  int v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+9Ch] [rbp+13h]
  __int16 v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  v5 = v28[0];
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !v28[0] || a3 - 8 > 1 && a3 - 246 > 1 )
    goto LABEL_42;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v34);
  if ( (a2 & 0xFD000000) == 0 )
  {
    v10 = *(_QWORD *)(v5 + 48);
    v34 = v10;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v27, (struct PDEVOBJ *)&v34);
    v26 = *(HSEMAPHORE *)(v10 + 64);
    EngAcquireSemaphore(v26);
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    v33 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&v34);
    if ( (*(_DWORD *)(v10 + 2172) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v10 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29);
        if ( v30 )
        {
          if ( (_BYTE)v33 )
          {
            *(_DWORD *)(v30 + 40) &= ~2u;
            LOBYTE(v33) = 0;
          }
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v30);
        }
        SEMOBJ::vUnlock((PERESOURCE *)&v26);
        NEEDGRELOCK::vUnlock(&v27, v18, v19);
        goto LABEL_40;
      }
      v11 = *(_QWORD *)(v10 + 1800);
      v12 = *(_QWORD **)v11;
      v13 = *(_DWORD *)(v11 + 16);
      while ( 1 )
      {
        v10 = v12[6];
        v34 = v10;
        if ( (*(_DWORD *)(v10 + 2172) & 0x100) != 0 )
          break;
        v12 = (_QWORD *)*v12;
        if ( !--v13 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v22 = *(_QWORD *)(v10 + 1808);
    v25 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v24 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v23 = ppalDefault;
    v14 = XEPALOBJ::ulDispatchGFPEFunction(&v23, *((_DWORD *)ppalDefault + 25), a2);
    v15 = v14;
    if ( v14 != -1 )
    {
      if ( v14 >= 0xA )
        v15 = v14 + 236;
      if ( v15 == a3 )
      {
        if ( !v8 )
        {
          v6 = 1;
          goto LABEL_29;
        }
      }
      else if ( v15 - 8 > 1 && v15 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v16 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v16 = 15780518;
        }
        else
        {
          v16 = 10789024;
          if ( a3 == 246 )
            v16 = 15793151;
        }
        v17 = bSetMagicColor((__int64)&v34, v22, a3, v16);
        goto LABEL_28;
      }
    }
    v17 = bSetMagicColor((__int64)&v34, v22, a3, a2);
    v6 = v17;
LABEL_28:
    v7 = v17;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v24);
    if ( v7 && (*(_DWORD *)(v10 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v10 + 1768) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v10 + 1768))(
          *(_QWORD *)(*(_QWORD *)(v10 + 24) + 1800LL),
          &v22,
          0LL,
          0LL,
          *(_DWORD *)(v22 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v25);
    goto LABEL_35;
  }
LABEL_40:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v9);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v20);
  }
LABEL_42:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v28);
  return v6;
}
