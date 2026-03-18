/*
 * XREFs of PnpConcatPWSTR @ 0x140647040
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x1406D39C0 (PiDqOpenUserObjectRegKey.c)
 *     PiSwStopDestroy @ 0x140741C2C (PiSwStopDestroy.c)
 *     PipCheckForDenyExecute @ 0x140744DBC (PipCheckForDenyExecute.c)
 *     PiSwInstanceInfoInit @ 0x140747784 (PiSwInstanceInfoInit.c)
 *     PiSwGetChildPdo @ 0x14076C61C (PiSwGetChildPdo.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     RtlStringCbCatW @ 0x140240028 (RtlStringCbCatW.c)
 *     RtlStringCchLengthW @ 0x140240108 (RtlStringCchLengthW.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpConcatPWSTR(size_t cchMax, ULONG Tag, PVOID *a3, unsigned __int64 a4)
{
  ULONGLONG v7; // r11
  unsigned __int64 v8; // rsi
  STRSAFE_PCNZWCH *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // r11
  _WORD *PoolWithTag; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  NTSTRSAFE_PCWSTR *v15; // rdi
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  size_t pcchLength[2]; // [rsp+28h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+60h] BYREF

  v19 = a4;
  pcchLength[0] = 0LL;
  pullResult = 0LL;
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
          goto LABEL_19;
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
    goto LABEL_19;
  }
  v10 = RtlULongLongMult(v7, 2uLL, &pullResult);
  if ( v10 < 0 )
    goto LABEL_19;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, pullResult, Tag);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
LABEL_19:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, Tag);
      *a3 = 0LL;
    }
    return (unsigned int)v10;
  }
  *PoolWithTag = 0;
  v13 = v19;
  v14 = 0LL;
  if ( v19 )
  {
    v15 = (NTSTRSAFE_PCWSTR *)&v19;
    do
    {
      if ( *++v15 )
      {
        v10 = RtlStringCbCatW((NTSTRSAFE_PWSTR)*a3, pullResult, *v15);
        if ( v10 < 0 )
          goto LABEL_19;
        v13 = v19;
      }
      ++v14;
    }
    while ( v14 < v13 );
  }
  return (unsigned int)v10;
}
