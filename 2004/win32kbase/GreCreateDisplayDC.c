/*
 * XREFs of GreCreateDisplayDC @ 0x1C0091A00
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0012894 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C00141E0 (CreateCacheDC.c)
 *     NtGdiCreateMetafileDC @ 0x1C0040D80 (NtGdiCreateMetafileDC.c)
 *     UserGetDesktopDC @ 0x1C0040DE8 (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 *     GreCreateCompatibleDC @ 0x1C0091E80 (GreCreateCompatibleDC.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0027540 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00299B0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C007FF40 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgAllocateDcAttr @ 0x1C0083FC8 (HmgAllocateDcAttr.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C008447C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     HmgFreeDcAttr @ 0x1C0086408 (HmgFreeDcAttr.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0086EC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0086FF0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     GreValidateVisrgn @ 0x1C00923C4 (GreValidateVisrgn.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00A609C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, int a3)
{
  char v3; // si
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdx
  DC *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _DC_ATTR *DcAttr; // r14
  DC *v15; // r15
  unsigned int v16; // edi
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  DC *v26; // rdx
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rcx
  _QWORD *v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // edx
  int v35; // ecx
  unsigned int v36; // ecx
  BOOL v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // r8d
  DC *v41[2]; // [rsp+48h] [rbp-50h] BYREF
  int v42; // [rsp+58h] [rbp-40h]
  __int64 v43; // [rsp+A0h] [rbp+8h] BYREF
  int v44; // [rsp+B0h] [rbp+18h]
  __int64 v45; // [rsp+B8h] [rbp+20h] BYREF

  v44 = a3;
  v3 = a3;
  v6 = 0LL;
  v7 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v7, (unsigned int)&LockAcquireShared, a3, (__int64)ghsemDynamicModeChange);
  v43 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v41, a2, v3 & 1);
  if ( v41[0] )
  {
    *((_QWORD *)v41[0] + 6) = a1;
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v43, v8, v9);
    *((_DWORD *)v41[0] + 18) = *(_DWORD *)(a1 + 1824);
    *((_DWORD *)v41[0] + 19) = *(_DWORD *)(a1 + 2128);
    *((_QWORD *)v41[0] + 3) = *(_QWORD *)(a1 + 1800);
    *((_QWORD *)v41[0] + 8) = *(_QWORD *)(a1 + 48);
    if ( a2 == 1 )
    {
      v45 = 0x100000001LL;
      *((_QWORD *)v41[0] + 64) = 0x100000001LL;
    }
    else
    {
      v32 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v43);
      *((_QWORD *)v41[0] + 64) = *v32;
      if ( a2 )
        goto LABEL_8;
      v33 = *((_DWORD *)v41[0] + 9) | 0x200;
      if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
        v33 = *((_DWORD *)v41[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v41[0] + 9) = v33;
      v11 = v41[0];
      v34 = *((_DWORD *)v41[0] + 9) | 1;
      if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
        v34 = *((_DWORD *)v41[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v41[0] + 9) = v34;
      v10 = (__int64)v41[0];
      v35 = *((_DWORD *)v41[0] + 9);
      v36 = (*(_DWORD *)(a1 + 40) & 0x400) != 0 ? v35 | 0x1000 : v35 & 0xFFFFEFFF;
      *((_DWORD *)v41[0] + 9) = v36;
      if ( (*(_DWORD *)(a1 + 40) & 0x80u) != 0 )
        goto LABEL_8;
      DC::pSurface(v41[0], *(struct SURFACE **)(a1 + 2552));
      v11 = v41[0];
      v10 = *((unsigned int *)v41[0] + 9);
      v37 = (v10 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2552) + 112LL) & 0x200) != 0;
      v38 = v10 & 0xFFFF7FFF;
      LODWORD(v10) = v10 | 0x8000;
      if ( !v37 )
        v10 = v38;
      *((_DWORD *)v41[0] + 9) = v10;
    }
    *((_QWORD *)v41[0] + 8) = ghsemGreLock;
LABEL_8:
    if ( (unsigned int)DC::bSetDefaultRegion(v41[0], v10, (__int64)v11) )
    {
      if ( qword_1C02515A0 && (int)qword_1C02515A0(v12) >= 0 && qword_1C02515A8 )
        qword_1C02515A8(v41, *(_DWORD *)(a1 + 40) & 1);
      DC::vUpdate_VisRect(v41[0], *((__m128i **)v41[0] + 140));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr(v13);
      if ( DcAttr )
      {
        if ( a1 == *(_QWORD *)(gpDispInfo + 40) )
          **((_DWORD **)v41[0] + 122) |= 2u;
        v42 = 1;
        if ( (v3 & 2) != 0 )
          *((_DWORD *)v41[0] + 9) |= 8u;
        v15 = v41[0];
        v16 = (unsigned __int16)*(_DWORD *)v41[0] | (*(_DWORD *)v41[0] >> 8) & 0xFF0000;
        if ( v16 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*(_DWORD *)v41[0],
                                        1)
                 + 13) == HIWORD(v16) )
              v16 = (unsigned __int16)v16;
          }
          else
          {
            v16 = (unsigned __int16)*(_DWORD *)v41[0];
          }
        }
        v17 = *((_QWORD *)gpHandleManager + 2);
        v18 = *(_DWORD *)(v17 + 2056);
        if ( v16 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
        {
          v22 = 0LL;
        }
        else
        {
          if ( v16 >= v18 )
            v19 = ((v16 - v18) >> 16) + 1;
          else
            v19 = 0LL;
          v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
          if ( (_DWORD)v19 )
            v21 = v16 + ((1 - (_DWORD)v19) << 16) - v18;
          else
            v21 = v16;
          v22 = 0LL;
          if ( v21 < *(_DWORD *)(v20 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                         + 16LL * (unsigned __int8)v21
                         + 8) )
          {
            v22 = *(_QWORD *)v20 + 24LL * v21;
          }
        }
        if ( v16 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v16,
                                        1)
                 + 13) == HIWORD(v16) )
              v16 = (unsigned __int16)v16;
          }
          else
          {
            v16 = (unsigned __int16)v16;
          }
        }
        v23 = *(_DWORD *)(v17 + 2056);
        if ( v16 >= v23 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
          goto LABEL_77;
        if ( v16 >= v23 )
          v24 = ((v16 - v23) >> 16) + 1;
        else
          v24 = 0LL;
        v25 = *(_QWORD *)(v17 + 8 * v24 + 8);
        if ( (_DWORD)v24 )
          v16 += ((1 - (_DWORD)v24) << 16) - v23;
        if ( v16 >= *(_DWORD *)(v25 + 20) )
LABEL_77:
          v26 = 0LL;
        else
          v26 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * ((unsigned __int64)v16 >> 8))
                       + 16LL * (unsigned __int8)v16
                       + 8);
        if ( v26 != v15 )
          v22 = 0LL;
        DC::RestoreAttributes(v15, DcAttr);
        *(_QWORD *)(v22 + 16) = DcAttr;
        v45 = *(_QWORD *)(a1 + 32);
        v27 = v45;
        *((_QWORD *)v41[0] + 7) = 0LL;
        if ( v27
          && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v43)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v45) )
        {
          *((_QWORD *)v41[0] + 7) = v39;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v45, v39, v40);
        }
        v6 = *(_QWORD *)v41[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6, 1LL);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v41);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v28, (unsigned int)&LockRelease, v29, (__int64)ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v30);
  }
  return v6;
}
