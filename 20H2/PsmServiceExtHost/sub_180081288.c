/*
 * XREFs of sub_180081288 @ 0x180081288
 * Callers:
 *     sub_18007AC0C @ 0x18007AC0C (sub_18007AC0C.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18007D374 @ 0x18007D374 (sub_18007D374.c)
 *     sub_18007FAEC @ 0x18007FAEC (sub_18007FAEC.c)
 */

__int64 __fastcall sub_180081288(__int64 a1, unsigned __int8 *a2)
{
  int *v4; // rsi
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ebp
  ULONG v9; // edx
  unsigned __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  sub_1800093A0(*(_QWORD *)(a1 + 80), 0);
  v4 = (int *)(a1 + 544);
  v5 = *(_DWORD *)(a1 + 544);
  if ( (v5 & 1) != 0 )
  {
    v6 = -1073740682;
  }
  else if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v6 = -1073741275;
  }
  else if ( (v5 & 8) != 0 )
  {
    v6 = -1058275327;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 80);
    *v4 = v5 | 1;
    sub_18000A110(v7);
    v6 = sub_18007FAEC(*(_QWORD *)(a1 + 88), a2);
    sub_1800093A0(*(_QWORD *)(a1 + 80), 0);
    *v4 &= ~1u;
    if ( v6 >= 0 )
    {
      RtlInitializeBitMap(&BitMapHeader, (PULONG)(a1 + 496), 0x2Fu);
      v8 = *a2;
      v9 = v8 - 3;
      v10 = (unsigned int)(v8 - 3);
      if ( a2[1] >= 0x65u )
      {
        v11 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v10);
        RtlClearBit(&BitMapHeader, v9);
      }
      else
      {
        v11 = !_bittest64((const signed __int64 *)BitMapHeader.Buffer, v10);
        RtlSetBit(&BitMapHeader, v9);
      }
      if ( v11 && v8 == 27 )
        sub_18007D374(*(_QWORD *)(a1 + 80), v12, v13);
      v6 = 0;
    }
  }
  sub_18000A110(*(_QWORD *)(a1 + 80));
  RtlWakeAddressAll(a1 + 544);
  return (unsigned int)v6;
}
