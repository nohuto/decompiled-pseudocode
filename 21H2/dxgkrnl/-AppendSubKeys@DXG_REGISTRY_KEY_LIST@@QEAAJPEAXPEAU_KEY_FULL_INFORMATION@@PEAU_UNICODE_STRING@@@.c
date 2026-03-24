/*
 * XREFs of ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C02619C8
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C020B958 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241F70 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C000C680 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0038E5C (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0040F28 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02634CC (-InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::AppendSubKeys(
        DXG_REGISTRY_KEY_LIST *this,
        void *a2,
        struct _KEY_FULL_INFORMATION *a3,
        struct _UNICODE_STRING *a4)
{
  ULONG MaxNameLen; // eax
  ULONG v5; // edi
  __int64 v8; // rbx
  ULONG Length; // r15d
  unsigned __int16 *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int inserted; // eax
  __int64 v15; // rax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v20; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING *v22; // [rsp+60h] [rbp-A0h]
  char v23; // [rsp+70h] [rbp-90h] BYREF

  MaxNameLen = a3->MaxNameLen;
  v5 = 0;
  v22 = a4;
  KeyHandle = a2;
  LODWORD(v8) = 0;
  Length = 2 * MaxNameLen + 24;
  v10 = (unsigned __int16 *)operator new(Length, 0x4B677844u, 1, PagedPool);
  v19.Buffer = (wchar_t *)&v23;
  v17 = *(_DWORD *)L"\\";
  v20.Buffer = (wchar_t *)&v17;
  *(_QWORD *)&v19.Length = 34078720LL;
  *(_QWORD *)&v20.Length = 262146LL;
  if ( a3->SubKeys )
  {
    while ( 1 )
    {
      memset(v10, 0, Length);
      ResultLength = 0;
      v11 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, v10, Length, &ResultLength);
      v8 = v11;
      if ( v11 < 0 )
        break;
      RtlUnicodeStringCopy(&v19, v22);
      RtlUnicodeStringCat(&v19, &v20);
      RtlUnicodeStringCatString(&v19, v10 + 8);
      inserted = DXG_REGISTRY_KEY_LIST::InsertTail(this, &v19);
      v8 = inserted;
      if ( inserted < 0 )
        break;
      if ( ++v5 >= a3->SubKeys )
        goto LABEL_7;
    }
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = v8;
    WdLogEvent5_WdError(v15);
  }
LABEL_7:
  operator delete[](v10);
  return (unsigned int)v8;
}
