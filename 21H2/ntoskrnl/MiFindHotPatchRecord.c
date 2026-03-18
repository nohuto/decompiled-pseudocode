/*
 * XREFs of MiFindHotPatchRecord @ 0x1409730F0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiFindProcessImageHotPatchRecord @ 0x14097323C (MiFindProcessImageHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     MiCompareHotPatchNodes @ 0x140972C58 (MiCompareHotPatchNodes.c)
 */

__int64 __fastcall MiFindHotPatchRecord(__int64 *a1, ULONG_PTR a2, int a3, int a4, PUNICODE_STRING StringOut)
{
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbx
  int v9; // eax
  NTSTATUS v10; // ebx
  bool v11; // zf
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  __int128 v17; // [rsp+40h] [rbp-18h]

  v5 = a2;
  v14 = 0LL;
  v13 = 0LL;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = a3;
  v16 = a4;
  if ( !(_DWORD)a2 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C533C0, a2);
  }
  v8 = *a1;
  if ( !v8 )
    goto LABEL_13;
  do
  {
    v9 = MiCompareHotPatchNodes((__int64)&v13, v8);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v8;
    }
  }
  while ( v8 );
  if ( v8 )
  {
    if ( !StringOut || (v10 = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(v8 + 32), StringOut), v10 >= 0) )
      v10 = 0;
  }
  else
  {
LABEL_13:
    v10 = -1073741275;
  }
  if ( !v5 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C533C0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C533C0);
    KeAbPostRelease((ULONG_PTR)&qword_140C533C0);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v10;
}
