/*
 * XREFs of ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E968
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C007D6F8 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C007D7EC (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E56C (-ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007A178 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C007BF68 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007F350 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ReleaseKernelPresentUpdateReferences(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  CFlipPropertySetBase *v4; // rcx
  CPoolBufferResource *v5; // rcx

  v2 = *((_QWORD *)a2 + 6);
  v3 = v2 + *((unsigned int *)a2 + 10);
  while ( v2 < v3 )
  {
    if ( *(_DWORD *)v2 < 2u )
      goto LABEL_12;
    if ( *(_DWORD *)v2 == 2 || *(_DWORD *)v2 == 3 )
    {
      CFlipResource::Release(*(CFlipResource **)(v2 + 8));
LABEL_12:
      v2 += 16LL;
    }
    else if ( *(_DWORD *)v2 == 4 )
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
      v2 += 40LL;
    }
  }
}
