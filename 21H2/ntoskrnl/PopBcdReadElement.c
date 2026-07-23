/*
 * XREFs of PopBcdReadElement @ 0x14078362C
 * Callers:
 *     PopBcdSetDefaultResumeObjectElements @ 0x1407830B4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F59E4 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopBcdReadElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, _DWORD *a4)
{
  PVOID PoolWithTag; // rdi
  BCD_FLAGS v9; // r8d
  NTSTATUS ElementDataWithFlags; // ebx
  ULONG NumberOfBytes[6]; // [rsp+30h] [rbp-18h] BYREF

  NumberOfBytes[0] = 0;
  if ( BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)a3, 0LL, NumberOfBytes) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x64634250u);
    if ( PoolWithTag )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, v9, PoolWithTag, NumberOfBytes);
      if ( ElementDataWithFlags < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        ElementDataWithFlags = 0;
        *a4 = NumberOfBytes[0];
        *a3 = PoolWithTag;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ElementDataWithFlags;
}
