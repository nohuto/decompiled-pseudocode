/*
 * XREFs of MiInitializeVsmEnclave @ 0x14097A228
 * Callers:
 *     MiInitializeEnclave @ 0x14097A120 (MiInitializeEnclave.c)
 * Callees:
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     PsDereferenceVsmEnclave @ 0x140882604 (PsDereferenceVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x14097A9C4 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x14097AC04 (MiUnmapImageForEnclaveUse.c)
 *     PsInitializeVsmEnclave @ 0x1409B4318 (PsInitializeVsmEnclave.c)
 */

__int64 __fastcall MiInitializeVsmEnclave(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v11; // esi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  void *v15; // rbx
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
      v13 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
      LOBYTE(v14) = CurrentThread->PreviousMode;
      v15 = (void *)v13;
      v11 = MiMapImageForEnclaveUse(v12, v13, v14, &v18, &v17);
      ObfDereferenceObject(v15);
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
