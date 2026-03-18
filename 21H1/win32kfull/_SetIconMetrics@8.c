/*
 * XREFs of _SetIconMetrics@8 @ 0xD9F16
 * Callers:
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 *     _UserOnGreTextReady@0 @ 0xD74BA (_UserOnGreTextReady@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     ?SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z @ 0x145212 (-SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YGHPAU_UNICODE_STRING@@IH@Z @ 0xDA38C (-GetTWIPSMetricById@@YGHPAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YGHIH@Z @ 0xDA3D8 (-GetLocalizedInt@@YGHIH@Z.c)
 *     ?SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z @ 0xDA45C (-SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall SetIconMetrics(int a1, _DWORD *a2)
{
  struct _UNICODE_STRING *LocalizedInt; // eax
  struct _UNICODE_STRING *v5; // eax
  int v6; // ecx
  int v7; // edx
  struct _UNICODE_STRING *v9; // [esp+0h] [ebp-88h]
  unsigned int v10; // [esp+0h] [ebp-88h]
  unsigned int v11; // [esp+0h] [ebp-88h]
  unsigned int v12; // [esp+0h] [ebp-88h]
  unsigned int v13; // [esp+0h] [ebp-88h]
  struct tagICONMETRICSW *v14; // [esp+4h] [ebp-84h]
  int v15; // [esp+4h] [ebp-84h]
  int v16; // [esp+4h] [ebp-84h]
  int v17; // [esp+4h] [ebp-84h]
  int v18; // [esp+4h] [ebp-84h]
  int v19; // [esp+Ch] [ebp-7Ch] BYREF
  _DWORD v20[29]; // [esp+10h] [ebp-78h] BYREF

  memset(v20, 0, 0x6Cu);
  if ( !SetIconFonts(v9, v14) )
    return 0;
  if ( !a2 )
  {
    v19 = 0;
    FastGetProfileIntFromID(a1, 23, 66, 1, &v19, 0);
    v20[3] = v19;
    LocalizedInt = (struct _UNICODE_STRING *)GetLocalizedInt(v10, v15);
    v20[1] = GetTWIPSMetricById(LocalizedInt, v11, v16);
    v5 = (struct _UNICODE_STRING *)GetLocalizedInt(v12, v17);
    v20[2] = GetTWIPSMetricById(v5, v13, v18);
    a2 = v20;
  }
  v6 = a2[1];
  if ( v6 <= *(_DWORD *)(_gpsi + 1904) )
    v6 = *(_DWORD *)(_gpsi + 1904);
  v7 = a2[2];
  a2[1] = v6;
  if ( v7 <= *(_DWORD *)(_gpsi + 1908) )
    v7 = *(_DWORD *)(_gpsi + 1908);
  a2[2] = v7;
  SetDpiDepSysMet(18, v6);
  SetDpiDepSysMet(19, a2[2]);
  *(_DWORD *)(_gpsi + 2076) = EngMulDiv(*(_DWORD *)(_gpsi + 1956), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2080) = EngMulDiv(*(_DWORD *)(_gpsi + 1960), 96, *(unsigned __int16 *)(_gpsi + 6242));
  if ( a2[3] )
    _gdwPUDFlags |= (unsigned int)&loc_1FFFFC + 4;
  else
    _gdwPUDFlags &= ~0x200000u;
  return 1;
}
