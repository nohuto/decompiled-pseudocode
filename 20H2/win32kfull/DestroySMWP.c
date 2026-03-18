/*
 * XREFs of DestroySMWP @ 0x1C0047A10
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C004B224 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0093040 (NtUserDeferWindowPosAndBand.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01D0080 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroySMWP(__int64 a1)
{
  BOOL v2; // edi
  __int64 v3; // rsi
  int v4; // ebp
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdi

  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    result = HMMarkObjectDestroy();
    if ( !(_DWORD)result )
      return result;
    v2 = 1;
  }
  else
  {
    v2 = a1 != gSMWP;
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 28) - 1;
    if ( v4 >= 0 )
    {
      v5 = (_QWORD *)(v3 + 120);
      do
      {
        if ( *v5 )
          GreDeleteObject(*v5);
        v5 += 21;
        --v4;
      }
      while ( v4 >= 0 );
    }
    if ( v2 )
      Win32FreePool(*(_QWORD *)(a1 + 40));
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
    return HMFreeObject(a1);
  if ( v2 )
    return Win32FreePool(a1);
  result = gdwPUDFlags;
  gdwPUDFlags &= ~0x40000000u;
  if ( *(int *)(a1 + 32) > 8 )
  {
    result = Win32AllocPool(672LL, 2004054869LL);
    v7 = result;
    if ( result )
    {
      result = Win32FreePool(*(_QWORD *)(a1 + 40));
      *(_QWORD *)(a1 + 40) = v7;
      *(_DWORD *)(a1 + 32) = 4;
    }
  }
  *(_DWORD *)(a1 + 24) &= ~4u;
  return result;
}
