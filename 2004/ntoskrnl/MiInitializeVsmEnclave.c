/*
 * XREFs of MiInitializeVsmEnclave @ 0x1408CFA98
 * Callers:
 *     MiInitializeEnclave @ 0x1408CF990 (MiInitializeEnclave.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MiLockVad @ 0x140249DF8 (MiLockVad.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     MiMapImageForEnclaveUse @ 0x1408D03BC (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x1408D05FC (MiUnmapImageForEnclaveUse.c)
 *     PsDereferenceVsmEnclave @ 0x14090AAB4 (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14090AB64 (PsInitializeVsmEnclave.c)
 */

__int64 __fastcall MiInitializeVsmEnclave(PEPROCESS Process, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v11; // esi
  __int64 v12; // rsi
  struct _DMA_ADAPTER *v13; // rax
  __int64 v14; // r8
  struct _DMA_ADAPTER *v15; // rbx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 72);
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v9) = 0;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 16)) <= 1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  if ( *(_BYTE *)(v4 + 76) )
  {
    if ( a4 < 0x38 )
    {
      v11 = -1073741820;
      goto LABEL_10;
    }
    v12 = *(_QWORD *)(a3 + 48);
    if ( v12 )
    {
      v13 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
      LOBYTE(v14) = CurrentThread->PreviousMode;
      v15 = v13;
      v11 = MiMapImageForEnclaveUse(v12, v13, v14, &v18, &v17);
      HalPutDmaAdapter(v15);
      if ( v11 < 0 )
        goto LABEL_10;
      v9 = *(_QWORD *)(*(_QWORD *)(v17 + 96) + 56LL);
    }
  }
  v11 = PsInitializeVsmEnclave(v4, a3, a4, v9, v18);
LABEL_10:
  PsDereferenceVsmEnclave((PVOID)v4);
  if ( v18 )
    MiUnmapImageForEnclaveUse();
  MiLockVad((__int64)CurrentThread, a2);
  return (unsigned int)v11;
}
