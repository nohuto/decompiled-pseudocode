/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x1800A5EB0
 * Callers:
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$2 @ 0x1800A6D39 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003D1F8 (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D204 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(char **a1)
{
  char *v1; // rcx
  char *v2; // rbx

  v1 = *a1;
  if ( v1 )
  {
    v2 = v1 - 8;
    `eh vector destructor iterator'(
      v1,
      24LL,
      *((_QWORD *)v1 - 1),
      (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    operator delete[](v2, (const struct std::nothrow_t *)(24LL * *(_QWORD *)v2 + 8));
  }
}
