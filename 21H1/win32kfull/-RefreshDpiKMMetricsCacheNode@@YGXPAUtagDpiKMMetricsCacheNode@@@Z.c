/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YGXPAUtagDpiKMMetricsCacheNode@@@Z @ 0x155135
 * Callers:
 *     _GetDPIMETRICSForDpiUnsafe@4 @ 0x91A30 (_GetDPIMETRICSForDpiUnsafe@4.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     _CreateScaledFont@28 @ 0x155260 (_CreateScaledFont@28.c)
 */

void __thiscall RefreshDpiKMMetricsCacheNode(unsigned __int16 *this)
{
  struct HLFONT__ **v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7[15]; // [esp+Ch] [ebp-3Ch] BYREF

  if ( this[1] )
  {
    v2 = (struct HLFONT__ **)Get96DpiMetrics();
    CreateScaledFont(v2[7], *this, *this, (int)(this + 20), (int)(this + 22), 0);
    memset(v7, 0, sizeof(v7));
    if ( !*((_DWORD *)this + 2) )
    {
      if ( CreateScaledFont(*v2, (int)v7, *this, (int)(this + 6), (int)(this + 8), (int)v7) )
      {
        v3 = v7[4];
        *((_DWORD *)this + 5) = v7[8];
        v4 = *((_DWORD *)this + 4) + 2;
        *((_DWORD *)this + 6) = v3;
        *((_DWORD *)this + 8) = v3 + v4;
        *((_DWORD *)this + 7) = v7[1] + 1;
      }
    }
    CreateScaledFont(v2[10], v3, *this, 0, 0, 0);
    CreateScaledFont(v2[11], v5, *this, 0, 0, 0);
    CreateScaledFont(v2[12], v6, *this, 0, 0, 0);
    this[1] = 0;
  }
}
