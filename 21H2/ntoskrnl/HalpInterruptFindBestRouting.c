/*
 * XREFs of HalpInterruptFindBestRouting @ 0x140378770
 * Callers:
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785BC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 */

__int64 __fastcall HalpInterruptFindBestRouting(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  _DWORD *v4; // r10
  unsigned int v5; // ecx
  __int64 v6; // r8
  int v7; // ebx
  __int64 *v8; // r11
  __int64 *v9; // rdx
  int v11; // [rsp+3Ch] [rbp+14h]

  v11 = HIDWORD(a2);
  v2 = HalpInterruptLookupController(*a1);
  v5 = 0;
  if ( v2 )
  {
    v6 = v2 + 256;
    v7 = 0;
    v8 = *(__int64 **)(v2 + 256);
    v9 = v8;
    if ( v8 != (__int64 *)(v2 + 256) )
    {
      do
      {
        ++v7;
        if ( *((_DWORD *)v9 + 4) == (_DWORD)v3 && *((_DWORD *)v9 + 5) <= v11 && *((_DWORD *)v9 + 6) > v11 )
          break;
        v9 = (__int64 *)*v9;
      }
      while ( v9 != (__int64 *)v6 );
    }
    if ( v9 == (__int64 *)v6 )
    {
      if ( v7 == 1 )
      {
        *v4 = *((_DWORD *)v8 + 4);
        v4[1] = *((_DWORD *)v8 + 5);
      }
      else
      {
        *(_DWORD *)(v2 + 312) = 3566;
        *(_QWORD *)(v2 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
        v5 = -1073741823;
        HalpInterruptLastProblem = 23;
        *(_QWORD *)(v2 + 292) = 23LL;
      }
    }
    else
    {
      *(_QWORD *)v4 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
