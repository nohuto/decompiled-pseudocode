/*
 * XREFs of ??1USB4_HOST_ROUTER@@QEAA@XZ @ 0x1C006B818
 * Callers:
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x1C006B84C (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@Z$$QEAPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@Z @ 0x1C001FA00 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlF.c)
 */

void __fastcall USB4_HOST_ROUTER::~USB4_HOST_ROUTER(USB4_HOST_ROUTER *this)
{
  char *v1; // [rsp+30h] [rbp+8h] BYREF
  void (__stdcall *v2)(PUNICODE_STRING); // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)this + 16;
  v2 = RtlFreeUnicodeString;
  wistd::invoke<void (*)(_UNICODE_STRING *),wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0> *>(
    (__int64 (__fastcall **)(_QWORD))&v2,
    &v1);
}
