/*
 * XREFs of PnpAllocateMultiSZ @ 0x140747620
 * Callers:
 *     PiSwPnPInfoInit @ 0x140747550 (PiSwPnPInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x140748500 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     PnpGetMultiSzLength @ 0x1407476E4 (PnpGetMultiSzLength.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpAllocateMultiSZ(void *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS MultiSzLength; // ebx
  ULONGLONG v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF
  ULONGLONG ullMultiplicand; // [rsp+58h] [rbp+20h] BYREF

  ullMultiplicand = 0LL;
  pullResult = 0LL;
  MultiSzLength = 0;
  *a4 = 0LL;
  if ( Src )
  {
    MultiSzLength = PnpGetMultiSzLength(Src, a2, &ullMultiplicand);
    if ( MultiSzLength >= 0 )
    {
      v7 = ullMultiplicand;
      if ( ullMultiplicand > 2 )
      {
        MultiSzLength = RtlULongLongMult(ullMultiplicand, 2uLL, &pullResult);
        if ( MultiSzLength >= 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, pullResult, 0x57706E50u);
          *a4 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src, pullResult);
            v9 = 2 * v7;
            v10 = 2LL;
            do
            {
              v9 -= 2LL;
              *(_WORD *)(v9 + *a4) = 0;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
      }
    }
  }
  return (unsigned int)MultiSzLength;
}
