/*
 * XREFs of _RtlpResUltimateFallbackInfo@20 @ 0x4B2BA1A3
 * Callers:
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 * Callees:
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

int __fastcall RtlpResUltimateFallbackInfo(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v5; // edi
  int v6; // edx
  int v7; // ebx
  _DWORD *SharedData; // eax
  int v9; // eax
  int v10; // esi
  int result; // eax
  int v12; // edx
  char *v13; // eax
  int v14; // eax
  int v15; // [esp-10h] [ebp-38h]
  _WORD v16[2]; // [esp+Ch] [ebp-1Ch] BYREF
  const wchar_t *v17; // [esp+10h] [ebp-18h]
  _WORD v18[2]; // [esp+14h] [ebp-14h] BYREF
  const wchar_t *v19; // [esp+18h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-Ch]
  int v21; // [esp+20h] [ebp-8h]
  _DWORD *v22; // [esp+24h] [ebp-4h] BYREF

  v20 = a2;
  v5 = 0;
  v6 = a1;
  v22 = 0;
  v18[1] = 68;
  v7 = 2147353477;
  v16[0] = 64;
  v21 = a1;
  v18[0] = 66;
  v19 = L"RtlpResUltimateFallbackInfo Enter";
  SharedData = NtCurrentPeb()->SharedData;
  v16[1] = 66;
  v17 = L"RtlpResUltimateFallbackInfo Exit";
  if ( SharedData && *SharedData )
    v9 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477;
  v10 = 2147353476;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476;
    LdrpTraceLoadMUIDll(v18, *(unsigned __int8 *)v14);
    v6 = v21;
  }
  if ( !v6 || !a3 || !a4 )
    return -1073741811;
  *a3 = 0;
  v15 = v20;
  *a4 = 0;
  result = LdrResGetRCConfig(v6, v15, &v22, a5, 1);
  if ( result >= 0 )
  {
    if ( v22 && v22 != (_DWORD *)-1 && v22[31] && v22[32] && (v12 = v22[6]) != 0 )
    {
      v13 = (char *)v22 + v22[31];
      *a4 = v12;
      *a3 = v13;
    }
    else
    {
      v5 = -1073741823;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (int)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(v16, *(unsigned __int8 *)v10);
    }
    return v5;
  }
  return result;
}
