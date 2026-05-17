/*
 * XREFs of RtlpHpSegProtect @ 0x18010F214
 * Callers:
 *     RtlpHpHeapProtect @ 0x18010E094 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009D810 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpSegProtect(__int64 a1)
{
  char *v1; // rdi
  char *i; // rbx
  char *v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+48h] [rbp-40h]
  int v7; // [rsp+50h] [rbp-38h]
  char *v8; // [rsp+A0h] [rbp+18h]

  v1 = (char *)(a1 + 72);
  for ( i = *(char **)(a1 + 72); ; i = *(char **)i )
  {
    if ( i == v1 )
      return 0LL;
    v8 = i;
    v4 = &i[-*(_DWORD *)a1];
    if ( i < v4 )
      break;
LABEL_7:
    ;
  }
  while ( 1 )
  {
    result = ZwQueryVirtualMemory();
    if ( (int)result < 0 )
      return result;
    if ( v7 == 4096 )
    {
      result = ZwProtectVirtualMemory();
      if ( (int)result < 0 )
        return result;
    }
    v8 += v6;
    if ( v8 >= v4 )
      goto LABEL_7;
  }
}
