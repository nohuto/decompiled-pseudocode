/*
 * XREFs of PnpConcatPWSTR @ 0x14078C9E8
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x1406998CC (PiDqOpenUserObjectRegKey.c)
 *     PiSwGetChildPdo @ 0x1406E32E4 (PiSwGetChildPdo.c)
 *     PiSwInstanceInfoInit @ 0x1407661D0 (PiSwInstanceInfoInit.c)
 *     PiSwStopDestroy @ 0x140766F84 (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x14076A520 (PipCheckForDenyExecute.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1402E0A04 (RtlStringCbCatW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpConcatPWSTR(size_t cchMax, ULONG Tag, PVOID *a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r14
  STRSAFE_PCNZWCH *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // r11
  size_t v12; // r15
  _WORD *Pool2; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  NTSTRSAFE_PCWSTR *v16; // rdi
  size_t pcchLength[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+60h] BYREF

  v19 = a4;
  pcchLength[0] = 0LL;
  *a3 = 0LL;
  v7 = 1LL;
  v8 = 0LL;
  if ( a4 )
  {
    v9 = (STRSAFE_PCNZWCH *)&v19;
    do
    {
      if ( *++v9 )
      {
        v10 = RtlStringCchLengthW(*v9, cchMax, pcchLength);
        if ( v10 < 0 )
          goto LABEL_20;
        v7 = pcchLength[0] + v11;
        a4 = v19;
      }
      ++v8;
    }
    while ( v8 < a4 );
  }
  if ( v7 > cchMax )
  {
    v10 = -1073741811;
    goto LABEL_20;
  }
  v12 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
  {
    v10 = -1073741675;
LABEL_20:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, Tag);
      *a3 = 0LL;
    }
    return (unsigned int)v10;
  }
  v10 = 0;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 2 * v7, Tag);
  *a3 = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_20;
  }
  *Pool2 = 0;
  v14 = v19;
  v15 = 0LL;
  if ( v19 )
  {
    v16 = (NTSTRSAFE_PCWSTR *)&v19;
    do
    {
      if ( *++v16 )
      {
        v10 = RtlStringCbCatW((NTSTRSAFE_PWSTR)*a3, v12, *v16);
        if ( v10 < 0 )
          goto LABEL_20;
        v14 = v19;
      }
      ++v15;
    }
    while ( v15 < v14 );
  }
  return (unsigned int)v10;
}
