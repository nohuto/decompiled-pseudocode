/*
 * XREFs of ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC
 * Callers:
 *     _lambda_b0902d438c78d6c07810189cac586b83_::operator() @ 0x1C007C158 (_lambda_b0902d438c78d6c07810189cac586b83_--operator().c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x1C007D1C8 (-ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007D264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007DDE4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x1C007E284 (-PresentCancel@CFlipManager@@QEAAJ_K@Z.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E380 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E630 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

struct CFlipManager::PresentHistory::Entry *__fastcall CFlipManager::PresentHistory::GetNextEntry(
        CFlipManager::PresentHistory *this)
{
  __int64 v1; // rdx
  char *v2; // rbx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD v8[6]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *(unsigned int *)this;
  v2 = (char *)this + 88 * v1;
  *(_DWORD *)this = (unsigned __int8)(v1 + 1);
  memset(v8, 0, 0x58uLL);
  v3 = v8[1];
  *(_OWORD *)(v2 + 8) = v8[0];
  v4 = v8[2];
  *(_OWORD *)(v2 + 24) = v3;
  v5 = v8[3];
  *(_OWORD *)(v2 + 40) = v4;
  v6 = v8[4];
  *(_OWORD *)(v2 + 56) = v5;
  *(_QWORD *)&v5 = *(_QWORD *)&v8[5];
  *(_OWORD *)(v2 + 72) = v6;
  *((_QWORD *)v2 + 11) = v5;
  RtlCaptureStackBackTrace(1u, 4u, (PVOID *)v2 + 7, 0LL);
  return (struct CFlipManager::PresentHistory::Entry *)(v2 + 8);
}
