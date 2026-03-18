/*
 * XREFs of ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000F3C4
 * Callers:
 *     ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C000E270 (-Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0097BF0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  DirectComposition::CInteractionMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  result = this;
  *((_DWORD *)this + 10) = 86;
  *((_QWORD *)this + 7) = this;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = this;
  *((_DWORD *)this + 42) = 1;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_BYTE *)this + 332) |= 0x60u;
  *((_DWORD *)this + 82) = 4;
  return result;
}
