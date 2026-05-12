/*
 * XREFs of StorpLogSystemEvent @ 0x1C003C4C0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C003330C (WPP_SF_ddd.c)
 *     StorCreateSystemLogEntry @ 0x1C0045DB4 (StorCreateSystemLogEntry.c)
 */

__int64 __fastcall StorpLogSystemEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // ecx
  int v6; // esi
  int v7; // ebp
  int v8; // r14d
  __int64 Unit; // rax
  void *v10; // rcx
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+58h] [rbp+10h]

  HIBYTE(v13) = 0;
  if ( (*(_DWORD *)a2 & 0xFFFFFF00) > 0x100 )
  {
    *(_DWORD *)a2 = 511;
    return 3238002699LL;
  }
  if ( *(_DWORD *)(a2 + 40) && !*(_QWORD *)(a2 + 48) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 56) && !*(_QWORD *)(a2 + 64) )
    return 3238002694LL;
  v3 = **(_QWORD **)(a1 - 16);
  if ( !v3 )
    return 3238002694LL;
  if ( KeGetCurrentIrql() > 2u )
    return 3238002696LL;
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 3238002694LL;
    }
    else
    {
      v6 = *(unsigned __int8 *)(a2 + 16);
      v7 = *(unsigned __int8 *)(a2 + 20);
      v8 = *(unsigned __int8 *)(a2 + 24);
      LOBYTE(v13) = *(_BYTE *)(a2 + 16);
      BYTE1(v13) = *(_BYTE *)(a2 + 20);
      BYTE2(v13) = *(_BYTE *)(a2 + 24);
      Unit = RaidAdapterFindUnit(v3, v13);
      if ( Unit )
      {
        v10 = *(void **)(Unit + 8);
        return StorCreateSystemLogEntry(v10);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        v12 = v8;
        v11 = v7;
        WPP_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_42621249f2c9312d441c8bf8760aa631_Traceguids,
          v6,
          v11,
          v12);
      }
    }
  }
  v10 = *(void **)(v3 + 8);
  return StorCreateSystemLogEntry(v10);
}
