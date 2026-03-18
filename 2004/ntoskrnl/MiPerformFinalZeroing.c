/*
 * XREFs of MiPerformFinalZeroing @ 0x140549E78
 * Callers:
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 */

void __fastcall MiPerformFinalZeroing(ULONG_PTR *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  ULONG_PTR *v6; // rdi
  ULONG_PTR *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  ULONG_PTR v12; // rbx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = a2;
  v6 = a1;
  if ( a2 )
  {
    v7 = a1;
    v8 = (unsigned int)v4;
    do
    {
      v9 = 48 * *v7++ - 0x58000000000LL;
      *(_QWORD *)(v9 + 16) = v3;
      v3 = v9;
      --v8;
    }
    while ( v8 );
  }
  MiChangePageAttributeBatch(v3, a3, ZeroPte);
  if ( (_DWORD)v4 )
  {
    v11 = v4;
    do
    {
      v12 = *v6;
      MiZeroPhysicalPage(*v6, 1, a3, v10);
      _InterlockedOr(v13, 0);
      MiSetPfnTbFlushStamp(48 * v12 - 0x58000000000LL, KiTbFlushTimeStamp, 0);
      ++v6;
      --v11;
    }
    while ( v11 );
  }
}
