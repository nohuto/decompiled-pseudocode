/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0010AE0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0010A5C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C000FF5C (GetMonitorRectForDpi.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0084880 (SetOrCreateRectRgnIndirectPublic.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  HRGN result; // rax
  int v3; // r8d
  int v4; // eax
  char *v5; // rbx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return (HRGN)*((_QWORD *)a1 + 9);
  v3 = -1;
  if ( a2 == *((unsigned __int16 *)gpsi + 3499) )
  {
    v3 = 0;
  }
  else if ( a2 >= 0x60u && a2 == 24 * (a2 / 0x18u) )
  {
    v3 = (a2 - 72) / 24;
    if ( v3 >= 18 )
      v3 = -1;
  }
  v4 = 0;
  if ( v3 != -1 )
    v4 = v3;
  v5 = (char *)a1 + 8 * v4;
  result = (HRGN)*((_QWORD *)v5 + 10);
  if ( !result )
  {
    *(_OWORD *)v6 = *(_OWORD *)GetMonitorRectForDpi(v6, (__int64)a1, a2);
    SetOrCreateRectRgnIndirectPublic(v5 + 80, v6);
    return (HRGN)*((_QWORD *)v5 + 10);
  }
  return result;
}
