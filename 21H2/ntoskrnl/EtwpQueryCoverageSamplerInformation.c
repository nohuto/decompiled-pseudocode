/*
 * XREFs of EtwpQueryCoverageSamplerInformation @ 0x1409477E4
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BAC8C (ExCheckFullProcessInformationAccess.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     EtwpCoverageSamplerQuery @ 0x140946424 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerQueryStatusInformation @ 0x140946FCC (EtwpCoverageSamplerQueryStatusInformation.c)
 */

__int64 __fastcall EtwpQueryCoverageSamplerInformation(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  struct _DMA_ADAPTER *v8; // rdi
  int StatusInformation; // ebx
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-30h]

  v8 = 0LL;
  Object = 0LL;
  if ( a2 < 0x10 )
  {
    StatusInformation = -1073741820;
    goto LABEL_19;
  }
  *(_OWORD *)Handle = *(_OWORD *)a1;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) != 1 )
  {
    if ( BYTE4(Handle[0]) != 3 )
    {
      if ( BYTE4(Handle[0]) != 4 )
      {
        StatusInformation = -1073741821;
        goto LABEL_19;
      }
      if ( a3 )
      {
        StatusInformation = ExCheckFullProcessInformationAccess(a3);
        if ( StatusInformation >= 0 )
        {
          *a4 = 24;
          if ( a2 >= 0x18 )
            StatusInformation = EtwpCoverageSamplerQueryStatusInformation((bool *)(a1 + 16));
          else
            StatusInformation = -1073741789;
        }
        goto LABEL_19;
      }
    }
LABEL_4:
    StatusInformation = -1073741637;
    goto LABEL_19;
  }
  if ( !a3 )
    goto LABEL_4;
  StatusInformation = ExCheckFullProcessInformationAccess(a3);
  if ( StatusInformation >= 0 )
  {
    Object = 0LL;
    StatusInformation = ObReferenceObjectByHandle(Handle[1], 1u, qword_140C198B0, a3, &Object, 0LL);
    v8 = (struct _DMA_ADAPTER *)Object;
    if ( StatusInformation >= 0 )
    {
      StatusInformation = EtwpCoverageSamplerQuery((ULONG_PTR)Object, a1, a2, a4);
      if ( StatusInformation >= 0 )
        StatusInformation = 0;
    }
  }
LABEL_19:
  if ( v8 )
    HalPutDmaAdapter(v8);
  return (unsigned int)StatusInformation;
}
