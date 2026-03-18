/*
 * XREFs of ?UnInitialize@InkDevice@@UAEXXZ @ 0x1B12FF
 * Callers:
 *     ??1InkDevice@@UAE@XZ @ 0x1B0320 (--1InkDevice@@UAE@XZ.c)
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UAEXXZ @ 0x1A172A (-UnInitialize@RimBackedDeviceBase@Rim@@UAEXXZ.c)
 */

void __thiscall InkDevice::UnInitialize(InkDevice *this)
{
  int v2; // eax
  _BYTE v3[32]; // [esp+Ch] [ebp-2Ch] BYREF
  int v4; // [esp+2Ch] [ebp-Ch]
  int v5; // [esp+30h] [ebp-8h]
  int v6; // [esp+34h] [ebp-4h]

  if ( *((_DWORD *)this + 3) )
  {
    Rim::RimBackedDeviceBase::UnInitialize(this);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    *((_DWORD *)this + 14) = 0;
    *((_DWORD *)this + 15) = v5;
    *((_DWORD *)this + 16) = v6;
    memset(v3, 0, sizeof(v3));
    v2 = *((_DWORD *)this + 26);
    qmemcpy((char *)this + 68, v3, 0x20u);
    *((_DWORD *)this + 25) = 0;
    if ( v2 )
    {
      Win32FreePool(v2);
      *((_DWORD *)this + 26) = 0;
    }
    if ( *((_DWORD *)this + 27) )
    {
      Win32FreePool(*((_DWORD *)this + 27));
      *((_DWORD *)this + 27) = 0;
    }
  }
}
