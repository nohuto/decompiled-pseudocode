/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C003D3E4
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0160270 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DDA0 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C025EEEC (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C025EF84 (-InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C003D4A0 (RtlUnicodeStringValidateSrcWorker.c)
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(char *a1, unsigned __int64 a2, const struct _UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rbx
  NTSTATUS v5; // edx
  size_t v6; // rcx
  signed __int64 v7; // rdx
  unsigned __int16 *v8; // rax
  ULONG v10; // [rsp+20h] [rbp-18h]
  size_t v11; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    v11 = 0LL;
    v5 = RtlUnicodeStringValidateSrcWorker(a3, &v12, &v11, (const size_t)a3, v10);
    if ( v5 < 0 )
    {
      *(_WORD *)a1 = 0;
    }
    else
    {
      if ( v3 )
      {
        v6 = v11 - v3;
        v7 = (char *)v12 - a1;
        do
        {
          if ( !(v6 + v3) )
            break;
          *(_WORD *)a1 = *(_WORD *)&a1[v7];
          a1 += 2;
          --v3;
        }
        while ( v3 );
      }
      v8 = (unsigned __int16 *)(a1 - 2);
      if ( v3 )
        v8 = (unsigned __int16 *)a1;
      v5 = v3 == 0 ? 0x80000005 : 0;
      *v8 = 0;
    }
  }
  return (unsigned int)v5;
}
