/*
 * XREFs of ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x1802C8F1C
 * Callers:
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x1802C8E3C (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall LightweightPropertySet::LightweightProperty::IsName(HSTRING *this, const unsigned __int16 *a2)
{
  PCWSTR StringRawBuffer; // rax

  StringRawBuffer = WindowsGetStringRawBuffer(*this, 0LL);
  return CompareStringOrdinal(StringRawBuffer + 20, -1, a2, -1, 1) == 2;
}
