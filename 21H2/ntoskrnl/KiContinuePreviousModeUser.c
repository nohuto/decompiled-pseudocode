/*
 * XREFs of KiContinuePreviousModeUser @ 0x140298420
 * Callers:
 *     KiContinueEx @ 0x1402987C0 (KiContinueEx.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x140298378 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1402985E4 (KeVerifyContextRecord.c)
 *     RtlpSanitizeContextFlags @ 0x140298720 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x14041F500 (KeContextToKframes.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpReadExtendedContext @ 0x140703290 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  void *v11; // rsp
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  unsigned __int64 ExtendedFeatureDisableMask; // rdx
  __int64 v16; // [rsp+20h] [rbp-10h]
  unsigned int v17; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v18; // [rsp+34h] [rbp+4h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp+10h] BYREF
  int v21; // [rsp+60h] [rbp+30h]

  v5 = a2;
  v19 = 0LL;
  v18 = 0;
  CurrentThread = KeGetCurrentThread();
  v17 = *(_DWORD *)(a1 + 48);
  if ( a4 <= 0xFF )
  {
    memset(v20, 0, sizeof(v20));
  }
  else
  {
    *(_OWORD *)v20 = *(_OWORD *)a4;
    *(_QWORD *)&v20[16] = *(_QWORD *)(a4 + 16);
    if ( (*(_DWORD *)&v20[4] & 0xFFFFFFFC) != 0 || *(_DWORD *)v20 >= 4u || *(_OWORD *)&v20[8] != 0LL )
      return 3221225485LL;
  }
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&v17, a2);
  if ( (int)result >= 0 )
  {
    v9 = v17;
    result = RtlGetExtendedContextLength(v17, (__int64)&v18);
    if ( (int)result >= 0 )
    {
      v10 = v18 + 15LL;
      if ( v10 <= v18 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v17, 0, v18);
      result = RtlInitializeExtendedContext((__int64)&v17, v9, (__int64)&v19);
      if ( (int)result >= 0 )
      {
        LOBYTE(v12) = 1;
        result = RtlpReadExtendedContext(v13, v12, v19, v9, a1, 0LL);
        if ( (int)result >= 0 )
        {
          v19 = 0LL;
          result = KeVerifyContextXStateCetU((__int64)CurrentThread, &v17, &v19);
          if ( (int)result >= 0 )
          {
            result = KeVerifyContextRecord(
                       (_DWORD)CurrentThread,
                       (unsigned int)&v17,
                       v14,
                       (unsigned int)v20,
                       (__int64)&v19);
            if ( (int)result >= 0 )
            {
              ExtendedFeatureDisableMask = CurrentThread->ExtendedFeatureDisableMask;
              if ( ExtendedFeatureDisableMask
                && (v21 & 0x100040) == 0x100040
                && (ExtendedFeatureDisableMask & *(_QWORD *)((_BYTE *)&v17 + SLODWORD(STACK[0x510]) + 1232)) != 0 )
              {
                return 3221225485LL;
              }
              else
              {
                LOBYTE(v16) = 1;
                KeContextToKframes(a3, v5, (unsigned int)&v17, v9, v16);
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
