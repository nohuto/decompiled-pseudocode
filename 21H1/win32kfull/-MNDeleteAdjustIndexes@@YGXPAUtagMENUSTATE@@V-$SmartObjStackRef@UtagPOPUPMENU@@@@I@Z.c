/*
 * XREFs of ?MNDeleteAdjustIndexes@@YGXPAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1A7228
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ?NNDeleteAdjustIndex@@YGXPAII@Z @ 0x1A728B (-NNDeleteAdjustIndex@@YGXPAII@Z.c)
 */

_DWORD *__thiscall MNDeleteAdjustIndexes(_DWORD *this, int a2, int a3)
{
  unsigned int *v5; // [esp+0h] [ebp-4h]
  unsigned int *v6; // [esp+0h] [ebp-4h]
  unsigned int savedregs; // [esp+4h] [ebp+0h]
  unsigned int savedregsa; // [esp+4h] [ebp+0h]

  NNDeleteAdjustIndex(v5, savedregs);
  if ( (**(_BYTE **)a2 & 0x20) != 0 )
    NNDeleteAdjustIndex(v6, savedregsa);
  if ( this[11] == *(_DWORD *)(*(_DWORD *)a2 + 8) )
    NNDeleteAdjustIndex(v6, savedregsa);
  if ( this[14] == *(_DWORD *)(*(_DWORD *)a2 + 8) )
    NNDeleteAdjustIndex(v6, savedregsa);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&a2);
}
