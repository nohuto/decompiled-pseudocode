/*
 * XREFs of HvlSharedIsr @ 0x1404F1E80
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A7AE8 (HvlEnlightenProcessor.c)
 *     KiHvInterruptSubDispatch @ 0x140404E80 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     HvlpGetLpcbByLpIndex @ 0x140390E48 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1404F2110 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpHandleIommuFaultMessage @ 0x1404F9574 (HvlpHandleIommuFaultMessage.c)
 */

char __fastcall HvlSharedIsr(__int64 a1)
{
  int v1; // eax
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v3; // rbx
  unsigned int *v4; // rcx
  __int64 v5; // rcx

  LOBYTE(v1) = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    LODWORD(a1) = KeGetPcr()->Prcb.Number;
    LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
    v3 = *((_QWORD *)HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex) + 5);
    _m_prefetchw((const void *)(v3 + 1024));
    v1 = *(_DWORD *)(v3 + 1024);
    if ( v1 )
    {
      v4 = (unsigned int *)(v3 + 1040);
      if ( *(_DWORD *)(v3 + 1024) == -2147483612 )
      {
        HvlpHandleIommuFaultMessage(v4);
      }
      else
      {
        v5 = qword_140CF6908 + 104LL * *v4;
        *(_DWORD *)(v5 + 4) = 2;
        KiInsertQueueDpc(v5 + 8, 0LL, 0LL, 0LL, 0);
      }
      *(_DWORD *)(v3 + 1024) = 0;
      LOBYTE(v1) = *(_BYTE *)(v3 + 1029);
      if ( (v1 & 1) != 0 )
      {
        LOBYTE(v1) = 0;
        __writemsr(0x40000084u, 0LL);
      }
    }
  }
  return v1;
}
