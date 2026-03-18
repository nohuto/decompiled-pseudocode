/*
 * XREFs of MiImagePageOk @ 0x1402B4660
 * Callers:
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 **Address; // r9
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r10
  int v11; // ecx

  if ( !(unsigned int)MI_PFN_IS_PROTO(a2, a2, a3) )
    return 1LL;
  v6 = *(_QWORD *)(v4 + 16);
  if ( (v6 & 0x400) == 0 || ((*(_QWORD *)(v4 + 40) >> 60) & 7) == 3 )
    return 1LL;
  v7 = *(_QWORD *)(v4 + 16);
  if ( qword_140C4DE80 && (v6 & 0x10) == 0 )
    v7 = ~qword_140C4DE80 & v6;
  v8 = v7 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 56LL) & 0x20) == 0 )
    return 1LL;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 96LL) + 40LL);
  if ( !v9 || (v9 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v9 & 3) == 2 )
    return 1LL;
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    if ( (MiFlags & 0x10000) == 0 || (v6 & 0x40) == 0 )
      return 1LL;
LABEL_17:
    if ( !Address )
      return 0LL;
    goto LABEL_18;
  }
  if ( !Address )
  {
    Address = MiLocateAddress(a1);
    goto LABEL_17;
  }
LABEL_18:
  v11 = *((_DWORD *)Address + 12);
  return (v11 & 0x70) == 0x20
      && ((v11 & 0xF80) == 0x80
       || ((_DWORD)Address[8] & 0x8000000) != 0 && (v9 & 4) == 0
       || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v8 + 34) & 2) != 0);
}
