/*
 * XREFs of ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B0C2C
 * Callers:
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00B0B20 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006030 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00060DC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B29A8 (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VID.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationRepurposed(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  bool v2; // bl
  __int64 v6; // rdx
  DXGFASTMUTEX *v7; // rsi
  PRKPROCESS *v8; // rcx
  __int64 v9; // r9
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  if ( !dword_1C00504C4 )
    return 0;
  DXGFASTMUTEX::Acquire(a2[39]);
  if ( *((_WORD *)a2[64] + 2) == 3 )
  {
    v7 = a2[12];
    v8 = (PRKPROCESS *)*((_QWORD *)v7 + 1);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v8, &ApcState);
    if ( dword_1C00504C4 == 1 )
    {
      v2 = VIDMM_GLOBAL::QueryLocalAllocationResidency(this, v7) == D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
    }
    else if ( dword_1C00504C4 == 2 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2[12] + 1) + 24LL) + 128LL))(
             *(_QWORD *)(*((_QWORD *)a2[12] + 1) + 24LL),
             *((_QWORD *)a2[12] + 3)) >= 0 )
      {
        LOBYTE(v9) = 1;
        (*(void (__fastcall **)(_QWORD, DXGFASTMUTEX **, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a2[12] + 1) + 24LL)
                                                                         + 120LL))(
          *(_QWORD *)(*((_QWORD *)a2[12] + 1) + 24LL),
          a2,
          *((_QWORD *)a2[12] + 3),
          v9);
      }
      else
      {
        v2 = 1;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v6);
  return v2;
}
