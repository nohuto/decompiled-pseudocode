/*
 * XREFs of _LdrpProcessDetachNode@4 @ 0x4B2DA4B3
 * Callers:
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 *     _LdrpRecordUnloadEvent@4 @ 0x4B2DA5AD (_LdrpRecordUnloadEvent@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpCalloutExceptionFilter@4 @ 0x4B334818 (_LdrpCalloutExceptionFilter@4.c)
 */

_DWORD *__thiscall LdrpProcessDetachNode(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // ebx
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx
  int v6; // eax
  int v7[9]; // [esp+10h] [ebp-48h] BYREF
  int v8; // [esp+34h] [ebp-24h]
  _DWORD *v9; // [esp+38h] [ebp-20h]
  _DWORD *v10; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v9 = this;
  for ( result = (_DWORD *)*this; ; result = (_DWORD *)*v10 )
  {
    v10 = result;
    v2 = result;
    if ( result == v9 )
      break;
    *((_WORD *)result - 14) = 0;
    LdrpRecordUnloadEvent(result - 21);
    v3 = v2 - 17;
    v4 = *(v2 - 17);
    if ( v4 )
    {
      v5 = (_DWORD *)v3[1];
      if ( *(_DWORD **)(v4 + 4) != v3 || (_DWORD *)*v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      *(_DWORD *)(v4 + 4) = v5;
      *v3 = 1;
    }
    v6 = *(v2 - 14);
    v8 = v6;
    if ( v6 && (*(v2 - 8) & 0x80000) != 0 )
    {
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrsnap.c",
          2060,
          "LdrpProcessDetachNode",
          2,
          "Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
          v2 - 12,
          v6);
      v7[0] = 36;
      v7[1] = 1;
      memset(&v7[2], 0, 0x1Cu);
      RtlActivateActivationContextUnsafeFast(v7, *(v2 - 3));
      ms_exc.registration.TryLevel = 0;
      if ( *((_WORD *)v2 - 13) )
        LdrpCallTlsInitializers(0, (int)(v2 - 21));
      ms_exc.registration.TryLevel = 1;
      LdrpCallInitRoutine(v8, *(v2 - 15), 0, 0);
      ms_exc.registration.TryLevel = -2;
      RtlDeactivateActivationContextUnsafeFast(v7);
    }
  }
  return result;
}
