/*
 * XREFs of HalpUpdateNumaConfiguration @ 0x1404D2174
 * Callers:
 *     HalStartDynamicProcessor @ 0x1404BC520 (HalStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpUpdateNumaConfiguration(int a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v6; // rdx
  int v7; // r11d

  v2 = 0;
  if ( HalpNumaConfig )
  {
    result = *(_QWORD *)(HalpNumaConfig + 24);
    v4 = *(_DWORD *)(HalpNumaConfig + 60);
    v5 = *(_DWORD *)(result + 4LL * a2);
    v6 = 1280LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4LL * v2);
        if ( v7 == a1 )
          break;
        result = *(_QWORD *)(HalpNumaConfig + 16);
        if ( *(_DWORD *)(result + 4LL * v2) == v5 && v7 == -1 )
          v6 = v2;
        if ( ++v2 >= v4 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      result = HalpNumaConfig;
      *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4 * v6) = a1;
    }
  }
  return result;
}
