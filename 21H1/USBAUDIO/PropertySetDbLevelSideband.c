/*
 * XREFs of PropertySetDbLevelSideband @ 0x1C0028D24
 * Callers:
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA54 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F7B4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002316C (DeviceRequestPowerUp.c)
 */

NTSTATUS __fastcall PropertySetDbLevelSideband(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int *a5, _DWORD *a6)
{
  int v7; // r11d
  __int64 v8; // rax
  int v9; // r10d
  NTSTATUS result; // eax
  _DWORD *v11; // rdi
  int v12; // ebx

  v7 = -1073741811;
  v8 = *(_QWORD *)(a1 + 16);
  *a6 = 0;
  v9 = *a5;
  if ( *(_DWORD *)(v8 + 528) == 1 )
  {
    if ( (unsigned int)a4 < *(_DWORD *)(a2 + 92) )
    {
      v11 = (_DWORD *)(32LL * (unsigned int)a4 + *(_QWORD *)(a2 + 128));
      v12 = v11[7];
      if ( v9 <= v12 )
      {
        v12 = *a5;
        if ( v9 < v11[6] )
          v12 = v11[6];
      }
      *a5 = v12;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 136))(a1, a2);
      if ( v7 >= 0 )
      {
        v11[3] = v12;
        *a3 = 0;
      }
    }
    return v7;
  }
  else
  {
    result = DeviceRequestPowerUp((PIRP *)a1, a2, (__int64)a5, a4);
    if ( result < 0 )
      return -1073741661;
    else
      *a6 = 1;
  }
  return result;
}
