/*
 * XREFs of RtlStringCbCatW @ 0x180047324
 * Callers:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1800471B8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CBB34 (LdrpAppxGetRemediationRegistryKey.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800473F4 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCbCatW(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r11
  signed int v5; // r9d
  signed int v7; // eax
  __int64 v8; // r8
  _WORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2 >> 1;
  v5 = 0;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    v7 = RtlStringLengthWorkerW(a1, a2 >> 1, &v16);
    v8 = v16;
    v5 = v7;
  }
  if ( v5 >= 0 )
  {
    v9 = (_WORD *)(a1 + 2 * v8);
    v10 = v3 - v8;
    if ( v3 != v8 )
    {
      v11 = 2147483646LL;
      v12 = a3 - (_QWORD)v9;
      do
      {
        if ( !v11 )
          break;
        v13 = *(_WORD *)((char *)v9 + v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    v5 = v10 == 0 ? 0x80000005 : 0;
    *v14 = 0;
  }
  return (unsigned int)v5;
}
