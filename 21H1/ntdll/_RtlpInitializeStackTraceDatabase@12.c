/*
 * XREFs of _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlControlStackTraceDataBase@12 @ 0x4B368DBE (_RtlControlStackTraceDataBase@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlStdDeleteStackDatabase@4 @ 0x4B368E70 (_RtlStdDeleteStackDatabase@4.c)
 *     _RtlStdInitializeStackDatabase@16 @ 0x4B368EA0 (_RtlStdInitializeStackDatabase@16.c)
 */

int __fastcall RtlpInitializeStackTraceDatabase(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  NTSTATUS v4; // esi
  PVOID v5; // ecx
  PVOID BaseAddress; // [esp+8h] [ebp-14h] BYREF
  _DWORD v7[3]; // [esp+Ch] [ebp-10h] BYREF

  if ( RtlpStackTraceDatabase )
    return -1073741302;
  v4 = RtlStdInitializeStackDatabase(a1, a2, __PAIR64__(&BaseAddress, a3));
  if ( v4 >= 0 )
  {
    v5 = BaseAddress;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&RtlpStackTraceDatabase, (signed __int32)BaseAddress, 0) )
    {
      RtlStdDeleteStackDatabase(v5, BaseAddress);
      return -1073741302;
    }
    if ( v4 >= 0 && LdrInitState == 3 )
    {
      v7[0] = 1;
      v7[1] = 0x8000000;
      v7[2] = 0x8000000;
      RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpStackTraceDatabaseHeapEnum, (int)v7, 0);
    }
  }
  return v4;
}
