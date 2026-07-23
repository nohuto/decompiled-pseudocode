/*
 * XREFs of MiImagePageOk @ 0x14020ADB0
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 * Callees:
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 Address; // r9
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // r11
  __int64 v8; // r10
  int v10; // ecx

  if ( !(unsigned int)MI_PFN_IS_PROTO(a2) )
    return 1LL;
  v5 = *(_QWORD *)(v3 + 16);
  if ( (v5 & 0x400) == 0 || ((*(_QWORD *)(v3 + 40) >> 60) & 7) == 3 )
    return 1LL;
  v6 = *(_QWORD *)(v3 + 16);
  if ( qword_140C4DF80 && (v5 & 0x10) == 0 )
    v6 = ~qword_140C4DF80 & v5;
  v7 = v6 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x20) == 0 )
    return 1LL;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 40LL);
  if ( !v8 || (v8 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v8 & 3) == 2 )
    return 1LL;
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    if ( (MiFlags & 0x10000) == 0 || (v5 & 0x40) == 0 )
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
  v10 = *(_DWORD *)(Address + 48);
  return (v10 & 0x70) == 0x20
      && ((v10 & 0xF80) == 0x80
       || (*(_DWORD *)(Address + 64) & 0x8000000) != 0 && (v8 & 4) == 0
       || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v7 + 34) & 2) != 0);
}
