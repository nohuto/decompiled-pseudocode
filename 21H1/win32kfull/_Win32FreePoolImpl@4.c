/*
 * XREFs of _Win32FreePoolImpl@4 @ 0x832A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z @ 0x249F8E (-LookUpAndRemove@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __stdcall Win32FreePoolImpl(struct NSInstrumentation::CBackTraceStorageUnit *P)
{
  struct NSInstrumentation::CBackTraceStorageUnit *v1; // esi
  int v2; // edi
  NSInstrumentation::CPointerHashTable *v3; // ecx
  struct NSInstrumentation::CBackTraceStorageUnit *v4; // [esp+Ch] [ebp-4h] BYREF

  v1 = P;
  v2 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  v4 = P;
  P = 0;
  v3 = *(NSInstrumentation::CPointerHashTable **)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 48);
  if ( !v3 )
  {
    if ( !*(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 52) )
      goto LABEL_3;
LABEL_8:
    if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(&v4, &P) )
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *(NSInstrumentation::CPrioritizedWriterLock **)(v2 + 56),
        P);
    goto LABEL_3;
  }
  if ( ((unsigned __int16)v1 & 0xFFFu) >= 8
    && NSInstrumentation::CPointerHashTable::Remove(v3, (char *)v1 - 8, (void **)&P) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *(NSInstrumentation::CPrioritizedWriterLock **)(v2 + 56),
      P);
    ExFreePoolWithTag((char *)v1 - 8, 0);
    return;
  }
  if ( *(_DWORD *)(v2 + 52) )
    goto LABEL_8;
LABEL_3:
  ExFreePoolWithTag(v1, 0);
}
