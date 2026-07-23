/*
 * XREFs of _TppFastAlpcAdjustConcurrencyCount@4 @ 0x4B2B7189
 * Callers:
 *     _TppCallbackMayRunLongProlog@20 @ 0x4B2B57AB (_TppCallbackMayRunLongProlog@20.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _TpAlpcRegisterCompletionList@4 @ 0x4B383400 (_TpAlpcRegisterCompletionList@4.c)
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

int __thiscall TppFastAlpcAdjustConcurrencyCount(int this)
{
  int result; // eax
  volatile signed __int32 *v3; // ebx
  int v4; // ecx
  signed __int32 v5; // edx
  int v6; // ecx
  signed __int32 v7; // eax
  signed __int32 v8; // edi
  signed __int32 PortInformation; // [esp+4h] [ebp-4h] BYREF

  result = *(_DWORD *)(this + 180) & 3;
  if ( (_BYTE)result == 3 )
  {
    v3 = (volatile signed __int32 *)(this + 176);
    while ( 1 )
    {
      v4 = *(_DWORD *)(this + 140);
      v5 = *v3;
      if ( !v4 || (v6 = *(_DWORD *)(v4 + 272)) == 0 )
        v6 = MEMORY[0x7FFE03C0];
      v7 = v6 + *(_DWORD *)(*(_DWORD *)(this + 140) + 252);
      v8 = v6 + v7;
      if ( v5 >= v7 )
      {
        result = v6 + v8;
        if ( v5 <= v6 + v8 )
          break;
      }
      if ( _InterlockedCompareExchange(v3, v8, v5) == v5 )
      {
        PortInformation = v8;
        NtAlpcSetInformation(
          *(HANDLE *)(this + 168),
          AlpcAdjustCompletionListConcurrencyCountInformation,
          &PortInformation,
          4u);
      }
    }
  }
  return result;
}
