/*
 * XREFs of NtGdiGetPhysicalMonitorDescription @ 0x1C02730D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C0272B10 (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 */

__int64 __fastcall NtGdiGetPhysicalMonitorDescription(void *a1, int a2, _OWORD *a3)
{
  CMonitorAPI *v6; // rcx
  int MonitorDescription; // ebx
  unsigned __int16 *v8; // rax
  __int64 v9; // rcx
  unsigned __int16 v11[128]; // [rsp+20h] [rbp-128h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a2 == 128 )
  {
    MonitorDescription = CMonitorAPI::GetMonitorDescription(v6, a1, 0x80u, v11);
    if ( MonitorDescription >= 0 )
    {
      MonitorDescription = 0;
      ProbeForWrite(a3, 0x100uLL, 1u);
      v8 = v11;
      v9 = 2LL;
      do
      {
        *a3 = *(_OWORD *)v8;
        a3[1] = *((_OWORD *)v8 + 1);
        a3[2] = *((_OWORD *)v8 + 2);
        a3[3] = *((_OWORD *)v8 + 3);
        a3[4] = *((_OWORD *)v8 + 4);
        a3[5] = *((_OWORD *)v8 + 5);
        a3[6] = *((_OWORD *)v8 + 6);
        a3 += 8;
        *(a3 - 1) = *((_OWORD *)v8 + 7);
        v8 += 64;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)MonitorDescription;
}
