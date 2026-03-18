/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C00144D0
 * Callers:
 *     GreCreatePatternBrush @ 0x1C005F9E0 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C0014600 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0014748 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C001535C (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0015380 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  struct SURFACE *v8; // rax
  struct SURFACE *v9; // rbx
  int IsMonochrome; // eax
  HBITMAP v11; // rdx
  ULONG v13; // ecx
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
  LOBYTE(v7) = 5;
  v8 = (struct SURFACE *)HmgShareLockCheck(a1, v7);
  v9 = v8;
  if ( !v8 )
  {
    v13 = 6;
    goto LABEL_14;
  }
  if ( (*((_DWORD *)v8 + 28) & 0x4000000) == 0 )
  {
    v13 = 87;
LABEL_14:
    EngSetLastError(v13);
    goto LABEL_7;
  }
  if ( hbmCreateClone(v8, a3 != 0 ? 8 : 0, a3 != 0 ? 8 : 0) )
  {
    v16 = *((_QWORD *)v9 + 16);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v16);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v14, v11, a1, IsMonochrome, 0, 0x40u, a2);
    if ( v14[0] )
    {
      v6 = *(_QWORD *)v14[0];
      v15 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v14);
  }
LABEL_7:
  if ( v9 )
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v6;
}
