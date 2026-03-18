/*
 * XREFs of HvlpDynamicUpdateMicrocode @ 0x14089140C
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x140891370 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x140254270 (MmBuildMdlForNonPagedPool.c)
 *     HvcallInitInputControl @ 0x140365AC0 (HvcallInitInputControl.c)
 *     HvcallFastExtended @ 0x14038FE30 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F04C8 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404F9138 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404F9154 (HvlpHvToNtStatus.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x140891084 (HvlpLogMicrocodeUpdateStatus.c)
 */

__int64 __fastcall HvlpDynamicUpdateMicrocode(void *a1, ULONG a2)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v5; // rdi
  __int16 v7; // ax
  __int64 v8; // rdx
  __int16 v9; // cx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  void *v13; // [rsp+40h] [rbp-38h] BYREF
  ULONG v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+50h] [rbp-28h]

  v12 = 0LL;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v5 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmBuildMdlForNonPagedPool(Mdl);
  HvcallInitInputControl(7, &v12);
  LODWORD(v12) = v12 | 0x10000;
  v15 = 0;
  v13 = a1;
  v14 = a2;
  while ( 1 )
  {
    v7 = HvcallFastExtended(v12, (__int64)&v13, 0x18u, 0, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v7) )
      break;
    v11 = HvlpHandleInsufficientMemory(v9, v8, v10);
    if ( v11 < 0 )
      goto LABEL_8;
  }
  v11 = HvlpHvToNtStatus(v9);
LABEL_8:
  IoFreeMdl(v5);
  if ( v11 >= 0 )
    HvlpLogMicrocodeUpdateStatus();
  return (unsigned int)v11;
}
