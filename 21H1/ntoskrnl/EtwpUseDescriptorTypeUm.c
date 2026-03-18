/*
 * XREFs of EtwpUseDescriptorTypeUm @ 0x1409302A4
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall EtwpUseDescriptorTypeUm(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  int v4; // ebx
  char v5; // al
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(void **)a1;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(v2, 0x800u, EtwpRegistrationObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    v5 = *(_BYTE *)(a1 + 8);
    if ( v5 == 1 )
    {
      _InterlockedOr16((volatile signed __int16 *)&DmaAdapter[6].Size, 0x200u);
    }
    else if ( v5 )
    {
      v4 = -1073741811;
    }
    else
    {
      _InterlockedAnd16((volatile signed __int16 *)&DmaAdapter[6].Size, 0xFDFFu);
    }
    HalPutDmaAdapter(DmaAdapter);
    return v4;
  }
  return result;
}
