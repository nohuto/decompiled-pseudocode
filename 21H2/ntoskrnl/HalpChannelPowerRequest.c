/*
 * XREFs of HalpChannelPowerRequest @ 0x140866A88
 * Callers:
 *     HaliSetSystemInformation @ 0x140866584 (HaliSetSystemInformation.c)
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpSendPccCommand @ 0x140866D1C (HalpSendPccCommand.c)
 */

__int64 __fastcall HalpChannelPowerRequest(__int16 *a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  int v6; // edx
  __int64 v7; // r8
  __int16 v8; // si
  __int16 v9; // bp
  unsigned int v10; // ecx
  __int64 v12; // r9
  _WORD *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rax

  v3 = 0;
  if ( a2 != 24 )
    return (unsigned int)-1073741820;
  v7 = *((unsigned int *)a1 + 1);
  v8 = *a1;
  v9 = a1[1];
  v10 = *((_DWORD *)a1 + 4);
  if ( (_DWORD)v7 == 2 )
  {
    if ( v10 >= 2 )
      return (unsigned int)-1073741808;
  }
  else if ( (((_DWORD)v7 - 1) & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741808;
  }
  v12 = 0LL;
  v6 = -1073741275;
  if ( HalpChannelMemoryRangeCount )
  {
    v13 = (char *)HalpChannelMemoryRanges + 12;
    while ( *(v13 - 1) != v8 || *v13 != v9 )
    {
      v12 = (unsigned int)(v12 + 1);
      v13 += 8;
      if ( (unsigned int)v12 >= HalpChannelMemoryRangeCount )
        goto LABEL_15;
    }
    v3 = v12;
    v6 = 0;
  }
LABEL_15:
  if ( v6 >= 0 )
  {
    if ( (_DWORD)v7 == 2 )
    {
      if ( v10 == 1 )
        v10 = *((unsigned __int8 *)HalpChannelMemoryRanges + 16 * v3 + 15);
      *((_QWORD *)a1 + 2) = v10;
    }
    v6 = HalpSendPccCommand(*((unsigned __int16 *)HalpChannelMemoryRanges + 8 * v3 + 4), a1, v7, v12);
    if ( v6 >= 0 )
    {
      v14 = qword_140C48D00;
      v15 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 2) = *(_DWORD *)(qword_140C48D00 + 4);
      switch ( v15 )
      {
        case 2:
          goto LABEL_29;
        case 1:
          *((_QWORD *)a1 + 2) = *(_DWORD *)(v14 + 8) != 0;
          goto LABEL_29;
        case 3:
          v16 = *(_QWORD *)(v14 + 24);
          break;
        case 4:
          v16 = *(_QWORD *)(v14 + 16);
          break;
        default:
          goto LABEL_29;
      }
      *((_QWORD *)a1 + 2) = v16;
LABEL_29:
      if ( a3 )
        *a3 = 24;
    }
  }
  return (unsigned int)v6;
}
