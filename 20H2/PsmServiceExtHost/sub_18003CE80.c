/*
 * XREFs of sub_18003CE80 @ 0x18003CE80
 * Callers:
 *     Callback @ 0x18003C6D0 (Callback.c)
 *     sub_180043CF8 @ 0x180043CF8 (sub_180043CF8.c)
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 */

__int64 __fastcall sub_18003CE80(void **a1)
{
  NTSTATUS UnicastIpAddressTable; // eax
  unsigned int v3; // ebx
  bool v4; // cc
  int v5; // ecx
  ULONG v6; // r8d
  __int64 v7; // r10
  __int64 v8; // r9
  int i; // [rsp+38h] [rbp+10h] BYREF
  PVOID Memory; // [rsp+40h] [rbp+18h] BYREF
  PMIB_IPINTERFACE_TABLE Table; // [rsp+48h] [rbp+20h] BYREF

  Memory = 0LL;
  Table = 0LL;
  UnicastIpAddressTable = GetUnicastIpAddressTable(0, (PMIB_UNICASTIPADDRESS_TABLE *)&Memory);
  v3 = UnicastIpAddressTable;
  v4 = UnicastIpAddressTable <= 0;
  if ( UnicastIpAddressTable
    || (UnicastIpAddressTable = GetIpInterfaceTable(0, &Table),
        v3 = UnicastIpAddressTable,
        v4 = UnicastIpAddressTable <= 0,
        UnicastIpAddressTable) )
  {
    if ( !v4 )
      v3 = (unsigned __int16)UnicastIpAddressTable | 0xC0070000;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    for ( i = 0; v6 < Table->NumEntries; ++v6 )
    {
      v7 = v6;
      if ( Table->Table[v7].Connected )
      {
        v8 = 0LL;
        if ( *(_DWORD *)Memory )
        {
          while ( Table->Table[v7].InterfaceLuid.Value != *((_QWORD *)Memory + 10 * v8 + 5)
               || *((_DWORD *)Memory + 20 * v8 + 18) != 4 )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 >= *(_DWORD *)Memory )
              goto LABEL_9;
          }
          v5 = 1;
          i = 1;
        }
LABEL_9:
        if ( v5 )
          break;
      }
    }
    sub_18002B954(a1, &i, 4uLL, 0);
    v3 = 0;
  }
  if ( Memory )
    FreeMibTable(Memory);
  if ( Table )
    FreeMibTable(Table);
  return v3;
}
