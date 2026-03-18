/*
 * XREFs of _vSrcTranCopyS8D16@44 @ 0xFB1F4
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?vSrcTranCopyS8D16New@@YGXPAEJJ0JJJJKKPAVSURFACE@@P6GXPBE00JPAPAG@Z0@Z @ 0x1D5304 (-vSrcTranCopyS8D16New@@YGXPAEJJ0JJJJKKPAVSURFACE@@P6GXPBE00JPAPAG@Z0@Z.c)
 */

void __stdcall vSrcTranCopyS8D16(
        int a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        unsigned __int8 *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  unsigned int v11; // edx
  size_t v12; // ecx
  void (__stdcall *v13)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int8 **); // eax
  void (__stdcall *v14)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **); // [esp+0h] [ebp-5Ch]
  unsigned __int8 *v15; // [esp+4h] [ebp-58h]
  NTSTATUS v16; // [esp+10h] [ebp-4Ch]
  int v17; // [esp+14h] [ebp-48h]
  struct SURFACE *v18; // [esp+1Ch] [ebp-40h]
  struct _KFLOATING_SAVE FloatSave; // [esp+20h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v11 = a11;
  v18 = (struct SURFACE *)&gajCopyBuffer;
  v17 = 0;
  v12 = 2 * (_DWORD)&a6[-a5] + 8;
  if ( v12 > 0x1F40 )
  {
    v18 = (struct SURFACE *)PALLOCMEM2(v12, 1869899079, 0);
    if ( !v18 )
      return;
    v17 = 1;
    v11 = a11;
  }
  if ( gbMMXProcessor )
  {
    memset(&FloatSave, 0, sizeof(FloatSave));
    v16 = KeSaveFloatingPointState(&FloatSave);
    ms_exc.registration.TryLevel = 0;
    v13 = vCopyAlphaBuffer16bppMMX;
    if ( v16 < 0 )
      v13 = (void (__stdcall *)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int8 **))vCopyAlphaBuffer16bpp;
    vSrcTranCopyS8D16New(a3, a4, a5, a6, a7, a8, a9, a10, a11, (unsigned int)v13, v18, v14, v15);
    ms_exc.registration.TryLevel = -2;
    if ( v16 >= 0 )
    {
      _m_empty();
      KeRestoreFloatingPointState(&FloatSave);
    }
  }
  else
  {
    vSrcTranCopyS8D16New(a3, a4, a5, a6, a7, a8, a9, a10, v11, (unsigned int)vCopyAlphaBuffer16bpp, v18, v14, v15);
    ms_exc.registration.TryLevel = -2;
  }
  if ( v17 )
    Win32FreePool(v18);
}
