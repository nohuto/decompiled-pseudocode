/*
 * XREFs of _RtlOpenModernAppOptionsKey@12 @ 0x4B33FDAB
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 */

int __fastcall RtlOpenModernAppOptionsKey(int a1, int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD v4[6]; // [esp+4h] [ebp-20h] BYREF
  HANDLE Handle[2]; // [esp+1Ch] [ebp-8h] BYREF

  if ( RtlpModernAppKey )
  {
    *a3 = RtlpModernAppKey;
  }
  else
  {
    v4[4] = 0;
    v4[5] = 0;
    v4[0] = 24;
    v4[1] = a2;
    v4[3] = 576;
    v4[2] = a1;
    result = ZwOpenKey((int)Handle, 9, (int)v4);
    if ( result < 0 )
      return result;
    if ( _InterlockedCompareExchange(&RtlpModernAppKey, (signed __int32)Handle[0], 0) )
      NtClose(Handle[0]);
    *a3 = RtlpModernAppKey;
  }
  return 0;
}
