/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NPAE@Z @ 0x208D14
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@QAE@Z @ 0x208C77 (-Create@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 * Callees:
 *     ??R_lambda_2917e5af034c4698795842f08d20f7d9_@@QBEPAU_RTL_BITMAP@@I@Z @ 0x183DE6 (--R_lambda_2917e5af034c4698795842f08d20f7d9_@@QBEPAU_RTL_BITMAP@@I@Z.c)
 */

char __thiscall NSInstrumentation::CSectionBitmapAllocator<217088,840>::Initialize(_DWORD *this, int a2)
{
  unsigned __int64 v2; // rax
  ULONG v4; // eax
  _DWORD *PoolWithTag; // eax
  struct _RTL_BITMAP *v6; // eax
  int v7; // edx
  char result; // al
  ULONG Seed; // [esp+0h] [ebp-4h] BYREF

  v2 = __rdtsc();
  Seed = v2;
  v4 = RtlRandomEx(&Seed);
  this[2] = v4;
  if ( !v4 )
  {
    this[2] = 1;
    v4 = 1;
  }
  this[3] ^= v4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 4u, 0x6F736955u);
  *this = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0;
  v6 = _lambda_2917e5af034c4698795842f08d20f7d9_::operator()(0xD4u);
  if ( !v6 )
    return 0;
  v7 = a2 ^ this[2];
  this[3] = (unsigned int)v6 ^ this[2];
  result = 1;
  this[1] = v7;
  return result;
}
