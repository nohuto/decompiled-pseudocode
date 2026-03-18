/*
 * XREFs of _SetMinMetrics@8 @ 0xDA05C
 * Callers:
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 *     _UserOnGreTextReady@0 @ 0xD74BA (_UserOnGreTextReady@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     ?xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z @ 0xD9E9E (-xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YGHPAU_UNICODE_STRING@@IH@Z @ 0xDA38C (-GetTWIPSMetricById@@YGHPAU_UNICODE_STRING@@IH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall SetMinMetrics(int a1, int *a2)
{
  int *v2; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int result; // eax
  unsigned int v8; // [esp+0h] [ebp-28h]
  unsigned int v9; // [esp+0h] [ebp-28h]
  unsigned int v10; // [esp+0h] [ebp-28h]
  int v11; // [esp+4h] [ebp-24h]
  int v12; // [esp+4h] [ebp-24h]
  int v13; // [esp+4h] [ebp-24h]
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h] BYREF
  int TWIPSMetricById; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]

  v15 = 0;
  v2 = a2;
  TWIPSMetricById = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( !a2 )
  {
    TWIPSMetricById = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFF6FA, v8, v11);
    v17 = GetTWIPSMetricById(0, v9, v12);
    v18 = GetTWIPSMetricById(0, v10, v13);
    v14 = 0;
    FastGetProfileIntFromID(a1, 23, 150, 0, &v14, 0);
    v2 = &v15;
    v19 = v14;
  }
  v4 = v2[1];
  if ( v4 <= 0 )
    v4 = 0;
  v5 = v2[2];
  v2[1] = v4;
  if ( v5 <= 0 )
    v5 = 0;
  v2[2] = v5;
  v6 = v2[3];
  if ( v6 <= 0 )
    v6 = 0;
  v2[4] &= 0xFu;
  v2[3] = v6;
  *(_DWORD *)(_gpsi + 1724) = v4 + 6;
  *(_DWORD *)(_gpsi + 1728) = *(_DWORD *)(_gpsi + 1936) + 6;
  *(_DWORD *)(_gpsi + 1684) = v2[2] + *(_DWORD *)(_gpsi + 1724);
  *(_DWORD *)(_gpsi + 1688) = v2[3] + *(_DWORD *)(_gpsi + 1728);
  result = v2[4];
  *(_DWORD *)(_gpsi + 1720) = result;
  return result;
}
