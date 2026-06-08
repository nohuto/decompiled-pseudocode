/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C00364E8
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C0027618 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_1C0013C04 = 268439553;
      dword_1C0013C0C = 0;
      dword_1C0013C08 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_1C0013C10 = 268439553;
      HIDWORD(qword_1C0013C14) = 0;
      LODWORD(qword_1C0013C14) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_1C0013C1C = 268439553;
      dword_1C0013C24 = 0;
      dword_1C0013C20 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_1C0013C28 = 268439553;
      HIDWORD(qword_1C0013C2C) = 0;
      LODWORD(qword_1C0013C2C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_1C0013C34 = 134219777;
      dword_1C0013C3C = 0;
      dword_1C0013C38 = *((_DWORD *)P + 18);
    }
    dword_1C0013C40 = *((_DWORD *)P + 12);
    byte_1C0013C46 = *((_BYTE *)P + 105);
    byte_1C0013C47 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_1C0013C02 = *((_WORD *)P + 49);
    byte_1C0013C44 = *((_BYTE *)P + 55);
    byte_1C0013C45 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = AcpiTable;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x52u,
      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
      v6);
  }
  return (unsigned int)AcpiTable;
}
