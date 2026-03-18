/*
 * XREFs of NVMeQueuesReInit @ 0x1C000F350
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000CDB8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D088 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     CompletionQueueReInit @ 0x1C0009DA0 (CompletionQueueReInit.c)
 *     SubmissionQueueReInit @ 0x1C000F9B0 (SubmissionQueueReInit.c)
 */

void *__fastcall NVMeQueuesReInit(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  void *result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edx
  __int64 v10; // rax

  v1 = (_DWORD *)(a1 + 936);
  *(_DWORD *)(a1 + 824) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 28;
    --v3;
  }
  while ( v3 );
  SubmissionQueueReInit(a1, a1 + 288);
  result = CompletionQueueReInit(a1, a1 + 424);
  v5 = 0;
  if ( *(_WORD *)(a1 + 276) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 320);
      if ( *(_QWORD *)(v6 + 16LL * v5) )
        *(_QWORD *)(v6 + 16LL * v5) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 276);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  v7 = 0;
  if ( *(_WORD *)(a1 + 280) )
  {
    do
    {
      SubmissionQueueReInit(a1, *(_QWORD *)(a1 + 768) + 136LL * v7);
      result = (void *)*(unsigned __int16 *)(a1 + 280);
      ++v7;
    }
    while ( v7 < (unsigned int)result );
  }
  v8 = 0;
  if ( *(_WORD *)(a1 + 282) )
  {
    do
    {
      CompletionQueueReInit(a1, *(_QWORD *)(a1 + 776) + 344LL * v8);
      result = (void *)*(unsigned __int16 *)(a1 + 282);
      ++v8;
    }
    while ( v8 < (unsigned int)result );
  }
  v9 = 0;
  if ( *(_WORD *)(a1 + 210) )
  {
    do
    {
      v10 = v9++;
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 48 * v10 + 40) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 210);
    }
    while ( v9 < (unsigned int)result );
  }
  return result;
}
