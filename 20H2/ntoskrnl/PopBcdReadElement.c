/*
 * XREFs of PopBcdReadElement @ 0x14077F68C
 * Callers:
 *     PopBcdSetDefaultResumeObjectElements @ 0x14077F114 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F80A4 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdReadElement(int a1, int a2, _QWORD *a3, _DWORD *a4)
{
  PVOID PoolWithTag; // rdi
  int v9; // r8d
  int ElementDataWithFlags; // ebx
  unsigned int NumberOfBytes[6]; // [rsp+30h] [rbp-18h] BYREF

  NumberOfBytes[0] = 0;
  if ( (unsigned int)BcdGetElementDataWithFlags(a1, a2, (_DWORD)a3, 0, (__int64)NumberOfBytes) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x64634250u);
    if ( PoolWithTag )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, v9, (_DWORD)PoolWithTag, (__int64)NumberOfBytes);
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
