/*
 * XREFs of ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0262A20
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C020AA74 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240F70 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0040128 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::ReadNextPath(unsigned __int16 **this, struct _UNICODE_STRING *a2)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // ebx

  v2 = *this;
  if ( *((unsigned __int16 ***)*this + 1) != this
    || (v3 = *(_QWORD *)v2, *(unsigned __int16 **)(*(_QWORD *)v2 + 8LL) != v2) )
  {
    __fastfail(3u);
  }
  *this = (unsigned __int16 *)v3;
  *(_QWORD *)(v3 + 8) = this;
  v4 = RtlUnicodeStringCopyString(a2, v2 + 8);
  operator delete[](v2);
  return v4;
}
