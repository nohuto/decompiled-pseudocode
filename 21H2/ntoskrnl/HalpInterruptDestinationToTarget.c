/*
 * XREFs of HalpInterruptDestinationToTarget @ 0x140378880
 * Callers:
 *     HalpInterruptGenerateMessage @ 0x140377F98 (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785BC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetRemappedDestination @ 0x1404BBA08 (HalpInterruptSetRemappedDestination.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 */

__int64 __fastcall HalpInterruptDestinationToTarget(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *v5; // rax
  unsigned __int8 v6; // si
  __int64 v7; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = a1;
  v3 = 0;
  *(_DWORD *)a3 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v5 = *(__int64 **)(a2 + 8);
      v6 = 0;
      LODWORD(ProcNumber) = 0;
      v7 = *v5;
      LOWORD(ProcNumber) = *((_WORD *)v5 + 4);
      while ( 1 )
      {
        if ( !v7 )
          return v3;
        if ( _bittest64(&v7, v6) )
        {
          v7 &= ~(1LL << v6);
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
          v9 = HalpInterruptTargets;
          v10 = 3LL * ProcessorIndexFromNumber;
          v11 = *(_DWORD *)(HalpInterruptTargets + 24LL * ProcessorIndexFromNumber);
          switch ( v11 )
          {
            case 4:
              *(_DWORD *)a3 = 4;
              goto LABEL_9;
            case 5:
              if ( *(_DWORD *)a3 != 5 )
              {
                *(_DWORD *)a3 = 5;
LABEL_9:
                *(_DWORD *)(a3 + 8) = *(_DWORD *)(v9 + 8 * v10 + 8);
                break;
              }
              *(_DWORD *)(a3 + 8) |= *(_DWORD *)(HalpInterruptTargets + 8 * v10 + 8);
              break;
            case 6:
              if ( *(_DWORD *)a3 == 6 && *(_DWORD *)(a3 + 8) == *(_DWORD *)(HalpInterruptTargets + 8 * v10 + 8) )
              {
                *(_DWORD *)(a3 + 12) |= *(_DWORD *)(HalpInterruptTargets + 8 * v10 + 12);
              }
              else
              {
                *(_DWORD *)a3 = 6;
                *(_DWORD *)(a3 + 8) = *(_DWORD *)(v9 + 8 * v10 + 8);
                *(_DWORD *)(a3 + 12) = *(_DWORD *)(v9 + 8 * v10 + 12);
              }
              break;
            default:
              *(_DWORD *)a3 = 3;
              break;
          }
        }
        BYTE2(ProcNumber) = ++v6;
      }
    case 3:
      *(_DWORD *)a3 = 1;
      break;
    case 4:
      *(_DWORD *)a3 = 2;
      break;
    case 5:
      *(_DWORD *)a3 = 3;
      break;
    case 6:
      v13 = 3LL * *(unsigned int *)(a2 + 8);
      v14 = HalpInterruptTargets;
      *(_OWORD *)a3 = *(_OWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)(a2 + 8));
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(v14 + 8 * v13 + 16);
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v3;
}
