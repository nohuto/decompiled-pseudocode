/*
 * XREFs of NVMeGetLogPageHealthInfoCompletion @ 0x1C00134B0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     TemperatureFromKelvinToCelsius @ 0x1C001605C (TemperatureFromKelvinToCelsius.c)
 */

__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // r8
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v5 = SrbExtension + 4200;
  v6 = *(_QWORD *)(SrbExtension + 4200);
  if ( *(_BYTE *)(v2 + 3) == 1 )
  {
    v7 = *(unsigned __int8 *)(v6 + 2);
    LOWORD(v7) = *(_WORD *)(v6 + 1);
    v8 = *(_QWORD *)(SrbExtension + 4232);
    if ( v8 == 13 )
    {
      v9 = TemperatureFromKelvinToCelsius(v7);
      *(_BYTE *)(v10 + 9) = v9;
    }
    else if ( v8 == 47 )
    {
      v11 = TemperatureFromKelvinToCelsius(v7);
      *(_BYTE *)(v12 + 10) = v11;
    }
  }
  result = NVMeFreeDmaBuffer(v4, *(unsigned int *)(SrbExtension + 4240), v5, *(_QWORD *)(SrbExtension + 4208));
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
