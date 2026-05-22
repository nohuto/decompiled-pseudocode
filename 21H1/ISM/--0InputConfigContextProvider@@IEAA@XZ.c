/*
 * XREFs of ??0InputConfigContextProvider@@IEAA@XZ @ 0x180025940
 * Callers:
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x180037D7C (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 * Callees:
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x1800259C4 (--0SystemContextProvider@@IEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::InputConfigContextProvider(
        InputConfigContextProvider *this)
{
  InputConfigContextProvider *result; // rax

  SystemContextProvider::SystemContextProvider(this);
  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 28) = "CMK:InputConfig";
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
