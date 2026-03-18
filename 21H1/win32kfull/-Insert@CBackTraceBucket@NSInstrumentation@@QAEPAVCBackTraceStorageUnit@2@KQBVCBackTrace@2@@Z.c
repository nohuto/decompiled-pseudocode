/*
 * XREFs of ?Insert@CBackTraceBucket@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@KQBVCBackTrace@2@@Z @ 0x24A37A
 * Callers:
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A2AF (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     ??8CBackTrace@NSInstrumentation@@QBE_NABV01@@Z @ 0x24A114 (--8CBackTrace@NSInstrumentation@@QBE_NABV01@@Z.c)
 *     ?Create@CBackTraceStorageUnit@NSInstrumentation@@SGPAV12@KQBVCBackTrace@2@PAV12@@Z @ 0x24A170 (-Create@CBackTraceStorageUnit@NSInstrumentation@@SGPAV12@KQBVCBackTrace@2@PAV12@@Z.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__thiscall NSInstrumentation::CBackTraceBucket::Insert(
        NSInstrumentation::CBackTraceBucket *this,
        unsigned int a2,
        const struct NSInstrumentation::CBackTrace *const Buf2)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  struct NSInstrumentation::CBackTraceStorageUnit *result; // eax
  volatile signed __int32 *v7; // edx
  const struct NSInstrumentation::CBackTrace *v8; // [esp+0h] [ebp-10h]
  struct NSInstrumentation::CBackTraceStorageUnit *v9; // [esp+4h] [ebp-Ch]
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)this;
  v10 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    while ( *(_DWORD *)(v4 + 4) != a2 || !NSInstrumentation::CBackTrace::operator==((void *)(v4 + 8), Buf2) )
    {
      v4 = *(_DWORD *)v4;
      if ( !v4 )
      {
        v5 = v10;
        goto LABEL_6;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 88));
    return (struct NSInstrumentation::CBackTraceStorageUnit *)v4;
  }
  else
  {
LABEL_6:
    result = NSInstrumentation::CBackTraceStorageUnit::Create(Buf2, a2, v5, v8, v9);
    if ( result )
    {
      v7 = (volatile signed __int32 *)*((_DWORD *)this + 1);
      *(_DWORD *)this = result;
      if ( v7 )
        *((_DWORD *)result + 23) = _InterlockedIncrement(v7);
    }
  }
  return result;
}
