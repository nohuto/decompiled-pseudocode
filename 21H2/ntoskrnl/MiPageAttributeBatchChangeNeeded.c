/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x140266074
 * Callers:
 *     MiConvertContiguousPages @ 0x140265BE4 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140265D40 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 * Callees:
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  int v3; // eax
  __int64 v5; // rax
  unsigned int v6; // edx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a2;
  v3 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( v3 == (_DWORD)a2 )
    return 0LL;
  if ( v3 != 1 )
  {
    if ( v3 == 3 )
    {
LABEL_5:
      MiChangePageAttribute(a1, a2, 4LL);
      return 0LL;
    }
    v5 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL;
    if ( ((*(_QWORD *)(a1 + 24) >> 59) & 7) != 0 )
    {
      _InterlockedOr(v7, 0);
      v6 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v5) & 7;
      if ( v6 > 2 || (v5 & 1) == 0 && v6 >= 2 )
      {
        a2 = v2;
        goto LABEL_5;
      }
    }
  }
  return 1LL;
}
