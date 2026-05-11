/*
 * XREFs of PropertySetBooleanSideband @ 0x1C00286C8
 * Callers:
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F010 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F6E4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002316C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetBooleanSideband(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // r14
  __int64 v8; // rbp
  __int64 v10; // rsi
  NTSTATUS v11; // ebx
  __int64 v12; // r12
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v5 = a5;
  v14 = 0;
  v8 = *(_QWORD *)(a1 + 16);
  v10 = (unsigned int)a4;
  v11 = -1073741811;
  if ( *a5 > 1u )
    return (unsigned int)v11;
  v12 = *(_QWORD *)(a2 + 128);
  if ( *(_DWORD *)(v8 + 528) == 1 )
  {
LABEL_5:
    if ( (unsigned int)v10 < *(_DWORD *)(a2 + 92) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, _QWORD, int, int *))(a2 + 136))(
              a1,
              a2,
              v5,
              (unsigned int)v10,
              1,
              &v14);
      if ( v11 >= 0 )
      {
        *(_BYTE *)(v12 + 16 * v10 + 12) = *v5;
        *a3 = v14;
      }
    }
    return (unsigned int)v11;
  }
  v11 = DeviceRequestPowerUp((PIRP *)a1, a2, (__int64)a3, a4);
  if ( v11 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 544), Executive, 0, 0, 0LL);
    goto LABEL_5;
  }
  return 3221225635LL;
}
