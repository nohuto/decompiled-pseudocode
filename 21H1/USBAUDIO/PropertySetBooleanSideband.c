/*
 * XREFs of PropertySetBooleanSideband @ 0x1C00286C8
 * Callers:
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F078 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F7B4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002316C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetBooleanSideband(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        _BYTE *a5,
        _DWORD *a6)
{
  __int64 v7; // rbx
  int v8; // r9d
  __int64 v9; // rsi
  NTSTATUS v10; // ecx
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0;
  v7 = a4;
  v8 = -1073741811;
  if ( *a5 > 1u )
    return (unsigned int)v8;
  v9 = *(_QWORD *)(a2 + 128);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 528LL) == 1 )
  {
    if ( (unsigned int)v7 < *(_DWORD *)(a2 + 92) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, _QWORD, int, _DWORD *))(a2 + 136))(
             a1,
             a2,
             a5,
             (unsigned int)v7,
             1,
             v12);
      if ( v8 >= 0 )
      {
        *(_BYTE *)(v9 + 16 * v7 + 12) = *a5;
        *a3 = v12[0];
      }
    }
    return (unsigned int)v8;
  }
  v10 = DeviceRequestPowerUp((PIRP *)a1, a2, (__int64)a3, 3221225485LL);
  if ( v10 < 0 )
    return 3221225635LL;
  *a6 = 1;
  return (unsigned int)v10;
}
