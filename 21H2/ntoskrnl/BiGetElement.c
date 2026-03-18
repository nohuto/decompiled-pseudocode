/*
 * XREFs of BiGetElement @ 0x140A1D4A4
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A1E118 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x140A1EE84 (BiCreateBootEntry.c)
 *     BiExportEfiBootManager @ 0x140A1FB1C (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140A204C4 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x140A210D4 (BiUpdateEfiEntry.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetElement(__int64 a1, unsigned int a2, GUID **a3, _DWORD *a4)
{
  int ElementDataWithFlags; // ebx
  GUID *PoolWithTag; // rdi
  __int64 v10; // r8
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  *a4 = 0;
  *a3 = 0LL;
  ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, (__int64)a3, 0LL, (unsigned int *)&NumberOfBytes);
  if ( ElementDataWithFlags == -1073741789 )
  {
    PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
    if ( PoolWithTag )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, v10, PoolWithTag, (unsigned int *)&NumberOfBytes);
      if ( ElementDataWithFlags < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
      }
      else
      {
        *a4 = NumberOfBytes;
        *a3 = PoolWithTag;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ElementDataWithFlags;
}
