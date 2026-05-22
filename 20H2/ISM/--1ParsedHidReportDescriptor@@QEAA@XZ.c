/*
 * XREFs of ??1ParsedHidReportDescriptor@@QEAA@XZ @ 0x1800A60B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003D278 (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D284 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ParsedHidReportDescriptor::~ParsedHidReportDescriptor(ParsedHidReportDescriptor *this)
{
  char *v1; // rcx
  char *v2; // rbx

  v1 = (char *)*((_QWORD *)this + 2);
  if ( v1 )
  {
    v2 = v1 - 8;
    `eh vector destructor iterator'(
      v1,
      72LL,
      *((_QWORD *)v1 - 1),
      (void (*)(void *))BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp);
    operator delete[](v2, (const struct std::nothrow_t *)(72LL * *(_QWORD *)v2 + 8));
  }
}
