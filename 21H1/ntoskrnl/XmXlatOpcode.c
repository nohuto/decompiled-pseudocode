/*
 * XREFs of XmXlatOpcode @ 0x1404E0300
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140393A08 (XmSetSourceValue.c)
 *     XmGetOffsetAddress @ 0x1403C4D0C (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmXlatOpcode(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ecx
  int v4; // eax
  int *OffsetAddress; // rax

  *(_DWORD *)(a1 + 120) = 0;
  v1 = a1 + 24;
  v3 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 137) )
    v4 = *(_DWORD *)(a1 + 36);
  else
    v4 = *(unsigned __int16 *)(a1 + 36);
  OffsetAddress = XmGetOffsetAddress(a1, v3 + v4);
  XmSetSourceValue(a1, (unsigned __int16 *)OffsetAddress);
  *(_QWORD *)(a1 + 88) = v1;
  return 1LL;
}
