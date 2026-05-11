/*
 * XREFs of PropertySetDbLevelSideband @ 0x1C00291A4
 * Callers:
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E664 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F2F4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C00234BC (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetDbLevelSideband(PIRP *Irp, __int64 a2, _DWORD *a3, __int64 a4, int a5, _DWORD *a6)
{
  _DWORD *v7; // rcx
  __int64 v9; // rdi
  __int64 v11; // r14
  NTSTATUS v12; // esi
  PIRP v13; // rbx
  int v14; // ebp
  _DWORD *v15; // rdi
  int v16; // ebx

  a5 = 0;
  v7 = a6;
  v9 = *(_QWORD *)(a2 + 128);
  v11 = (unsigned int)a4;
  v12 = -1073741811;
  v13 = Irp[2];
  v14 = *a6;
  if ( LODWORD(v13[2].UserBuffer) != 1 )
  {
    v12 = DeviceRequestPowerUp(Irp, a2, (__int64)a3, a4);
    if ( v12 < 0 )
      return 3221225635LL;
    KeWaitForSingleObject(&v13[2].Tail.CompletionKey + 1, Executive, 0, 0, 0LL);
    v7 = a6;
  }
  if ( (unsigned int)v11 < *(_DWORD *)(a2 + 92) )
  {
    v15 = (_DWORD *)(32 * v11 + v9);
    v16 = v15[7];
    if ( v14 <= v16 )
    {
      v16 = v14;
      if ( v14 < v15[6] )
        v16 = v15[6];
    }
    *v7 = v16;
    v12 = (*(__int64 (__fastcall **)(PIRP *, __int64, __int64, _DWORD *, _DWORD, int, int *))(a2 + 136))(
            Irp,
            a2,
            4LL,
            v7,
            v11,
            1,
            &a5);
    if ( v12 >= 0 )
    {
      v15[3] = v16;
      *a3 = a5;
    }
  }
  return (unsigned int)v12;
}
