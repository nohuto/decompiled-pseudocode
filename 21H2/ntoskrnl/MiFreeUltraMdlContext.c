/*
 * XREFs of MiFreeUltraMdlContext @ 0x14055F514
 * Callers:
 *     MmMapMdl @ 0x1405377F0 (MmMapMdl.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiFreeUltraMdlContext(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned int i; // ecx

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = __rdtsc();
  v4 = ((unsigned int)v3 | ((unsigned __int64)HIDWORD(v3) << 32)) >> 4;
  v5 = qword_140C4EC78 + ((unsigned __int64)CurrentPrcb->ParentNode->Affinity.Reserved[0] << 9);
  for ( i = 0; i < 0x10; ++i )
  {
    LODWORD(v4) = v4 & 7;
    if ( *(unsigned __int16 *)(((unsigned __int64)(unsigned int)v4 << 6) + v5) <= (dword_140C4EC70
                                                                                 / (unsigned int)(unsigned __int16)KeNumberNodes) >> 3 )
      break;
    LODWORD(v4) = v4 + 1;
  }
  return RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + (((unsigned int)v4 < 8 ? v4 : 0) << 6)), ListEntry);
}
