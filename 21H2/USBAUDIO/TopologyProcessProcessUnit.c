/*
 * XREFs of TopologyProcessProcessUnit @ 0x1C0027390
 * Callers:
 *     <none>
 * Callees:
 *     Feature_4145917243__private_IsEnabledDeviceUsage @ 0x1C0003284 (Feature_4145917243__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     USBCntrlGetSetProcessingUnitEnable @ 0x1C0032DA0 (USBCntrlGetSetProcessingUnitEnable.c)
 */

__int64 __fastcall TopologyProcessProcessUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v8; // r11d
  __int64 v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 i; // r8
  __int64 v13; // rcx
  __int64 result; // rax

  v8 = *a6;
  v9 = *(unsigned int *)(a2 + 64);
  v10 = a3 + 168LL * (unsigned int)*a5;
  v11 = (_QWORD *)(a4 + 16LL * *a6);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 32); *((_DWORD *)v11 - 1) = 1 )
  {
    v13 = 3 * i;
    ++v8;
    i = (unsigned int)(i + 1);
    *v11 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4 * v13);
    v11 += 2;
    *((_DWORD *)v11 - 2) = *a5;
  }
  *a6 = v8;
  ++*a5;
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(v10 + 144) = USBCntrlGetSetProcessingUnitEnable;
  *(_QWORD *)(v10 + 136) = USBCntrlGetSetProcessingUnitValue;
  if ( (*(_DWORD *)(a2 + 76) & 1) == 0
    || (*(_BYTE *)(v10 + 72) = 1,
        LOBYTE(i) = -127,
        result = USBCntrlGetSetProcessingUnitEnable(a1, v10, i, v10 + 73),
        (int)result >= 0) )
  {
    if ( (unsigned int)Feature_4145917243__private_IsEnabledDeviceUsage() && (unsigned int)v9 >= 8 )
      return 3221225659LL;
    else
      return ProcessSpecificRtnMap[v9](a1, a2, v10);
  }
  return result;
}
