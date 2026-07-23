/*
 * XREFs of KiLockServiceTable @ 0x14039BC74
 * Callers:
 *     KeCompactServiceTable @ 0x14039BC14 (KeCompactServiceTable.c)
 * Callees:
 *     RtlLookupExceptionHandler @ 0x14032187C (RtlLookupExceptionHandler.c)
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     RtlpConvertFunctionEntry @ 0x14032E9A0 (RtlpConvertFunctionEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x14036F230 (RtlCaptureImageExceptionValues.c)
 *     KiLockExtendedServiceTable @ 0x1403D7A88 (KiLockExtendedServiceTable.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KiFastGetCallersAddress @ 0x140A360D8 (KiFastGetCallersAddress.c)
 *     KiFatalExceptionFilter @ 0x140A6E3C4 (KiFatalExceptionFilter.c)
 */

__int64 __fastcall KiLockServiceTable(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 CallersAddress; // r8
  __int64 v8; // r11
  ULONG v9; // r9d
  unsigned __int64 v10; // r8
  unsigned int *v11; // rcx
  int v12; // edx
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r8
  unsigned int i; // ecx
  _QWORD v20[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG v21; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
    KeExitRetpoline();
  else
    _mm_lfence();
  result = KiLockExtendedServiceTable(BugCheckParameter1);
  if ( !a4 )
  {
    _mm_lfence();
    RtlCaptureImageExceptionValues((void *)0x140000000LL, v20, &v21);
    if ( !v20[0] )
      KeBugCheck(0x31u);
    CallersAddress = KiFastGetCallersAddress();
    v9 = v21 / 0xC;
    if ( !(v21 / 0xC) )
      goto LABEL_31;
    v10 = CallersAddress - 0x140000000LL;
    v11 = (unsigned int *)(v8 + 12LL * (v9 - 1));
    if ( v10 < *v11 )
    {
      v12 = 0;
      v13 = v9 - 2;
      while ( v13 >= v12 )
      {
        v14 = (v12 + v13) >> 1;
        v11 = (unsigned int *)(v8 + 12LL * v14);
        if ( v10 < *v11 )
        {
          v13 = v14 - 1;
        }
        else
        {
          if ( v10 < v11[3] )
            break;
          v12 = v14 + 1;
        }
      }
    }
    if ( v10 < *v11 || v10 >= v11[1] )
      v11 = 0LL;
    if ( !v11 )
LABEL_31:
      KeBugCheck(0x31u);
    v15 = RtlpConvertFunctionEntry((__int64)v11, 0x140000000uLL);
    v17 = RtlLookupExceptionHandler(v15, 0x140000000uLL, 1u, v16, 0LL, v20);
    if ( v17 < 0 )
      KeBugCheckEx(0x31u, v17, 0LL, 0LL, 0LL);
    v18 = 1LL;
    for ( i = 0; i < *(_DWORD *)v20[0]; ++i )
    {
      if ( i )
      {
        if ( *(_DWORD *)(v20[0] + 16LL * i + 12) != (_DWORD)v18 )
          KeBugCheck(0x31u);
      }
      v18 = *(unsigned int *)(v20[0] + 16LL * i + 12);
    }
    if ( (_DWORD)v18 == 1 )
      KeBugCheck(0x31u);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))(0x140000000LL + (unsigned int)v18))(
             0LL,
             0LL,
             v18,
             v20[0]);
  }
  return result;
}
