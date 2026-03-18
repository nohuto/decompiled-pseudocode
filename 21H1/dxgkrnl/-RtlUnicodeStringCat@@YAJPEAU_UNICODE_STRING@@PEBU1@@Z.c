/*
 * XREFs of ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C003F15C
 * Callers:
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C0244C28 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1C025D418 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker_0 @ 0x1C003F338 (RtlUnicodeStringValidateDestWorker_0.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x1C003F3A8 (RtlUnicodeStringValidateWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCat(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  size_t v4; // rdx
  NTSTATUS v5; // r8d
  unsigned __int64 v6; // r10
  wchar_t *Buffer; // r11
  __int16 v8; // dx
  __int16 v9; // bx
  size_t v10; // r9
  char *v11; // rcx
  size_t v13; // [rsp+20h] [rbp-28h]
  ULONG v14; // [rsp+28h] [rbp-20h]
  wchar_t *v15; // [rsp+30h] [rbp-18h] BYREF
  size_t v16; // [rsp+60h] [rbp+18h] BYREF
  size_t v17; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v5 = RtlUnicodeStringValidateDestWorker_0(a1, &v15, &v16, &v17, v13, v14);
  if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringValidateWorker_0(a2, v4, v5);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v6 = (unsigned __int64)a2->Length >> 1;
      }
      v8 = 0;
      v9 = v17;
      v5 = 0;
      v10 = v16 - v17;
      if ( v16 == v17 )
        goto LABEL_10;
      v11 = (char *)v15 + 2 * v17 - (_QWORD)Buffer;
      do
      {
        if ( !v6 )
          break;
        --v6;
        *(wchar_t *)((char *)Buffer + (_QWORD)v11) = *Buffer;
        ++v8;
        ++Buffer;
        --v10;
      }
      while ( v10 );
      if ( !v10 )
      {
LABEL_10:
        if ( v6 )
          v5 = -2147483643;
      }
      a1->Length = 2 * (v9 + v8);
    }
  }
  return (unsigned int)v5;
}
