/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C01ADCBC
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C01AD7EC (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01AD930 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C01ADC74 (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  CHAR *v6; // rax
  CHAR *v7; // rbp

  v4 = a2;
  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v6 = (CHAR *)operator new[](a2, 0x63644356u, 256LL, a4);
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, a1->Buffer, a1->Length);
    operator delete[](a1->Buffer);
    a1->Buffer = v7;
    a1->MaximumLength = v4;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, v4);
  return 3221225495LL;
}
