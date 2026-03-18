/*
 * XREFs of ?CaptureBroadcastString@@YGHPAU_LARGE_UNICODE_STRING@@PAU_LARGE_STRING@@@Z @ 0xE9F68
 * Callers:
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall CaptureBroadcastString(ULONG *a1, int a2)
{
  ULONG v4; // eax
  NTSTATUS v5; // edi
  bool v6; // zf
  ULONG v7; // eax
  WCHAR *v8; // eax
  ULONG v10; // [esp-4h] [ebp-3Ch]
  ULONG MaxBytesInUnicodeString; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v4 = *(_DWORD *)a2;
  v5 = 0;
  if ( *(int *)(a2 + 4) < 0 )
    v4 *= 2;
  v6 = v4 == -2;
  v7 = v4 + 2;
  MaxBytesInUnicodeString = v7;
  if ( v6 )
    return 0;
  v8 = (WCHAR *)Win32AllocPoolWithQuota(v7, 1936946005);
  a1[2] = (ULONG)v8;
  if ( !v8 )
    return 0;
  a1[1] = MaxBytesInUnicodeString & 0x7FFFFFFF;
  ms_exc.registration.TryLevel = 0;
  v10 = *(_DWORD *)a2;
  if ( *(int *)(a2 + 4) < 0 )
  {
    v5 = RtlMultiByteToUnicodeN(v8, MaxBytesInUnicodeString, &MaxBytesInUnicodeString, *(const CHAR **)(a2 + 8), v10);
    *a1 = MaxBytesInUnicodeString;
  }
  else
  {
    *a1 = *(_DWORD *)a2;
    memcpy(v8, *(const void **)(a2 + 8), v10);
  }
  *(_WORD *)(a1[2] + 2 * (*a1 >> 1)) = 0;
  ms_exc.registration.TryLevel = -2;
  if ( v5 < 0 )
  {
    Win32FreePool(a1[2]);
    return 0;
  }
  return 1;
}
