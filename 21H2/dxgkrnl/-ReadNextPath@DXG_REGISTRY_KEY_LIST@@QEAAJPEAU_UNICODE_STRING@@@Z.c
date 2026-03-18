/*
 * XREFs of ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0304254
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02B9F98 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E6A0 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0051310 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::ReadNextPath(wchar_t **this, struct _UNICODE_STRING *a2)
{
  wchar_t *v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ebx

  v2 = *this;
  if ( *((wchar_t ***)*this + 1) != this || (v3 = *(_QWORD *)v2, *(wchar_t **)(*(_QWORD *)v2 + 8LL) != v2) )
    __fastfail(3u);
  *this = (wchar_t *)v3;
  *(_QWORD *)(v3 + 8) = this;
  v4 = RtlUnicodeStringCopyString(a2, v2 + 8);
  operator delete[](v2);
  return v4;
}
