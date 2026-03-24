/*
 * XREFs of ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006BCE8
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C006AE8C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4Fli.c)
 *     ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006B2A4 (-EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C006B424 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C006B498 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006EB1C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C0068A40 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C006BCB8 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C006DE50 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ReleaseKernelPresentUpdateReferences(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  CFlipPropertySetBase *v4; // rcx
  CPoolBufferResource *v5; // rcx

  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 6);
    v3 = v2 + *((unsigned int *)a2 + 10);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v2 >= v3 )
          return;
        if ( *(_DWORD *)v2 >= 2u )
          break;
LABEL_13:
        v2 += 16LL;
      }
      if ( *(_DWORD *)v2 == 2 || *(_DWORD *)v2 == 3 )
      {
        CFlipResource::Release(*(CFlipResource **)(v2 + 8));
        goto LABEL_13;
      }
      if ( *(_DWORD *)v2 == 4 )
      {
        v4 = *(CFlipPropertySetBase **)(v2 + 24);
        if ( v4 )
          CFlipPropertySetBase::Release(v4);
        v5 = *(CPoolBufferResource **)(v2 + 16);
        if ( v5 )
        {
          CPoolBufferResource::RemoveUsageReference(v5);
          CFlipResource::Release(*(CFlipResource **)(v2 + 16));
        }
        v2 += 32LL;
      }
    }
  }
}
