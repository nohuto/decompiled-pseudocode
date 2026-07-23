/*
 * XREFs of PfpCopyEvent @ 0x140678D70
 * Callers:
 *     PfpFlushEventBuffers @ 0x140678C70 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140678FB0 (PfpFlushBuffers.c)
 * Callees:
 *     PfpIsProcessInfoPresent @ 0x140273348 (PfpIsProcessInfoPresent.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PfpLogPageAccess @ 0x140679350 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x1406799A0 (PfTAcquireLogEntry.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall PfpCopyEvent(__int64 *Src)
{
  unsigned __int64 v1; // rax
  int v2; // edx
  __int64 v4; // rcx
  unsigned __int8 v5; // al
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  PEPROCESS v15; // r9
  unsigned __int64 v16; // r8
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp+10h] BYREF

  v1 = *Src;
  v2 = *Src;
  Process = 0LL;
  LODWORD(v18) = 0;
  if ( (v2 & 0x1F000) != 0xA000LL )
  {
    v13 = (v1 >> 2) & 0x3FF;
    v14 = PfTAcquireLogEntry(&unk_140C4FC18, &v18, v13);
    if ( !v14 )
      return 3221225626LL;
    memmove((void *)(((v14 + 31) & 0xFFFFFFFFFFFFFFF8uLL) + 16LL * (unsigned int)v18), Src, (unsigned int)(16 * v13));
    return 0LL;
  }
  v4 = Src[4];
  v5 = v4;
  v17 = 0LL;
  if ( (v4 & 0x7FFFFFFFFFFFFFFFuLL) >= 0xFF )
    v5 = -1;
  v6 = 2LL;
  if ( v4 >= 0 )
    v6 = 4098LL;
  v7 = (_DWORD)Src[6] & 0xFF000000;
  DWORD2(v17) = v5 | (*((_DWORD *)Src + 12) << 8);
  v8 = Src[5];
  v9 = Src[3] << 12;
  *(_QWORD *)&v17 = v6 & 0xFFFFFFFF00FFFFFFuLL | v7;
  v18 = v9 | 1;
  v10 = PfpLogPageAccess(v8, (unsigned int)&v18, (unsigned int)&v17, (int)Src + 24, 1);
  if ( !v10 )
    return 3221225864LL;
  v11 = ((qword_140C4FC58 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
      + 40LL * (*(unsigned __int16 *)(v10 + 10) - (unsigned int)*(unsigned __int16 *)(qword_140C4FC58 + 36));
  if ( (*(_BYTE *)(v11 + 8) & 4) == 0 || PsLookupProcessByProcessId((HANDLE)*((unsigned int *)Src + 13), &Process) < 0 )
    return 0LL;
  v15 = Process;
  if ( (((__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink) & 0x1FFFFFFFFFFFFFFFLL) == Src[5]
    && PfpIsProcessInfoPresent((__int64)Process) )
  {
    v16 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8uLL | 1;
    *(_QWORD *)(v11 + 8) = v16;
    *(_QWORD *)(v11 + 8) = v16 & 7 | (8
                                    * ((__int64)v15[1].Header.WaitListHead.Flink ^ (__int64)v15[1].ThreadListHead.Flink));
    *(_DWORD *)(v11 + 28) = HIDWORD(v15[1].ActiveProcessors.Bitmap[8]);
    *(_DWORD *)(v11 + 24) = v15[1].Header.WaitListHead.Flink;
    *(_QWORD *)(v11 + 16) = v15;
  }
  ObfDereferenceObjectWithTag(v15, 0x746C6644u);
  return 0LL;
}
