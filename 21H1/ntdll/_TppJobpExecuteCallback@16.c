/*
 * XREFs of _TppJobpExecuteCallback@16 @ 0x4B3837E0
 * Callers:
 *     <none>
 * Callees:
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppETWCallbackStart@20 @ 0x4B384AA9 (_TppETWCallbackStart@20.c)
 *     _TppETWCallbackStop@20 @ 0x4B384B22 (_TppETWCallbackStop@20.c)
 */

void __stdcall TppJobpExecuteCallback(PTP_CALLBACK_INSTANCE Instance, int a2, int a3, _DWORD *a4)
{
  volatile signed __int64 *v4; // edi
  unsigned int v5; // esi
  volatile signed __int32 *v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // [esp+Ch] [ebp-18h] BYREF
  signed __int64 *v12; // [esp+10h] [ebp-14h]
  unsigned int v13; // [esp+14h] [ebp-10h]
  unsigned int v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+1Ch] [ebp-8h]
  volatile signed __int32 *v16; // [esp+20h] [ebp-4h]

  v16 = (volatile signed __int32 *)(a2 + 48);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
  v12 = (signed __int64 *)(a2 + 80);
  TppBarrierAdjust((signed __int64 *)(a2 + 80), 1, 0);
  v4 = (volatile signed __int64 *)(a2 + 176);
  do
  {
    v5 = *(_DWORD *)v4;
    v14 = *(_DWORD *)(a2 + 180);
    v13 = v5 + 2;
    v15 = (__PAIR64__(v14, v5) + 2) >> 32;
  }
  while ( _InterlockedCompareExchange64(v4, __PAIR64__(v14, v5) + 2, __SPAIR64__(v14, v5)) != __PAIR64__(v14, v5) );
  if ( (v13 & 1) != 0 )
  {
    v6 = v16;
    if ( !(v15 | v13 & 0xFFFFFFFE) && !_InterlockedExchangeAdd(v16, 0xFFFFFFFF) )
      (**((void (__thiscall ***)(_DWORD, volatile signed __int32 *))v16 + 1))(**((_DWORD **)v16 + 1), v16);
    goto LABEL_10;
  }
  v7 = *(_DWORD *)(a2 + 136);
  if ( v7 )
  {
    if ( LdrAddRefDll(0, *(PVOID *)(a2 + 136)) < 0 )
    {
      v6 = v16;
LABEL_10:
      TppBarrierAdjust(v12, -1, 0);
      if ( !_InterlockedDecrement(v6) )
        (**((void (__thiscall ***)(_DWORD, volatile signed __int32 *))v6 + 1))(**((_DWORD **)v6 + 1), v6);
      return;
    }
    *((_DWORD *)Instance + 20) |= 0x100u;
    *((_DWORD *)Instance + 25) = v7;
  }
  TppCleanupGroupMemberCallbackProlog(Instance, a2 + 48);
  v8 = 2147353478;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478;
  if ( *(_BYTE *)v9 )
    TppETWCallbackStart(*(_DWORD *)(a2 + 96), *(_DWORD *)(a2 + 100), *(_DWORD *)(a2 + 108));
  TppStartThreadData((int *)&v11, *(_DWORD *)(a2 + 96), *(_DWORD *)(a2 + 100), *(_DWORD *)(a2 + 108));
  *((_DWORD *)Instance + 12) = *(_DWORD *)(a2 + 96);
  v10 = *(_DWORD *)(a2 + 100);
  *((_DWORD *)Instance + 13) = v10;
  (*(void (__thiscall **)(_DWORD, PTP_CALLBACK_INSTANCE, int, int, _DWORD, int, _DWORD))(a2 + 96))(
    *(_DWORD *)(a2 + 96),
    Instance,
    v10,
    a2,
    a4[1],
    a3,
    *a4);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    TppETWCallbackStop(*(_DWORD *)(a2 + 96), *(_DWORD *)(a2 + 100), *(_DWORD *)(a2 + 108));
  TppCompleteThreadData(v11);
}
