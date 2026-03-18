/*
 * XREFs of ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAU_DUMP_CONTEXT@2@@Z @ 0x249C82
 * Callers:
 *     ?Win32kAddLeakTrackingSecondaryData@@YGJPAXP6GJ0PBU_GUID@@0K@Z1@Z @ 0x18348F (-Win32kAddLeakTrackingSecondaryData@@YGJPAXP6GJ0PBU_GUID@@0K@Z1@Z.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0xCFDC2 (-Enumerate@CPointerHashTable@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     ?Enumerate@?$CSortedVector@PAXPAX@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x249D10 (-Enumerate@-$CSortedVector@PAXPAX@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z.c)
 *     ??$Enumerate@P6GXPAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x24A072 (--$Enumerate@P6GXPAX00@Z@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceS.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::Dump(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::_DUMP_CONTEXT *a2)
{
  _DWORD *v2; // edi
  char *v3; // ebx
  NSInstrumentation::CPrioritizedWriterLock *v4; // ecx
  NSInstrumentation::CPointerHashTable *v5; // ecx

  v2 = (_DWORD *)*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  v3 = (char *)a2 + 8;
  if ( !memcmp((char *)a2 + 8, &unk_25D9C0, 0x10u) )
  {
    v4 = (NSInstrumentation::CPrioritizedWriterLock *)v2[14];
    if ( v4 )
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Enumerate<void (__stdcall *)(void *,void *,void *)>(
        v4,
        (int)v4,
        a2);
  }
  else if ( !memcmp(v3, &unk_25D9B0, 0x10u) )
  {
    v5 = (NSInstrumentation::CPointerHashTable *)v2[12];
    if ( v5 )
      NSInstrumentation::CPointerHashTable::Enumerate(
        v5,
        (void (__stdcall *)(void *, void *, void *))NSInstrumentation::WriteAllocTableDumpBufferCallback,
        a2);
  }
  else if ( !memcmp(v3, &unk_25D9A0, 0x10u) && v2[13] )
  {
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(NSInstrumentation::WriteAllocTableDumpBufferCallback, a2);
  }
}
