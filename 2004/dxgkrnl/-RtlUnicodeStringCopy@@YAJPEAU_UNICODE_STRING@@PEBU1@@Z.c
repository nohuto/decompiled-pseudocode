/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C000C4E4
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0143B28 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01699E8 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C020BC24 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C020BF14 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C0261718 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C000C5AC (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C000C618 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  __int16 v3; // bx
  size_t v5; // rdx
  NTSTATUS v6; // r8d
  unsigned __int64 v7; // r10
  wchar_t *Buffer; // r11
  size_t v9; // rcx
  __int16 v10; // dx
  char *v11; // r9
  size_t v13; // [rsp+20h] [rbp-18h]
  ULONG v14; // [rsp+28h] [rbp-10h]
  size_t v15; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v6 = RtlUnicodeStringValidateDestWorker(a1, &v16, &v15, 0LL, v13, v14);
  if ( v6 >= 0 )
  {
    v6 = RtlUnicodeStringValidateWorker(a2, v5, v6);
    if ( v6 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v7 = (unsigned __int64)a2->Length >> 1;
      }
      v9 = v15;
      v6 = 0;
      v10 = 0;
      if ( !v15 )
        goto LABEL_13;
      v11 = (char *)((char *)v16 - (char *)Buffer);
      do
      {
        if ( !v7 )
          break;
        --v7;
        *(wchar_t *)((char *)Buffer + (_QWORD)v11) = *Buffer;
        ++v10;
        ++Buffer;
        --v9;
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_13:
        if ( v7 )
          v6 = -2147483643;
      }
      v3 = v10;
    }
    a1->Length = 2 * v3;
  }
  return (unsigned int)v6;
}
