/*
 * XREFs of GreCreateDisplayDC @ 0x1C004DC90
 * Callers:
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C001FB00 (CreateCacheDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C001FD54 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreCreateCompatibleDC @ 0x1C004DB90 (GreCreateCompatibleDC.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C00A32F0 (NtGdiCreateMetafileDC.c)
 *     UserGetDesktopDC @ 0x1C00A3358 (UserGetDesktopDC.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0011970 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     HmgAllocateDcAttr @ 0x1C001D474 (HmgAllocateDcAttr.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D8E8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D91C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C003E50C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C003E544 (HmgFreeDcAttr.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C003E610 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003ECA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00411F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreValidateVisrgn @ 0x1C004B8CC (GreValidateVisrgn.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0064DAC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0090B00 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C00913C0 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C00916DC (XDCOBJ_vSetDefaultFontWrap.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00CE94C (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ?Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ @ 0x1C00CEBA0 (-Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ.c)
 *     ?IsAllocationBusy@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00D0144 (-IsAllocationBusy@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 */

__int64 __fastcall GreCreateDisplayDC(HDEV a1, unsigned int a2, int a3)
{
  char v3; // r15
  __int64 v6; // r14
  unsigned __int8 *v7; // rcx
  bool v8; // al
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r8d
  _QWORD *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // edx
  BOOL v19; // ecx
  unsigned int v20; // eax
  int v21; // edx
  struct _DC_ATTR *DcAttr; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // r8d
  DYNAMICMODECHANGESHARELOCK *v26; // rcx
  int v27; // [rsp+20h] [rbp-98h]
  _QWORD v28[3]; // [rsp+50h] [rbp-68h] BYREF
  struct DC *v29[2]; // [rsp+70h] [rbp-48h] BYREF
  int v30; // [rsp+80h] [rbp-38h]
  __int64 v31; // [rsp+C0h] [rbp+8h] BYREF
  int v32; // [rsp+D0h] [rbp+18h]
  HDEV v33; // [rsp+D8h] [rbp+20h] BYREF

  v32 = a3;
  v3 = a3;
  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
  v33 = a1;
  if ( (unsigned int)Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled() )
  {
    v7 = gpTypeIsolation[6];
    if ( v7 )
      v8 = v7[36] == 0;
    else
      v8 = 0;
    if ( v8 && !(v7 ? NSInstrumentation::CTypeIsolation<913408,3568>::IsAllocationBusy(v7, a1) : 0) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 46LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_11:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v7);
      return 0LL;
    }
    if ( gbGDIOn )
    {
      v11 = *((_DWORD *)a1 + 10);
      if ( (v11 & 0x400) != 0 && (v11 & 0x20000) != 0 )
        goto LABEL_11;
    }
  }
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v29, a1, a2, v3 & 1, v27);
  if ( v29[0] )
  {
    if ( !(unsigned int)Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled() )
      *((_QWORD *)v29[0] + 6) = a1;
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v33, v12, v13);
    *(_DWORD *)((struct HDEV__ *)v29[0] + 18) = a1[456];
    *(_DWORD *)((struct HDEV__ *)v29[0] + 19) = a1[532];
    *((_QWORD *)v29[0] + 3) = *((_QWORD *)a1 + 225);
    *((_QWORD *)v29[0] + 8) = *((_QWORD *)a1 + 6);
    if ( a2 == 1 )
    {
      v31 = 0x100000001LL;
      *((_QWORD *)v29[0] + 64) = 0x100000001LL;
    }
    else
    {
      v14 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v33);
      *((_QWORD *)v29[0] + 64) = *v14;
      if ( a2 )
        goto LABEL_36;
      v15 = *((_DWORD *)v29[0] + 9) | 0x200;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v15 = *((_DWORD *)v29[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v29[0] + 9) = v15;
      v16 = *((_DWORD *)v29[0] + 9) | 1;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v16 = *((_DWORD *)v29[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v29[0] + 9) = v16;
      v17 = *((_DWORD *)v29[0] + 9) | 0x1000;
      if ( ((_DWORD)a1[10] & 0x400) == 0 )
        v17 = *((_DWORD *)v29[0] + 9) & 0xFFFFEFFF;
      *((_DWORD *)v29[0] + 9) = v17;
      if ( (*((_DWORD *)a1 + 10) & 0x80u) != 0 )
        goto LABEL_36;
      DC::pSurface(v29[0], *((struct SURFACE **)a1 + 319));
      v18 = *((_DWORD *)v29[0] + 9);
      v19 = (v18 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 319) + 112LL) & 0x200) != 0;
      v20 = v18 & 0xFFFF7FFF;
      v21 = v18 | 0x8000;
      if ( !v19 )
        v21 = v20;
      *((_DWORD *)v29[0] + 9) = v21;
    }
    *((_QWORD *)v29[0] + 8) = ghsemGreLock;
LABEL_36:
    if ( (unsigned int)DC::bSetDefaultRegion(v29[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v29, (_DWORD)a1[10] & 1);
      DC::vUpdate_VisRect(v29[0], *((__m128i **)v29[0] + 140));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      v28[2] = DcAttr;
      if ( DcAttr )
      {
        if ( a1 == *(HDEV *)(gpDispInfo + 40) )
          **((_DWORD **)v29[0] + 122) |= 2u;
        v30 = 1;
        if ( (v3 & 2) != 0 )
          *((_DWORD *)v29[0] + 9) |= 8u;
        SetupDCAttributes(v29[0], DcAttr);
        v28[0] = *((_QWORD *)a1 + 4);
        v23 = v28[0];
        *((_QWORD *)v29[0] + 7) = 0LL;
        if ( v23
          && ((_DWORD)a1[10] & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v28) )
        {
          *((_QWORD *)v29[0] + 7) = v24;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)v28, v24, v25);
        }
        v6 = *(_QWORD *)v29[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6, 1);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v29);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v26);
  return v6;
}
