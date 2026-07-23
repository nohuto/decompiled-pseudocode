/*
 * XREFs of MiCreateSection @ 0x14071CAF0
 * Callers:
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     MmCreateCacheManagerSection @ 0x1405FBBF8 (MmCreateCacheManagerSection.c)
 *     MmCreateSpecialImageSection @ 0x140698234 (MmCreateSpecialImageSection.c)
 *     MmCreateSectionEx @ 0x1406AB9E4 (MmCreateSectionEx.c)
 *     MiCreateSectionCommon @ 0x14071E810 (MiCreateSectionCommon.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     MiInitializeCreateSectionPacket @ 0x14071CD10 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x14071D000 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 *     MiLogSectionObjectEvent @ 0x1408C7AF0 (MiLogSectionObjectEvent.c)
 */

__int64 __fastcall MiCreateSection(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12,
        __int64 a13)
{
  int v17; // ebx
  int SectionPacket; // edi
  int ImageOrDataSection; // eax
  __int64 v20; // rbx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  LARGE_INTEGER v23; // rdx
  int v25; // ebx
  LARGE_INTEGER v26[2]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v27[26]; // [rsp+80h] [rbp-F8h] BYREF

  v17 = 0;
  memset(v27, 0, 0xC8uLL);
  SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( SectionPacket >= 0 )
  {
    while ( 1 )
    {
      LODWORD(v27[0]) |= v17;
      if ( !v27[5] && !v27[6] )
        break;
      ImageOrDataSection = MiCreateImageOrDataSection(v27);
      SectionPacket = ImageOrDataSection;
      if ( ImageOrDataSection != -1073741740 && ImageOrDataSection != -1073740682 )
        goto LABEL_5;
      if ( v27[22] )
        PsDereferencePartition(v27[22]);
      v25 = LODWORD(v27[0]) >> 25;
      memset(v27, 0, 0xC8uLL);
      SectionPacket = MiInitializeCreateSectionPacket(
                        (unsigned int)v27,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13);
      v17 = (v25 & 1) << 25;
      if ( SectionPacket < 0 )
        goto LABEL_12;
    }
    SectionPacket = MiCreatePagingFileMap((__int64)v27);
LABEL_5:
    if ( SectionPacket >= 0 )
    {
      SectionPacket = MiFinishCreateSection(v27);
      if ( SectionPacket >= 0 )
      {
        v20 = v27[8];
        v21 = v27[18];
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v27[8] + 24LL), -1LL, -1LL);
        if ( ((v27[0] & 9) == 0 && (*(_DWORD *)(v20 + 56) & 0x8000) != 0 || *(_QWORD *)(v21 + 48) > v22)
          && (v23 = *(LARGE_INTEGER *)(v21 + 48),
              *(_QWORD *)(v21 + 48) = v22,
              v26[0] = v23,
              SectionPacket = MmExtendSection(v21, v26, v27[0] & 1),
              SectionPacket < 0) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v21);
        }
        else
        {
          *a1 = v21;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v20 + 64) )
            MiLogSectionObjectEvent(v21, 1LL);
        }
      }
    }
  }
LABEL_12:
  if ( v27[22] )
    PsDereferencePartition(v27[22]);
  return (unsigned int)SectionPacket;
}
