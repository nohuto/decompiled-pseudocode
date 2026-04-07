/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180038CC8
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180038C08 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800B5600 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800B56F8 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800B57A8 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x1800381CC (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180038FF8 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18003CB28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        int *a4)
{
  HWND v7; // rdx
  int v8; // ebx
  int Record; // eax
  int v10; // r14d
  __int64 v11; // rax
  CWindowPropertyTracker::CPropertyChangeRecord *v12; // rcx
  CWindowPropertyTracker::CPropertyChangeRecord *v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // r8d
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // r8d
  int v29; // eax
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+30h] [rbp-10h] BYREF
  const struct CStoryboard *v31; // [rsp+78h] [rbp+38h] BYREF
  CWindowPropertyTracker::CPropertyChangeRecord *v32; // [rsp+80h] [rbp+40h] BYREF

  v31 = a2;
  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = (HWND)*((_QWORD *)a3 + 5);
  v8 = 0;
  v32 = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, v7);
  v10 = Record;
  if ( Record >= 0 )
  {
    v24 = 0LL;
    v25 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( (unsigned int)v24 < *(_DWORD *)(v25 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v25 + 8) + 8 * v24) == v31 )
        goto LABEL_18;
      v24 = (unsigned int)(v24 + 1);
    }
    _mm_lfence();
    v26 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v27 = *(_DWORD *)(v26 + 32);
    v28 = v27 + 1;
    if ( v27 + 1 >= v27 )
    {
      if ( v28 > *(_DWORD *)(v26 + 28) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet(v26 + 8, 8LL, 1LL, &v31);
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v26 + 8) + 8LL * *(unsigned int *)(v26 + 32)) = v31;
        *(_DWORD *)(v26 + 32) = v28;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    goto LABEL_18;
  }
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  v12 = (CWindowPropertyTracker::CPropertyChangeRecord *)v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 28) = 0;
    *(_DWORD *)(v11 + 32) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  v32 = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7Du);
    goto LABEL_26;
  }
  *(_QWORD *)v12 = *((_QWORD *)a3 + 5);
  v13 = v32;
  v14 = *((_DWORD *)v32 + 8);
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  else if ( v15 <= *((_DWORD *)v32 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v32 + 1) + 8LL * *((unsigned int *)v32 + 8)) = v31;
    *((_DWORD *)v13 + 8) = v15;
  }
  else
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)v32 + 8, 8LL, 1LL, &v31);
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
  }
  *((_BYTE *)v32 + 44) = (*((_BYTE *)a3 + 612) & 2) != 0;
  *((_DWORD *)v32 + 12) = *((_DWORD *)a3 + 45);
  *((_DWORD *)v32 + 13) = *((_DWORD *)a3 + 46);
  v17 = 0;
  if ( *((_DWORD *)a3 + 47) - *((_DWORD *)a3 + 45) >= 0 )
    v17 = *((_DWORD *)a3 + 47) - *((_DWORD *)a3 + 45);
  *((_DWORD *)v32 + 14) = v17;
  v18 = 0;
  if ( *((_DWORD *)a3 + 48) - *((_DWORD *)a3 + 46) >= 0 )
    v18 = *((_DWORD *)a3 + 48) - *((_DWORD *)a3 + 46);
  *((_DWORD *)v32 + 15) = v18;
  *((_OWORD *)v32 + 4) = *(_OWORD *)((char *)a3 + 196);
  *((_OWORD *)v32 + 5) = *(_OWORD *)((char *)a3 + 212);
  *((_DWORD *)v32 + 24) = *((_DWORD *)a3 + 25);
  v19 = v32;
  *(_OWORD *)((char *)v32 + 100) = *(_OWORD *)((char *)v32 + 44);
  *(_OWORD *)((char *)v19 + 116) = *(_OWORD *)((char *)v19 + 60);
  *(_OWORD *)((char *)v19 + 132) = *(_OWORD *)((char *)v19 + 76);
  *(_QWORD *)((char *)v19 + 148) = *(_QWORD *)((char *)v19 + 92);
  v20 = *((_DWORD *)this + 6);
  v21 = v20 + 1;
  if ( v20 + 1 < v20 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v8 = -2147024362;
  }
  else
  {
    if ( v21 <= *((_DWORD *)this + 5) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * v20) = v32;
      *((_DWORD *)this + 6) = v21;
LABEL_16:
      v10 = *((_DWORD *)this + 6) - 1;
      goto LABEL_17;
    }
    v23 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v32);
    v8 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xC0u);
    if ( v8 >= 0 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8Eu);
LABEL_17:
  if ( v8 >= 0 )
  {
LABEL_18:
    *a4 = v10;
    goto LABEL_19;
  }
LABEL_26:
  if ( v32 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v32);
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return (unsigned int)v8;
}
