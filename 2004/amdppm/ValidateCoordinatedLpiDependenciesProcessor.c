/*
 * XREFs of ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002A44C
 * Callers:
 *     ValidateCoordinatedLpiDependencies @ 0x1C002A3D0 (ValidateCoordinatedLpiDependencies.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0001B10 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_SSS @ 0x1C00099F4 (WPP_RECORDER_SF_SSS.c)
 *     DecodeAcpiIdleState @ 0x1C000C2A4 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall ValidateCoordinatedLpiDependenciesProcessor(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  __int64 DevExtFromIndex; // rsi
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+78h] [rbp+10h] BYREF
  char v15; // [rsp+80h] [rbp+18h] BYREF

  v15 = 0;
  v3 = *(_DWORD *)a2;
  v14 = 0;
  DevExtFromIndex = GetDevExtFromIndex(v3);
  v6 = 0LL;
  v7 = *(_QWORD *)(DevExtFromIndex + 528);
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 4) )
      return 0LL;
    v8 = 80LL * *(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 4 * v6);
    result = DecodeAcpiIdleState(
               DevExtFromIndex,
               (char *)(v8 + v7 + 48),
               0xFFFFFFFF,
               *(unsigned int *)(v7 + v8 + 36),
               0LL,
               &v14,
               &v15,
               0LL);
    if ( (int)result < 0 )
      return result;
    if ( v14 )
      break;
    v6 = (unsigned int)(v6 + 1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SSS(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      v12,
      v13,
      *(const wchar_t **)(a1 + 176),
      *(const wchar_t **)(DevExtFromIndex + 64),
      *(_QWORD *)(v7 + v8 + 96));
  return 3221225473LL;
}
