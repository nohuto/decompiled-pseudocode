/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C003C34C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003C8F0 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C0021808 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
  }
  else
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_1C001CE74 = 268439553;
      dword_1C001CE7C = 0;
      dword_1C001CE78 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_1C001CE80 = 268439553;
      HIDWORD(qword_1C001CE84) = 0;
      LODWORD(qword_1C001CE84) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_1C001CE8C = 268439553;
      dword_1C001CE94 = 0;
      dword_1C001CE90 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_1C001CE98 = 268439553;
      HIDWORD(qword_1C001CE9C) = 0;
      LODWORD(qword_1C001CE9C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_1C001CEA4 = 134219777;
      dword_1C001CEAC = 0;
      dword_1C001CEA8 = *((_DWORD *)P + 18);
    }
    dword_1C001CEB0 = *((_DWORD *)P + 12);
    byte_1C001CEB6 = *((_BYTE *)P + 105);
    byte_1C001CEB7 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_1C001CE72 = *((_WORD *)P + 49);
    byte_1C001CEB4 = *((_BYTE *)P + 55);
    byte_1C001CEB5 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)AcpiTable;
}
