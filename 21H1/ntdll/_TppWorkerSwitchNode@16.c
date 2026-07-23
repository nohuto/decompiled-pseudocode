/*
 * XREFs of _TppWorkerSwitchNode@16 @ 0x4B2B6D51
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _TppETWWorkerNodeSwitch@20 @ 0x4B385006 (_TppETWWorkerNodeSwitch@20.c)
 */

NTSTATUS __fastcall TppWorkerSwitchNode(_DWORD *a1, int a2, int a3, char a4)
{
  int v5; // ecx
  NTSTATUS result; // eax
  int v7; // ecx
  unsigned __int16 v8; // bx
  __int16 v9; // [esp+8h] [ebp-18h]
  int v10; // [esp+Ch] [ebp-14h]
  _DWORD ThreadInformation[3]; // [esp+10h] [ebp-10h] BYREF

  v5 = *(_DWORD *)(a2 + 200);
  v10 = v5;
  result = a1[65];
  if ( a3 == v5 )
  {
    if ( result == -1 && !*(_BYTE *)(a2 + 208) )
    {
      *(_BYTE *)(a2 + 208) = 1;
      result = a1[7];
      _InterlockedIncrement((volatile signed __int32 *)(result + 4 * a3));
    }
  }
  else
  {
    if ( result == -1 )
    {
      if ( *(_BYTE *)(a2 + 208) )
        _InterlockedDecrement((volatile signed __int32 *)(a1[7] + 4 * v5));
      else
        *(_BYTE *)(a2 + 208) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(a1[7] + 4 * a3));
    }
    *(_DWORD *)(a2 + 200) = a3;
    v7 = a1[8];
    v8 = *(_WORD *)(12 * a3 + v7 + 4);
    v9 = *(_WORD *)(12 * v10 + v7 + 4);
    if ( RtlGetCurrentServiceSessionId() )
      result = (NTSTATUS)NtCurrentPeb()->SharedData + 556;
    else
      result = 2147353478;
    if ( *(_BYTE *)result )
      result = TppETWWorkerNodeSwitch(a3, v9, v8);
    if ( v9 != v8 )
    {
      ThreadInformation[2] = 0;
      ThreadInformation[0] = 0;
      ThreadInformation[1] = v8;
      ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadGroupInformation, ThreadInformation, 0xCu);
      return ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadIdealProcessor, &a4, 4u);
    }
  }
  return result;
}
