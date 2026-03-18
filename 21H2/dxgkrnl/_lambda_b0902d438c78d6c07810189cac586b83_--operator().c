/*
 * XREFs of _lambda_b0902d438c78d6c07810189cac586b83_::operator() @ 0x1C007C158
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 */

__int64 __fastcall lambda_b0902d438c78d6c07810189cac586b83_::operator()(int **a1)
{
  int v2; // ecx
  int v3; // ecx
  void (__fastcall *v4)(_QWORD, int *, int *, int *, int *, int *); // rax
  void (__fastcall *v5)(_QWORD, int *, int *, int *, int *, int *); // rax
  void (__fastcall *v6)(_QWORD, int *, int *, int *, int *, int *); // rax
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  CFlipManager::PresentHistory *v9; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rdi
  int *v11; // rcx

  v2 = **a1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = *(void (__fastcall **)(_QWORD, int *, int *, int *, int *, int *))(*((_QWORD *)DXGGLOBAL_GetGlobal() + 38073)
                                                                              + 120LL);
        v4((unsigned int)a1[1][82], a1[2], a1[3], a1[4], a1[5], a1[6]);
      }
    }
    else
    {
      v5 = *(void (__fastcall **)(_QWORD, int *, int *, int *, int *, int *))(*((_QWORD *)DXGGLOBAL_GetGlobal() + 38073)
                                                                            + 112LL);
      v5((unsigned int)a1[1][82], a1[2], a1[3], a1[4], a1[5], a1[6]);
    }
  }
  else
  {
    v6 = *(void (__fastcall **)(_QWORD, int *, int *, int *, int *, int *))(*((_QWORD *)DXGGLOBAL_GetGlobal() + 38073)
                                                                          + 104LL);
    v6((unsigned int)a1[1][82], a1[2], a1[3], a1[4], a1[5], a1[6]);
  }
  Global = DXGGLOBAL_GetGlobal();
  (*(void (__fastcall **)(_QWORD, int *))(*((_QWORD *)Global + 38073) + 96LL))((unsigned int)a1[1][82], a1[2]);
  result = (__int64)a1[1];
  v9 = *(CFlipManager::PresentHistory **)(result + 24);
  if ( v9 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v9);
    result = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1[7] + 72LL))(a1[7]);
    *((_QWORD *)NextEntry + 1) = a1[5];
    *((_QWORD *)NextEntry + 2) = a1[2];
    *((_QWORD *)NextEntry + 3) = a1[6];
    v11 = *a1;
    *(_QWORD *)NextEntry = result;
    if ( *v11 )
    {
      if ( *v11 == 1 )
      {
        *((_DWORD *)NextEntry + 10) = 9;
      }
      else if ( *v11 == 2 )
      {
        *((_DWORD *)NextEntry + 10) = 11;
      }
    }
    else
    {
      *((_DWORD *)NextEntry + 10) = 7;
    }
  }
  return result;
}
