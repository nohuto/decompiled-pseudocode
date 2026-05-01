/*
 * XREFs of ?RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UEAAJ_K0@Z @ 0x180008FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::RuntimeClassInitialize(
        Windows::System::CProcessMemoryReport *this,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *((_QWORD *)this + 5) = a2;
  result = 0LL;
  *((_QWORD *)this + 6) = a3;
  return result;
}
