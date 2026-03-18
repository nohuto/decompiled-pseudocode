/*
 * XREFs of _ValidateDelegatePointerList@16 @ 0x15A1BB
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YGHIPAI0@Z @ 0x15EEA2 (-DelegateCapturePointersMitOn@@YGHIPAI0@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _WPP_RECORDER_SF_LLL@32 @ 0x15A407 (_WPP_RECORDER_SF_LLL@32.c)
 *     ?PointerDelegateGetClient@@YGHGKPAUtagDELEGATEPOINTERMAP@@@Z @ 0x15B142 (-PointerDelegateGetClient@@YGHGKPAUtagDELEGATEPOINTERMAP@@@Z.c)
 */

int __fastcall ValidateDelegatePointerList(unsigned int a1, int a2, int a3, __int16 a4)
{
  unsigned int i; // esi
  int *v5; // ebx
  int v6; // ebx
  int *v7; // edi
  int v8; // edi
  unsigned int v10; // [esp+0h] [ebp-40h]
  struct tagDELEGATEPOINTERMAP *v11; // [esp+4h] [ebp-3Ch]
  int v12; // [esp+1Ch] [ebp-24h]
  unsigned int v13; // [esp+20h] [ebp-20h]

  v12 = a2;
  v13 = a1;
  for ( i = 0; ; ++i )
  {
    if ( i >= a1 )
      return 1;
    v5 = (int *)(a2 + 4 * i);
    if ( (unsigned int)v5 >= _MmUserProbeAddress )
      v5 = (int *)_MmUserProbeAddress;
    v6 = *v5;
    v7 = (int *)(a3 + 4 * i);
    if ( (unsigned int)v7 >= _MmUserProbeAddress )
      v7 = (int *)_MmUserProbeAddress;
    v8 = *v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_LLL(a1, 10, a1, i, v6, v8);
    if ( !v6 || HIWORD(v6) || !v8 )
      break;
    PointerDelegateGetClient(a4 + 120 * i, v10, v11);
    a1 = v13;
    a2 = v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLL(a1, 11, a1, i, v6, v8);
  return 0;
}
