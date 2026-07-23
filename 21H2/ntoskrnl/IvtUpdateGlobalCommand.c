/*
 * XREFs of IvtUpdateGlobalCommand @ 0x1404E1290
 * Callers:
 *     IvtInitializeIommu @ 0x1409AA880 (IvtInitializeIommu.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall IvtUpdateGlobalCommand(__int64 a1, unsigned int a2, char a3)
{
  ULONG_PTR v4; // rsi
  int v5; // ebx
  int v6; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a2;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL);
  v6 = 0;
  if ( a3 )
    v7 = a2 | v5;
  else
    v7 = ~a2 & v5;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v7;
  _InterlockedOr(v11, 0);
  v8 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v9 = *(_DWORD *)(v8 + 28);
    result = (unsigned int)v4 & v9;
    if ( (_DWORD)result == ((unsigned int)v4 & v7) )
      break;
    KeStallExecutionProcessor(1u);
    if ( v6 == 100000 )
      KeBugCheckEx(0x5Cu, 0x500uLL, v4, v7, v9);
    v8 = *(_QWORD *)(a1 + 8);
    ++v6;
  }
  return result;
}
