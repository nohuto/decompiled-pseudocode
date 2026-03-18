/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAE_NPAE@Z @ 0xE9A8E
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@QAE@Z @ 0xE9A44 (-Create@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 * Callees:
 *     ??R_lambda_f00ae72afe7b3212139fad1145a037d4_@@QBEPAU_RTL_BITMAP@@I@Z @ 0xE9AF6 (--R_lambda_f00ae72afe7b3212139fad1145a037d4_@@QBEPAU_RTL_BITMAP@@I@Z.c)
 */

char __thiscall NSInstrumentation::CSectionBitmapAllocator<20480,80>::Initialize(_DWORD *this, int a2)
{
  unsigned __int64 v2; // rax
  ULONG v4; // eax
  _DWORD *PoolWithTag; // eax
  int v6; // eax
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
  v6 = _lambda_f00ae72afe7b3212139fad1145a037d4_::operator()(0xFFu);
  if ( !v6 )
    return 0;
  v7 = a2 ^ this[2];
  this[3] = v6 ^ this[2];
  result = 1;
  this[1] = v7;
  return result;
}
