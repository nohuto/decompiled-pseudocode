/*
 * XREFs of ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0068F1C
 * Callers:
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0068274 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_ca2be26854824586fda7f5038e54dcb4___ @ 0x1C006895C (CFlipObjectQueue_CFlipPresentCancel_--Iterate__lambda_ca2be26854824586fda7f5038e54dcb4___.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C00692E0 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0069D78 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C006A17C (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006A4A8 (-CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006A5A4 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006B1F8 (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipP.c)
 */

__int64 __fastcall CFlipManager::ConsumerDwmApplyUpdates(
        CFlipManager *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const struct tagCompositionRate *a4,
        struct _LIST_ENTRY *a5,
        enum FlipPresentProcessResult *a6)
{
  char *v6; // r15
  int updated; // r14d
  char *i; // r10
  const struct CFlipPresentUpdate *v12; // rdi
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  CFlipManager *v18; // rcx
  int v19; // eax
  char *v20; // rcx
  CEndpointResourceStateManager *v21; // rbx
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = (char *)this + 120;
  updated = 0;
  *(_DWORD *)a6 = 0;
  for ( i = (char *)*((_QWORD *)this + 15); ; i = *(char **)i )
  {
    if ( i == v6 )
    {
      *(_DWORD *)a6 = 3;
LABEL_6:
      v13 = (_QWORD *)((char *)this + 152);
      if ( (_QWORD *)*v13 != v13 )
      {
        v14 = (*v13 - 8LL) & -(__int64)(*v13 != 0LL);
        if ( v14 )
        {
          do
          {
            v15 = *(_QWORD **)(v14 + 8);
            if ( v15 == v13 )
              v16 = 0LL;
            else
              v16 = (unsigned __int64)(v15 - 1) & -(__int64)(v15 != 0LL);
            if ( *(_QWORD *)(v14 + 24) <= a2 )
              (**(void (__fastcall ***)(__int64, __int64, unsigned __int64, const struct tagCompositionRate *))v14)(
                v14,
                1LL,
                a3,
                a4);
            v14 = v16;
          }
          while ( v16 );
        }
      }
      return (unsigned int)updated;
    }
    v12 = (const struct CFlipPresentUpdate *)((unsigned __int64)(i - 24) & -(__int64)(i != 0LL));
    if ( *((_QWORD *)v12 + 8) == a2 )
      break;
  }
  v17 = a3 + *((_QWORD *)this + 29) * (unsigned __int64)*((unsigned int *)a4 + 1) / *(unsigned int *)a4;
  if ( (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)v12 + 32LL))(
         (unsigned __int64)(i - 24) & -(__int64)(i != 0LL),
         *((_QWORD *)this + 29) * (unsigned __int64)*((unsigned int *)a4 + 1) % *(unsigned int *)a4) <= v17 )
  {
    v19 = *(_DWORD *)a6;
  }
  else
  {
    *(_DWORD *)a6 = 1;
    v19 = 1;
  }
  if ( !v19 )
  {
    v23[0] = a6;
    v23[1] = v12;
    CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_ca2be26854824586fda7f5038e54dcb4___(
      (_QWORD **)this + 19,
      (__int64)v23);
    if ( !*(_DWORD *)a6 )
    {
      v20 = (char *)*((_QWORD *)v12 + 3);
      v18 = v20 == v6 ? 0LL : (CFlipManager *)((unsigned __int64)(v20 - 24) & -(__int64)(v20 != 0LL));
      if ( v18 && (*(__int64 (__fastcall **)(CFlipManager *))(*(_QWORD *)v18 + 32LL))(v18) <= a3 )
        *(_DWORD *)a6 = 3;
    }
  }
  if ( *(_DWORD *)a6 == 1 )
    goto LABEL_6;
  if ( *(_DWORD *)a6 && *((_BYTE *)v12 + 73) )
  {
    v21 = (CFlipManager *)((char *)this + 88);
  }
  else
  {
    v21 = (CFlipManager *)((char *)this + 88);
    updated = CEndpointResourceStateManager::ApplyIncrementalUpdate((CFlipManager *)((char *)this + 88), v12);
    if ( updated < 0 )
    {
      *((_QWORD *)this + 6) = 2LL;
      return (unsigned int)updated;
    }
  }
  if ( !*(_DWORD *)a6 )
  {
    updated = CEndpointResourceStateManager::PrepareUpdateTokensForDwm(
                v21,
                (CFlipManager *)((char *)this - 32),
                *((struct CFlipPropertySet **)v12 + 7),
                a5);
    if ( updated < 0 )
      CEndpointResourceStateManager::CancelPendingUpdates(v21);
    else
      CEndpointResourceStateManager::CommitPendingUpdates(v21);
  }
  CFlipManager::ReleaseKernelPresentUpdateReferences(v18, v12);
  CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v6);
  (*(void (__fastcall **)(const struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
  if ( updated >= 0 )
    goto LABEL_6;
  return (unsigned int)updated;
}
