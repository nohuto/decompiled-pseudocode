/*
 * XREFs of FastGetProfileStringW @ 0x1C00140C0
 * Callers:
 *     FastGetProfileStringFromIDW @ 0x1C0013E20 (FastGetProfileStringFromIDW.c)
 *     FastGetProfileIntW @ 0x1C0013EC0 (FastGetProfileIntW.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall FastGetProfileStringW(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // r12d
  void *v10; // rdi
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  ULONG Length; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  DestinationString = 0LL;
  Length = 0;
  v8 = a2;
  v17 = a7 | gdwPolicyFlags;
  v10 = (void *)OpenCacheKeyEx(a1, a2, 131097LL, &v17);
  if ( v10 )
  {
    while ( 1 )
    {
      Length = 2 * a6 + 12;
      v11 = Win32AllocPoolWithQuota(Length, 1919972181LL);
      if ( !v11 )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v12 = ZwQueryValueKey(v10, &DestinationString, KeyValuePartialInformation, (PVOID)v11, Length, &Length);
      if ( v12 == -2147483643 )
        v12 = 0;
      if ( v12 >= 0 )
      {
        v14 = a6;
        if ( *(_DWORD *)(v11 + 8) >> 1 < a6 )
          v14 = *(_DWORD *)(v11 + 8) >> 1;
        if ( *(_DWORD *)(v11 + 8) < 2u )
        {
          *a5 = 0;
        }
        else
        {
          *(_WORD *)(v11 + 2LL * (v14 - 1) + 12) = 0;
          RtlStringCchCopyW(a5, a6, (const unsigned __int16 *)(v11 + 12));
        }
        Win32FreePool(v11);
        ZwClose(v10);
        return v14;
      }
      if ( !v17 )
      {
        Win32FreePool(v11);
        break;
      }
      Win32FreePool(v11);
      ZwClose(v10);
      v10 = (void *)OpenCacheKeyEx(a1, v8, 131097LL, &v17);
      if ( !v10 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( (a7 & 0x10) != 0 )
      return 0LL;
  }
  if ( v10 )
    ZwClose(v10);
  if ( !a4 || RtlStringCchCopyW(a5, a6, a4) < 0 )
    return 0LL;
  v15 = -1LL;
  do
    ++v15;
  while ( a5[v15] );
  return (unsigned int)(v15 + 1);
}
