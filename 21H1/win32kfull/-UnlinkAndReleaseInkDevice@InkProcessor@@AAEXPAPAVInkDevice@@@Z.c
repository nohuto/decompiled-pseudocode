/*
 * XREFs of ?UnlinkAndReleaseInkDevice@InkProcessor@@AAEXPAPAVInkDevice@@@Z @ 0x1AC42E
 * Callers:
 *     ??1InkProcessor@@AAE@XZ @ 0xD3702 (--1InkProcessor@@AAE@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC13F (-OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??1InkDevice@@UAE@XZ @ 0x1B0320 (--1InkDevice@@UAE@XZ.c)
 */

void __thiscall InkProcessor::UnlinkAndReleaseInkDevice(InkProcessor *this, struct InkDevice **a2)
{
  InkDevice *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx

  v2 = *a2;
  v3 = (_DWORD *)((char *)*a2 + 48);
  v4 = *v3;
  if ( *(_DWORD **)(*v3 + 4) != v3 || (v5 = (_DWORD *)*((_DWORD *)*a2 + 13), (_DWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_DWORD *)(v4 + 4) = v5;
  v3[1] = 0;
  *v3 = 0;
  if ( v2 )
  {
    InkDevice::~InkDevice(v2);
    Win32FreePool(v2);
  }
  *a2 = 0;
}
