/*
 * XREFs of ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1C00CB4AC
 * Callers:
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C0022D5C (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 * Callees:
 *     wcsncmp @ 0x1C00CC0FC (wcsncmp.c)
 */

void __fastcall CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(
        CKeyboardProcessor *this,
        struct DEVICEINFO *a2,
        unsigned int *a3)
{
  const wchar_t *v3; // rcx
  char v6; // cl
  unsigned __int16 v7; // cx

  v3 = (const wchar_t *)*((_QWORD *)a2 + 27);
  if ( !v3 || wcsncmp(v3, L"\\??\\Root#RDP", 0xCuLL) )
  {
    v6 = *((_BYTE *)a2 + 464);
    if ( (unsigned __int8)(v6 - 7) <= 1u || v6 == 4 && *((_BYTE *)a2 + 465) != 0xFF )
    {
      v7 = WORD2(gKeyboardInfo);
      gKeyboardInfo = *((_OWORD *)a2 + 29);
      qword_1C0245AF0 = *((_QWORD *)a2 + 60);
      dword_1C0245AF8 = *((_DWORD *)a2 + 122);
      if ( v7 > WORD2(gKeyboardInfo) )
        WORD2(gKeyboardInfo) = v7;
    }
  }
  ++*a3;
}
