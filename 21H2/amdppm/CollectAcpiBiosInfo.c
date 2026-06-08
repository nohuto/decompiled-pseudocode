/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C0038668
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00387D0 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C0029E48 (GetAcpiTable.c)
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
      dword_1C0014C24 = 268439553;
      dword_1C0014C2C = 0;
      dword_1C0014C28 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_1C0014C30 = 268439553;
      HIDWORD(qword_1C0014C34) = 0;
      LODWORD(qword_1C0014C34) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_1C0014C3C = 268439553;
      dword_1C0014C44 = 0;
      dword_1C0014C40 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_1C0014C48 = 268439553;
      HIDWORD(qword_1C0014C4C) = 0;
      LODWORD(qword_1C0014C4C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_1C0014C54 = 134219777;
      dword_1C0014C5C = 0;
      dword_1C0014C58 = *((_DWORD *)P + 18);
    }
    dword_1C0014C60 = *((_DWORD *)P + 12);
    byte_1C0014C66 = *((_BYTE *)P + 105);
    byte_1C0014C67 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_1C0014C22 = *((_WORD *)P + 49);
    byte_1C0014C64 = *((_BYTE *)P + 55);
    byte_1C0014C65 = *((_BYTE *)P + 95);
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
      (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids,
      v6);
  }
  return (unsigned int)AcpiTable;
}
