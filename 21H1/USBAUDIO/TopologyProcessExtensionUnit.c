/*
 * XREFs of TopologyProcessExtensionUnit @ 0x1C0027110
 * Callers:
 *     <none>
 * Callees:
 *     USBCntrlGetSetProcessingUnitEnable @ 0x1C00318F0 (USBCntrlGetSetProcessingUnitEnable.c)
 */

__int64 __fastcall TopologyProcessExtensionUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  _QWORD *v9; // r8
  unsigned int v10; // r9d
  unsigned int i; // ebx
  __int64 v12; // rax

  v7 = *a6;
  v8 = a3 + 168LL * (unsigned int)*a5;
  v9 = (_QWORD *)(a4 + 16LL * *a6);
  v10 = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 32); *((_DWORD *)v9 - 1) = 1 )
  {
    v12 = i;
    ++v7;
    ++i;
    *v9 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 12 * v12);
    v9 += 2;
    *((_DWORD *)v9 - 2) = *a5;
  }
  *a6 = v7;
  ++*a5;
  *(_DWORD *)(v8 + 76) = 24;
  *(_QWORD *)(v8 + 8) = &KSNODETYPE_DEV_SPECIFIC;
  *(_QWORD *)(v8 + 16) = &KSNODETYPE_DEV_SPECIFIC;
  *(_DWORD *)(v8 + 80) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(v8 + 144) = USBCntrlGetSetProcessingUnitEnable;
  if ( (*(_DWORD *)(a2 + 76) & 1) != 0 )
  {
    *(_BYTE *)(v8 + 72) = 1;
    LOBYTE(v9) = -127;
    return (unsigned int)USBCntrlGetSetProcessingUnitEnable(a1, v8, v9, v8 + 73);
  }
  return v10;
}
