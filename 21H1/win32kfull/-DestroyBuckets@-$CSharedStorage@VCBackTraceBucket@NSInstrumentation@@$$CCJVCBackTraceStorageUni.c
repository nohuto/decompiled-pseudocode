/*
 * XREFs of ?DestroyBuckets@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@CGXPAVCHashBucket@12@I@Z @ 0x24A20C
 * Callers:
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QAE@XZ @ 0xD42E8 (--1CLeakTrackingAllocator@NSInstrumentation@@QAE@XZ.c)
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2@@Z @ 0x249E25 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCBackTraceStoreEx@2.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::DestroyBuckets(
        char *P,
        int a2)
{
  int v2; // ebx
  PVOID v3; // eax
  _DWORD ***v4; // edi
  _DWORD **v5; // esi
  _DWORD *v6; // [esp-10h] [ebp-18h]

  v2 = a2;
  v3 = P;
  if ( a2 )
  {
    v4 = (_DWORD ***)(P + 4);
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        while ( *v5 )
        {
          v6 = *v5;
          *v5 = (_DWORD *)**v5;
          ExFreePoolWithTag(v6, 0);
        }
        ExFreePoolWithTag(v5, 0);
      }
      v4 += 2;
      --v2;
    }
    while ( v2 );
    v3 = P;
  }
  ExFreePoolWithTag(v3, 0);
}
