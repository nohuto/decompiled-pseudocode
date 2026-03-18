/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C00A90C0
 * Callers:
 *     GreCreatePatternBrush @ 0x1C0051E80 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C029B520 (bInitBRUSHOBJ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C00A91F0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00A9338 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C00A9AF4 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C00A9B18 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, __int64 a2, int a3)
{
  int v5; // r14d
  __int64 v6; // rdi
  struct SURFACE *v7; // rax
  __int64 v8; // rbx
  int v9; // r8d
  int IsMonochrome; // eax
  HBITMAP v11; // rdx
  __int64 v12; // rcx
  ULONG v14; // ecx
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v5 = a2;
  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17, a2, a3);
  v7 = (struct SURFACE *)HmgShareLockCheck((unsigned int)a1, 5);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    v14 = 6;
    goto LABEL_14;
  }
  if ( (*((_DWORD *)v7 + 28) & 0x4000000) == 0 )
  {
    v14 = 87;
LABEL_14:
    EngSetLastError(v14);
    goto LABEL_7;
  }
  if ( hbmCreateClone(v7, a3 != 0 ? 8 : 0, a3 != 0 ? 8 : 0) )
  {
    v17 = *(_QWORD *)(v8 + 128);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v17);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v15, v11, a1, IsMonochrome, 0, 0x40u, v5);
    if ( v15[0] )
    {
      v6 = *(_QWORD *)v15[0];
      v16 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v15);
  }
LABEL_7:
  if ( v8 )
    HmgDecrementShareReferenceCountEx(v8, 0LL);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v9);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v12);
  }
  return v6;
}
