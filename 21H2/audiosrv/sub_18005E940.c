/*
 * XREFs of sub_18005E940 @ 0x18005E940
 * Callers:
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 * Callees:
 *     sub_18005E548 @ 0x18005E548 (sub_18005E548.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18005E9D0 @ 0x18005E9D0 (sub_18005E9D0.c)
 */

__int64 __fastcall sub_18005E940(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *), __int64 a3)
{
  RPC_STATUS v6; // eax
  int v7; // ebx

  v6 = UuidCreate((UUID *)(a1 + 68));
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    v7 = sub_18005E548(a1, a2, a3);
    if ( v7 < 0 )
    {
LABEL_8:
      sub_18005E8F8((__int64)"CMuteHardware::Initialize", 440, v7);
      return (unsigned int)v7;
    }
    v7 = sub_18005E9D0(a1, a2);
  }
  if ( v7 < 0 )
    goto LABEL_8;
  return (unsigned int)v7;
}
