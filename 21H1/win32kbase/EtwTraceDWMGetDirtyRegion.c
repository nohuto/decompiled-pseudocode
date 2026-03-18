/*
 * XREFs of EtwTraceDWMGetDirtyRegion @ 0x1C0039580
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C01559E4 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1C0156A94 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDWMGetDirtyRegion(int a1, char a2, struct REGION *a3)
{
  unsigned int RegionPtrData; // eax
  unsigned int v7; // esi
  struct _RGNDATA *v8; // rax
  struct _RGNDATA *v9; // rbx
  int v10; // r8d

  if ( a3 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1C024B738 - 1) > 2u
      && (qword_1C024B720 & 0x8000000000001000uLL) != 0
      && (qword_1C024B728 & 0x8000000000001000uLL) == qword_1C024B728 )
    {
      RegionPtrData = GrepGetRegionPtrData(a3, 0, 0LL);
      v7 = RegionPtrData;
      if ( RegionPtrData )
      {
        v8 = (struct _RGNDATA *)Win32AllocPool(RegionPtrData, 2037609301LL);
        v9 = v8;
        if ( v8 )
        {
          if ( GrepGetRegionPtrData(a3, v7, v8) )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              McTemplateK0xqnqNR3_EtwWriteTransfer((_DWORD)v9 + 16, (unsigned int)&DWMGetRgnEvent, v10, a1, a2);
          }
          Win32FreePool(v9);
        }
      }
    }
  }
}
