/*
 * XREFs of KiUpdateSavedSupervisorState @ 0x1409B06B0
 * Callers:
 *     KiStartSavingSupervisorState @ 0x1409B0630 (KiStartSavingSupervisorState.c)
 * Callees:
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 KiUpdateSavedSupervisorState()
{
  unsigned int v0; // ebp
  unsigned __int64 v1; // rax
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rdi
  __int64 v4; // rsi
  unsigned int v5; // r13d
  _QWORD *v6; // r14
  PVOID v7; // rax
  PVOID *v8; // r14
  __int128 Context; // [rsp+20h] [rbp-38h] BYREF

  v0 = KeNumberProcessors_0;
  Context = 0LL;
  v1 = 8LL * (unsigned int)KeNumberProcessors_0;
  if ( v1 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v1, 0x65687358u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000600] - MEMORY[0xFFFFF780000003E8] + KiIptSaveAreaLength + 127;
  if ( !v0 )
  {
LABEL_11:
    *(_QWORD *)&Context = PoolWithTag;
    DWORD2(Context) = v0;
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiIpiUpdateExtendedSupervisorState, (ULONG_PTR)&Context);
    goto LABEL_12;
  }
  v6 = PoolWithTag;
  while ( *(_QWORD *)(*(_QWORD *)((char *)v6 + (char *)KiProcessorBlock - (char *)PoolWithTag) + 1728LL) )
  {
    *v6 = 0LL;
LABEL_10:
    v4 = (unsigned int)(v4 + 1);
    ++v6;
    if ( (unsigned int)v4 >= v0 )
      goto LABEL_11;
  }
  v7 = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x65707553u);
  *v6 = v7;
  if ( v7 )
  {
    memset(v7, 0, v5);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 )
  {
    v8 = (PVOID *)PoolWithTag;
    do
    {
      if ( *v8 )
        ExFreePoolWithTag(*v8, 0);
      ++v8;
      --v4;
    }
    while ( v4 );
  }
  v2 = -1073741670;
LABEL_12:
  ExFreePoolWithTag(PoolWithTag, 0);
  return v2;
}
