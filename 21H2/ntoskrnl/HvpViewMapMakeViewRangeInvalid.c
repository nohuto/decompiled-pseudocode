/*
 * XREFs of HvpViewMapMakeViewRangeInvalid @ 0x14080C508
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14068D310 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x14091A000 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14020B57C (CmSiProtectViewOfSection.c)
 *     CmSiUnlockViewOfSection @ 0x14020B600 (CmSiUnlockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeInvalid(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 i; // rbp
  __int64 result; // rax
  __int64 j; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0;
  v7 = a1;
  for ( i = a3; i < a4; i += 4096LL )
  {
    if ( !a2[8] )
      break;
    a1 = a2[3];
    v12 = (unsigned __int64)(i - a1) >> 12;
    if ( (*((_BYTE *)a2 + v12 + 72) & 0x10) != 0 )
    {
      CmSiUnlockViewOfSection(a1, *(__int64 **)(v7 + 24), i + a2[7] - a1, 4096LL);
      *((_BYTE *)a2 + v12 + 72) &= ~0x10u;
      --a2[8];
    }
  }
  result = CmSiProtectViewOfSection(a1, *(__int64 **)(v7 + 24), a3 + a2[7] - a2[3], a4 - a3, 0x80000001, (__int64)&v13);
  for ( j = a3; j < a4; *((_BYTE *)a2 + result + 72) = 0 )
  {
    v11 = j;
    j += 4096LL;
    result = (unsigned __int64)(v11 - a2[3]) >> 12;
  }
  if ( a2[5] == a3 )
  {
    if ( a2[6] == a4 )
    {
      a2[5] = 0LL;
      a2[6] = 0LL;
    }
    else
    {
      a2[5] = a4;
    }
  }
  else if ( a2[6] == a4 )
  {
    a2[6] = a3;
  }
  return result;
}
